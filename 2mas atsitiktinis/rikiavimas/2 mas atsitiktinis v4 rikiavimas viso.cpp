#include <iostream>
#include <ctime>
#include <fstream>
#include <iomanip>
using namespace std;
const int col=100;
void elSkaicius(int &row, int &col);
void generavimas (int Arr[][col], int row, int col);
void rasymas(int Arr[][col], int row, int col);
void rikiavimas(int Arr[][col], int row, int col);


ofstream out("rikiavimas.txt");

int main()
{
   int n, m;
   elSkaicius(n, m);
   int A[n][100];
   generavimas(A, n, m);
   rasymas(A, n, m);
    rikiavimas(A, n, m);
    out<<"\n surikiuotas \n";
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
void rikiavimas(int Arr[][col], int row, int col)
{
    int x, y, laik, vietay;
    for(int i=0; i<row; i++){
       for(int j=0; j<col; j++){
         x=i;
         y=j;
         vietay=j+1; //va sitas niekselis koja pakiso
         for(int k=x; k<row; k++){
            for(int t=vietay; t<col; t++)
                    if(Arr[k][t] < Arr[x][y]){
                        x=k;
                        y=t;

                    }
            vietay=0; // sekancioje eiluteje reikia pradeti nuo pradziu, o ne nuo y;
         }
         laik = Arr[x][y];
         Arr[x][y] = Arr[i][j];
         Arr[i][j] = laik;

        }
    }
}
//-----------------------------------------------




