#include <iostream>
#include <ctime>
#include <fstream>
#include <iomanip>
using namespace std;
int main()
{
   ifstream in("duom.txt");
   ofstream out("rez.txt");
  int  n, m;
  in>>n;
  in>>m;
  int A[n][m];
  //--------------ivedimas---------------
  for(int i=0; i<n; i++)
  {
      for(int j=0; j<m; j++)
      {
        in>>A[i][j];
      }
  }
 //------------------------------------------
 //------------Spausdiname-------------------
for(int i=0; i<n; i++)
  {
      for(int j=0; j<m; j++)
      {
          out<<setw(4)<<A[i][j]<<" ";
      }
      out<<endl;
  }
 //------------------------------------------



 //----------------Naujas masyvas------------------
 int B[m][n];
  for(int i=0; i<n; i++)
    for(int j=0; j<m; j++)
           B[j][i]=A[i][j];
 //-----------------------------------------------
//------------Spausdiname-------------------
out<<"\n--------------------------------------------------\n";
for(int i=0; i<m; i++)
  {
      for(int j=0; j<n; j++)
      {
          out<<setw(4)<<B[i][j]<<" ";
      }
      out<<endl;
  }
 //------------------------------------------
    in.close();
    out.close();
    return 0;
}

