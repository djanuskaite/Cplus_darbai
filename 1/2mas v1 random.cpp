#include <iostream>
#include <ctime>
using namespace std;
int main()
{
  srand(time(NULL));
  int  n, m;
  cout<<"kiek masyve eiluciu "; cin>>n;
  cout<<"kiek masyve stulpeliu "; cin>>m;
  int A[n][m];
  //--------------ivedimas---------------
  for(int i=0; i<n; i++)
  {
      for(int j=0; j<m; j++)
      {
          A[i][j]=-10 + rand() % 100;
      }
  }
 //------------------------------------------
 //------------Spausdiname-------------------
for(int i=0; i<n; i++)
  {
      for(int j=0; j<m; j++)
      {
          cout<<A[i][j]<<" ";
      }
      cout<<endl;
  }
 //------------------------------------------
    return 0;
}
