#include <iostream>
using namespace std;
void kiekis(string txt, int &kiek);
void ivedimas(string txt, int kiek, int Z[]);
void isvedimas(string txt, int kiek, int Z[]);
float vidurkis(int kiek, int Z[]);//grazina per varda!!!!
//Parasyti vidurkio isvedimo funkcija
//Geriausiai besimokancio mokinio radimo funkcija
//Geriausiai besimokancio mokinio isvedimo funkcija

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
   cout<<"Petriuko vidurkis "<<vidP<<endl;
   cout<<"Antano vidurkis "<<vidA<<endl;
   cout<<"Martyno vidurkis "<<vidM<<endl;




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
