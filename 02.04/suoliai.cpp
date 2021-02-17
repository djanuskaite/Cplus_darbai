#include <iostream>
#include <fstream>
#include <vector>
#include <iomanip>
#include <algorithm>
/*
 jei yra du geriausi vienodi paimti ta, kurio vidurkis geresnis, jei vidurkiai vienodi paimti abu

*/
using namespace std;
struct Tolis
{
    string vardas;
    string pavarde;
    vector <float> Suoliai;
    float geriausias;
    float vidurkis;
};
   ofstream out("rez.txt");
   const char Db1[]="koma1.txt";
   const char Db2[]="koma2.txt";
   void getKomandosDuomenys(vector<Tolis>&S1, const char byla[]);
   void raso(vector<Tolis>&S1, string txt, bool sp);
   void getDidziausias(vector<Tolis>&S1);
   void rikiavimas(vector<Tolis>&S1);

int main()
{
  vector<Tolis>superKom, Kom1, Kom2;
  getKomandosDuomenys(superKom, Db1);
  getKomandosDuomenys(superKom, Db2);
  raso(superKom, "Pradiniai duomenys\n", false);
  getDidziausias(superKom);
  raso(superKom, "\nDuomenys su geriausiu\n", true);
  rikiavimas(superKom);
  raso(superKom, "\nSurikiuoti Duomenys su geriausiu\n", true);

  superKom.erase(superKom.begin()+5, superKom.end());
  raso(superKom, "\n Isrinkti 5 geriausi\n", true);

    return 0;
}
//-------------------------------------
 void getKomandosDuomenys(vector<Tolis>&S1, const char byla[])
 {
    Tolis W[1];
    char zodis[16];
    vector<float>sk;
    float a;
    ifstream in(byla);
    while(!in.eof()){
       in.get(zodis, 16);
       W[0].vardas = zodis;
       in.get(zodis, 16);
       W[0].pavarde = zodis;
       for(int i=0; i<3; i++ ) {in>>a; sk.push_back(a);}
       W[0].Suoliai = sk;
       sk.clear();
       in.ignore(80, '\n');
       S1.push_back(W[0]);
    }
    in.close();
 }
//----------------------------------------
//---------------------------------
void raso(vector<Tolis>&S1, string txt, bool sp)
{
    out<<txt;
    for(int i=0; i<S1.size(); i++){
        out<<S1[i].vardas<<S1[i].pavarde;
        for(int j=0; j<3; j++) out<<setw(6)<<S1[i].Suoliai[j];
        if (sp) out<<setw(6)<<S1[i].geriausias;
        out<<endl;
    }

}
//-------------------------------------
    void getDidziausias(vector<Tolis>&S1)
    {
        for(int i=0; i<S1.size(); i++)
              S1[i].geriausias = *max_element(S1[i].Suoliai.begin(), S1[i].Suoliai.end());
    }
//----------------------------------------
   void rikiavimas(vector<Tolis>&S1)
   {
       Tolis K;
       for(int i=0; i<S1.size(); i++)
          for(int j=1; j<S1.size(); j++)
              if(S1[j-1].geriausias < S1[j].geriausias)
                                        {
                                            K=S1[j];
                                            S1[j]=S1[j-1];
                                            S1[j-1]=K;
                                        }
   }
//---------------------------------------
