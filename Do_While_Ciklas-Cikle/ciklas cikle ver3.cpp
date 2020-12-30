#include <iostream>
#include <iomanip>
using namespace std;
int main()
//10 iki 1000 11 22 33.....101 111 121
{
   int sk;
   bool lyg;
   cout<<"sk= "; cin>>sk;
   for(int j=1; j<=sk;j++)
   {
      lyg=true;
      for(int i=2; i<=j/2;i++)
            {
                if(j % i == 0) {lyg=false; break;}
            }
      if (lyg){cout<<j<<" ";}
   }
return 0;
}

// PARASO PIRMINIUS SKAICIUS.
