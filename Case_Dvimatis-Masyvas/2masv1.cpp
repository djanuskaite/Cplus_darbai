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
                    cout<<setw(5)<<left<<A[i][j];
                }
            cout<<endl;
        }
    return 0;
}
