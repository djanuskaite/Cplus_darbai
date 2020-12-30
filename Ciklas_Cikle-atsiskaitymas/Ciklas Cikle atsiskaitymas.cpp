#include <iostream>
#include <fstream>
using namespace std;

ifstream in("duom.txt");
ofstream out("rez.txt");
void kiekis(int &kiek);
void ivedimasMasyvo(int Z[], int kiek);
int NumberDivided(int Z[]);

int main()
{
	int Z[10];
    int kiekis_Z;
	kiekis(kiekis_Z);
	ivedimasMasyvo(Z, kiekis_Z);
	NumberDivided(Z);
    in.close();
    out.close();
	return 0;
}

//-----------Kiekis----------------
void kiekis(int &kiek)
{
  int laik;
  kiek=0;
  while(!in.eof())
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
int NumberDivided(int Z[])
{

   int n;
   n = Z[0];
   for (int i = 1; i < n; i++)
    for (int j = i+1; j < n; j++)
     for (int k = j+1; k < n; k++)
      for (int l = k+1; l < n; l++)
       if (i + j + k + l == n){
         out << i; out <<" "<<j ; out <<" "<<k ; out <<" "<<l;
         out << "\n";
        }
        return 0;
}
