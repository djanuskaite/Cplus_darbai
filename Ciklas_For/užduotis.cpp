#include <iostream>
#include <fstream>
using namespace std;

ifstream in("Duomenys.txt");
ofstream out("Rezultatai.txt");
void read (double A[],double & kiek);                            // pereinam per masyva
void quantity(double A[],double B[], double kiek);               // randam kiekius
int print(double A[], double kiek);                              // print pazymius
int print2(double C[]);                                          // print procentus
void CalcPercent(double B[],double C[], double kiek);            // apskritai randam procentalia dali

int main()
{
	double A[100]; //A[]  visi pazymiai
	double B[100]; //B[]  visi kiekiai
	double C[100]; //C[]  Suskaiciuota procentali dalis
	double kiekis_paz;
	read(A, kiekis_paz);
	quantity(A, B, kiekis_paz);
	CalcPercent(B, C, kiekis_paz);
	print(A, kiekis_paz);
    print2(C);

    in.close(); // uzdarome bylas
    out.close();
	return 0;
}

void read(double A[],double & kiek)     //persukam per masyva
{
   in>>kiek;
   for(int i=0;i<kiek;i++)
   {
		in>>A[i];
   }
}

void quantity(double A[],double B[], double kiek)        //gaunam kieki (B masyvas)
{
    for(int j=0;j<10;j++)
	{
	    B[j] = 0;
		for(int i=0;i<kiek;i++)
        {
            if(A[i]==j+1){B[j]++;}
        }
	}
}

void CalcPercent(double B[],double C[], double kiek)        //gaunam procentu dalis (C masyvas)
{
    for(int i=0;i<10;i++)
    {
        C[i] = B[i]*100/kiek;
    }


}
int print(double A[], double kiek)                            // isprintinam visus pazymius
{
	out<<"Geografijos kontrolinio darbo pazymiai: ";
	for(int i=0;i<kiek;i++)
	{
		out<<A[i]<<" ";
	}
	return 0;
}

int print2(double C[])                                 // isprintinam procentalia dali
{
	out<<"\nPazymiu procentali dalis: \n";
	for(int i=0;i<10;i++)
	{
	    out.precision(2);                                // nustatome desimtaini tiksluma
		out<<i+1<<" - uku yra "<<fixed<<C[i]<<endl;
	}
	return 0;
}


