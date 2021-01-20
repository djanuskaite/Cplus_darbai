#include <iostream>
#include <time.h>
#include <fstream>
#include <iomanip>
using namespace std;
const int col=100;
void elSkaicius(int &row, int &col);
void generavimas (int Arr[][col], int row, int col);
void rasymas(int Arr[][col], int row, int col);
void rikiavimasEilutemNuoDidziausioIkiMaziausio(int Arr[][col], int row, int col);


ofstream out("rikiavimas.txt");

int main()
{
   int n, m;
   elSkaicius(n, m);
   int A[n][100];
   generavimas(A, n, m);
   rasymas(A, n, m);
    rikiavimasEilutemNuoDidziausioIkiMaziausio(A, n, m);
    out<<"\n surikiuotas eilutem nuo didziausio iki maziausio \n";
    rasymas(A, n, m);
    out.close();
    return 0;
}
//-------------------El skaicius-------------------
void elSkaicius(int &row, int &col)
{
   srand(time(NULL));
   col=rand() % 20 + 10;// nuo 10 iki 30
   row=rand() % 20 + 10;// nuo 10 iki 30
   out<<row<<" "<<col<<endl;
}
//------------------------------------------------
//---------Generavimas----------------------------
void generavimas (int Arr[][col], int row, int col)
{
     for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            Arr[i][j]=rand()%100 + rand()%100*(-1); //????
        }
     }
}
//-------------------------------------------------
//-------------rasymas-----------------------------
void rasymas(int Arr[][col], int row, int col)
{
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
           out<<setw(5)<< Arr[i][j];
        }
       out<<endl;
     }
}
//---------------------------------------------------
//--------------------Rikiavimas---------------------
void rikiavimasEilutemNuoDidziausioIkiMaziausio(int Arr[][col], int row, int col)
{
    int temp;
    for(int i=0; i<row; i++)
    {
        for (int j = 0; j <col; j++)
        {
            for (int k = 0; k < col-j-1; k++)
           {
                if (Arr[i][k+1] > Arr[i][k])
                {
                    temp=Arr[i][k];
                    Arr[i][k]=Arr[i][k+1] ;
                    Arr[i][k+1]=temp;
                }
            }
        }
    }
}
//-----------------------------------------------
