#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
   int n, m;
   cout<<"kiek masyve eiluciu "; cin>>n;
   cout<<"kiek masyve stulpeliu "; cin>>m;
   int A[n][m];
  //------------------------------
   for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
                {
                    cout<<"A["<<i<<", "<<j<<"]= ";
                    cin>>A[i][j];
                }
        }
   //-----------------------------------
   //----------------------------------
   for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
                {
                    cout<<setw(5)<<A[i][j];
                }
            cout<<endl;
        }
   //---------------------------------
   int maxEl;
   maxEl=A[0][0];
   for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
                 if(maxEl<A[i][j]) maxEl=A[i][j];
  //------------------------------------
  cout<<"\nDidziausias masyvo elementas "<<maxEl;
  //-----------------------------------
   int Del[n];
     for(int i=0; i<n; i++)
        {
            Del[i]=A[i][0];
            for(int j=0; j<m; j++)
                 if(Del[i]<A[i][j]) Del[i]=A[i][j];
        }
 //-------------------------------------
  cout<<"didziausi eiluciu elementai......\n";
  for(int i=0; i<n; i++) cout<<Del[i]<<" ";

    return 0;
}
