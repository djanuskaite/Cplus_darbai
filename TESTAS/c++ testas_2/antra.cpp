#include <iostream>
#include <fstream>
using namespace std;

ifstream in("data.txt");
ofstream out("rez.txt");
void read (int A[], int B[], int & kiek);             //kiek yra prekiu
void rest(int A[],int B[], int C[] , int kiekis);     //kiek lieka
int print(int C[], int kiek);                         //isprintinam

int main()
{
	int A[100]; //A[]  esancios prekes
	int B[100]; //B[]  nupirktu kiekis
	int C[100]; //C[]  likutis
	int kiekis_prekiu;
	read(A, B, kiekis_prekiu);
	rest(A, B, C, kiekis_prekiu);
	print(C, kiekis_prekiu);


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

void rest(int A[],int B[], int C[] , int kiekis)   //gaunam likuti (C masyvas)
{
	for(int i=0;i<kiekis;i++)
	{
		C[i]=A[i]-B[i];
	}
}

int print(int C[], int kiek)
{
	out<<"Likutis: "<<endl;
	for(int i=0;i<kiek;i++)
	{
		out<<"Prekes nr. "<<i+1<<" liko "<<C[i]<<endl;
	}
	return 0;
}

