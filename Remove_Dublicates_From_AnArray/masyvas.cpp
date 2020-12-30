#include <iostream>
#include <fstream>
using namespace std;
ifstream in("duom.txt");
ofstream out("rez.txt");
void kiekis(int &kiek);
void skaitymas(int Z[], int kiek);
void rasymas(int Z[], int kiek, string txt);
void removeDuplicates(int Z[], int &kiek);
void removeNumber(int Z[], int idx, int &kiek);



int main()
{
  int masKiek;
  kiekis(masKiek);
  int M[masKiek];
  skaitymas(M, masKiek);
  rasymas(M, masKiek, "Pradinis masyvas\n");
  removeDuplicates(M, masKiek);
  rasymas(M, masKiek, "\nGalutinis masyvas\n");
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
void removeNumber(int Z[], int idx, int &kiek)
{
	int i;
	for(i = idx; i < kiek; i++)
		Z[i] = Z[i + 1];
	kiek--;
}

void removeDuplicates(int Z[], int &kiek)
{
	int i, j;
	int number;
	for(i = 0; i < kiek; i++)
	{
		number = Z[i];
		for(j = i + 1; j < kiek; j++)
		{
			if(number == Z[j])
			{
				removeNumber(Z, j, kiek); j--;
			}
		}
	}
}
