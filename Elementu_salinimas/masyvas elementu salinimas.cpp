#include <iostream>
#include <fstream>
using namespace std;
ifstream in("duom.txt");
ofstream out("rez.txt");
void kiekis(int &kiek);
void skaitymas(int Z[], int kiek);
void rasymas(int Z[], int kiek, string txt);
void didRadimas(int Z[], int kiek, int &did);
void naujas(int Z[], int kiek, int did, int W[], int &nKiek);
void salinimas(int Z[], int &kiek, int did);
/*
5 8 5 8 8 5 8 5 1 1 5 6 9 5 5
5 8 1 6 9
lengvesnis variantas su surikiuotu masyvu
*/


int main()
{
  int masKiek, maxElement;
  kiekis(masKiek);
  int M[masKiek];
  skaitymas(M, masKiek);
  rasymas(M, masKiek, "\n Pradinis masyvas\n");
  didRadimas(M, masKiek, maxElement);
  out<<"\n Didziausias elementas yra "<<maxElement<<endl;
  int NaujasM[masKiek], naujasKiek(0);
  naujas(M, masKiek, maxElement, NaujasM, naujasKiek);
  rasymas(NaujasM, naujasKiek, "\nNaujas masyvas be max elemento \n");
  salinimas(M, masKiek, maxElement);
  rasymas(M, masKiek, "\n Pradinis masyvas be max \n");



    in.close();
    out.close();
    return 0;
}
//-----------------------------------------
void kiekis(int &kiek)
{
    int laik;
    kiek=0;
    while(!in.eof())
    {
        in>>laik;
        kiek++;
    }
    //grazina zymekli
    in.seekg(0);
}
//---------------------------------------
//---------------------------------------
void skaitymas(int Z[], int kiek)
{
    for(int i=0;i<kiek; i++)
    {
      in>>Z[i];
    }
}
//----------------------------------------
//----------------------------------------
void rasymas(int Z[], int kiek, string txt)
{
   out<<txt;
   for(int i=0;i<kiek; i++)
    {
      out<<Z[i]<<" ";
    }
}
//----------------------------------------
//----------------------------------------
void didRadimas(int Z[], int kiek, int &did)
{
    did=Z[0];
    for(int i=1;i<kiek; i++)
    {
      if(did<Z[i])
                {
                    did=Z[i];
                }
    }
}
//----------------------------------------
//----------------------------------------
void naujas(int Z[], int kiek, int did, int W[], int &nKiek)
{
    for(int i=0;i<kiek; i++)
    {
      if(Z[i]!=did)
                {
                    W[nKiek]=Z[i];
                    nKiek++;
                }
    }
}
//----------------------------------------
//----------------------------------------
void salinimas(int Z[], int &kiek, int did)
{

   for(int i=0;i<kiek; i++)
    {
      if(Z[i]==did)
                {
                  for(int j=i+1; j<kiek; j++)
                  {
                      Z[j-1]=Z[j];
                  }
                  kiek--;
                  i--;
                }
    }
}
//------------------------------------------


