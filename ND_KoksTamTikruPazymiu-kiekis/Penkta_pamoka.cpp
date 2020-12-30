#include <iostream>
using namespace std;
void kiekis(string txt, int &kiek);
void ivedimas(string txt, int kiek, int Z[]);
void isvedimas(string txt, int kiek, int Z[]);
float vidurkis(int kiek, int Z[]);//grazina per varda!!!!
void vidurkoIsvedimas(string ktxt, float vid, string txt);
void geriausioRadimas(float vid1, string txt1, float vid2, string txt2, float &gvid, string &gtxt);
//Parasyti vidurkio isvedimo funkcija +
//Geriausiai besimokancio mokinio radimo funkcija +
//Geriausiai besimokancio mokinio isvedimo funkcija +

/*Naujas ND. Parasykite funkcija, kuri skaiciuotu kiek kiekvienas mokinys turi tam tikru pazymiu
  Pav.
  Petriuko pazymiai
  5 8 4 5 8 7 4 5 4 8 7 10
  tai
  1 - 0  K[i] = 0; jei eil nr 0 (i) ar paz==i+1 jei taip K[i] = K[i] + 1;
  2 - 0
  3 - 0
  4 - 3
  5 - 3
  6 - 0
  7 - 2
  8 - 3
  9 - 0
  10 -1
 */


int main()
{
   int kiekP, kiekA, kiekM;
   kiekis("Petriukas", kiekP);
   int P[kiekP];
   ivedimas("Petriuko ", kiekP, P);
   kiekis("Antanas", kiekA);
   int  A[kiekA];
   ivedimas("Antano ", kiekA, A);
   kiekis("Martynas", kiekM);
   int  M[kiekM];
   ivedimas("Martyno ", kiekM, M);
   isvedimas("\nPetriuko pazymiai\n",kiekP, P);
   isvedimas("\nAntano pazymiai\n",kiekA, A);
   isvedimas("\nMartyno pazymiai\n",kiekM, M);
   float vidP, vidA, vidM;
   vidP = vidurkis(kiekP, P);
   vidA = vidurkis(kiekA, A);
   vidM = vidurkis(kiekM, M);
   vidurkoIsvedimas("", vidP,"Petriuko vidurkis ");
   vidurkoIsvedimas("", vidA,"Antano vidurkis ");
   vidurkoIsvedimas("",vidM,"Martyno vidurkis ");
   string gerMok;
   float gerVid;
   geriausioRadimas(vidP, "Petriukas", vidA, "Antanas", gerVid, gerMok);
   geriausioRadimas(vidM, "Martynas", gerVid, gerMok, gerVid, gerMok);
   vidurkoIsvedimas("Geriausias " , gerVid , gerMok );




    return 0;
}

//-----------kiekio ivedimas-----------------
void kiekis(string txt, int &kiek)
{
   cout<<"Kiek "<<txt<<" turi pazymiu?";
   cin>>kiek;
}
//-------------------------------------------
//----------------Ivedimas masyvo -----------
void ivedimas(string txt, int kiek, int Z[])
{
  for(int i=0; i<kiek; i++)
     {
      cout<<"Iveskite "<<txt<<i+1<<"-aji pazymi ";
      cin>>Z[i];
      if(Z[i]>10 or Z[i]<1) {
                            cout<<"blogas pazymys\n";
                            i--;
                            }
     }
}
//------------------------------------------
//------------isvedimas---------------------
void isvedimas(string txt, int kiek, int Z[])
{
  cout<<txt;
  for(int i=0; i<kiek; i++)
    {
      cout<<Z[i]<<" ";
    }
    cout<<endl;
}
//-------------------------------------------
//------------Vidurkis-----------------------
float vidurkis(int kiek, int Z[])
{
  int suma(0);
  float vid;
  for(int i=0; i<kiek; i++)// 5/ 2 = 2   5 / 2 = 2.5
        {
            suma = suma + Z[i];
        }
  vid = (float)suma / kiek;
  return vid;
}
//-----------------------------------------
//---------------Vidurkio isvedimas--------
void vidurkoIsvedimas(string ktxt, float vid, string txt)
{
   cout<<ktxt<<txt<<vid<<endl;
}
//-----------------------------------------
//-----------max vid radimas---------------
void geriausioRadimas(float vid1, string txt1, float vid2, string txt2, float &gvid, string &gtxt)
{
   if(vid1 > vid2){
                    gvid = vid1;
                    gtxt = txt1;
                    }
         else {
                gvid = vid2;
                gtxt = txt2;
                }
}
//-------------------------------------------
