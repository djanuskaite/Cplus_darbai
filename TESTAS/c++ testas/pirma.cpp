#include <iostream>
#include <fstream>
using namespace std;
ifstream in("numbers.txt");
ofstream out("rez.txt");
void ivedimasMasyvo(int Z[], int &kiek);
void isvedimasMasyvo(int Z[], int kiek, string txt);
int veiksmai(int Z[], int kiek);                           // int naudojam, kad returnintu

int main()
{
    int kiekS, S[10];
    ivedimasMasyvo(S, kiekS);
    isvedimasMasyvo(S, kiekS, "Numbers: ");
    veiksmai(S, kiekS); //pasiimam bendrai pazymius ir ju kieki

    in.close(); // uzdarome bylas
    out.close();
    return 0;
}

//------------Masyvo ivedimas-------
void ivedimasMasyvo(int Z[], int &kiek)
{
   kiek=0;
   while(!in.eof()) //skaityk duomenis tol kol ne failo pabaiga
    {
        in>>Z[kiek];
        kiek++;
    }
}

//-------------Masyvo isvedimas-----------
void isvedimasMasyvo(int Z[], int kiekis, string txt)
{
    out<<txt<<" ";
    for(int i=0; i<kiekis;i++)
    {
        out<<Z[i]<<" ";
    }
    out<<endl;
}
//------------veiksmai su skaiciais------------
int veiksmai(int Z[], int kiek)       //skaiciu masyvas ir ju kiekis
{
    int ats = 0;
    for (int i = 0; i < kiek; i++)
    {
        if (Z[i] < 0)                 //ieskom minusiniu
        {
            if (Z[i] % 2 != 0) {     //cia, kad nelyginiai
                ats = ats + Z[i];
            }
        }
    }

    out<<"Sum: "<<ats;
    return ats;
}


