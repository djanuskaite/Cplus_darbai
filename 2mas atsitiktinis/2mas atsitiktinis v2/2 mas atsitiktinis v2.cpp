#include <iostream>
#include <ctime>
#include <fstream>
#include <iomanip>
using namespace std;
const int col=100;
void elSkaicius(int &row, int &col);
void generavimas (int Arr[][col], int row, int col);
void rasymas(int Arr[][col], int row, int col);
int suma(int Arr[][col], int row, int col);


ofstream out("rezv2.txt");

int main()
{
   int n, m;
   elSkaicius(n, m);
   int A[n][100];
  // cout<<n<<" "<<m;
   generavimas(A, n, m);
   rasymas(A, n, m);
   int sumaViso;
   sumaViso = suma(A, n, m);
   out<<"\n Visu masyvo elementu suma = "<<sumaViso;


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
//---------------veiksmai----------------------------
int suma(int Arr[][col], int row, int col)
{
    int sum(0);
    for(int i=0; i<row; i++)
            for(int j=0; j<col; j++)
                sum+= Arr[i][j];
  return sum;
}

//----------------------------------------------------
