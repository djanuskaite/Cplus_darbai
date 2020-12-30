#include <iostream>
#include <fstream>
using namespace std;
ifstream in("pazymiaivieno.txt");
ofstream out("rez.txt");
void kiekis(int &kiek);
void ivedimasMasyvo(int Z[], int kiek);
void isvedimasMasyvo(int Z[], int kiek, string txt);
void veiksmaiSuKiekiu(int Z[], int kiek, int W[]);//W[] - masyvas, kuriame saugomi kiekiai
void kiekiuSpausdinimas(int W[], string txt);
//funkcija dazniausiai pasikartojancio pazymio radimui
void dazniausioPazRadimas(int W[]);
// float didziausias(int kiek, int Z[]);
/*Parasykite funkcija, kuri surastu kokiu pazymiu ir kiek
turi daugiausia Petriukas*/


int main()
{

    int kiekP;
    kiekis(kiekP);
    int P[kiekP];
    ivedimasMasyvo(P, kiekP);
    isvedimasMasyvo(P, kiekP, " Petriuko ");
    int KP[10];
    veiksmaiSuKiekiu(P, kiekP, KP);
    kiekiuSpausdinimas(KP, "Petriuko");
    //issikvieciame dazniausiai pasikartojanti pazymi
    dazniausioPazRadimas(KP);

    in.close();
    out.close();
    return 0;
}

//-----------Kiekis----------------
void kiekis(int &kiek)
{
  int laik;
  kiek=0;
  while(!in.eof()) //skaityk duomenuis tol kol ne failo pabaiga
    {
      in>>laik;
      kiek++;
    }
    in.seekg(0);
}
//--------------------------------
//------------Masyvo ivedimas-------
void ivedimasMasyvo(int Z[], int kiek)
{
   for(int i = 0; i<kiek;i++)
    {
        in>>Z[i];
    }
}
//--------------------------------
//-------------Masyvo isvedimas-----------
void isvedimasMasyvo(int Z[], int kiek, string txt)
{
    out<<txt<<" pazymiai\n";
    for(int i=0; i<kiek;i++)
    {
        out<<Z[i]<<" ";
    }
    out<<endl;
}
//-----------------------------------
//------------kiekiu skaiciavimas-------------
void veiksmaiSuKiekiu(int Z[], int kiek, int W[])
{
    for(int j=0; j<10; j++)
    {
        W[j]=0;
        for(int i=0; i<kiek; i++) //1 1 2 5 8 4 1 1 2
        {
            if(Z[i]==j+1){W[j]++;} //4  W[0]=4 W[1]=2
        }
    }
}
//------------------------------------------------
//--------------Kiekiu spausdinimas---------------
void kiekiuSpausdinimas(int W[], string txt)
{
    out<<txt<<" pazymiu kiekiai\n";
    for(int j=0; j<10; j++)
    {
      if( W[j]!=0 ) out<<j+1<<"-uku turim "<<W[j]<<"\n";
    }
    out<<endl;
}
//---------------------------------------------
//---------Dazniausiai pasikartojantis pazymys---------
void dazniausioPazRadimas(int W[])     //prasukam pro masyva, kuriame surasytas pazymio pasikartojimo daznumas
{
    int max = 0;
    for (int i = 0; i < 10; ++i) {
        if (W[i] > max){     //jei masyvas didesnis nei max, priskiriama masyvo elemento reiksme
            max = i + 1;
        }
    }
    out<<" Dazniausiai pasikartojantis pazymys - "<<max<<"\n";
}


