#include <iostream>
#include <fstream>
using namespace std;
ifstream in("duom.txt");
ofstream out("rez.txt");
void read (int A[], int B[], int & kiek);             //kiek yra
void ieskom(int A[],int B[], int C[], int kiekis);     //kiek lieka

int main()
{
	int A[100]; //A[]  esancios prekes
	int B[100]; //B[]  esantys
	int C[100]; //C[]  likutis
	int D[100];
	int kiekis_prekiu;
	read(A, B, kiekis_prekiu);
	ieskom(A, B, C, kiekis_prekiu);

    in.close(); // uzdarome bylas
    out.close();
	return 0;
}
void read (int A[], int B[], int & kiek)     //persukam per du masyvus, juos nuskaitom
{
   in>>kiek;
   for(int i=0;i<kiek;i++)
   {
		in>>A[i];
   }
   for(int j=0;j<kiek;j++)
   {
		in>>B[j];
   }
}

void ieskom(int A[],int B[], int C[], int kiekis)   //gaunam likuti (C masyvas)
{
    for(int i=0;i<=4;i++)
	{
		C[i]=A[i];
	}
    for(int i=0,k=5;k<11&&i<5;i++,k++)
    {
        C[k]=B[i];
    }
    out <<"Masyvas ";
    for(int i=0; i<10;i++){
        if (C[i] > 0){
            out<<" "<<C[i];
            }
    }

    }
