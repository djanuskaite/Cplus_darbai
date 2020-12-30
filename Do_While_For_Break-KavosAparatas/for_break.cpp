#include <iostream>
using namespace std;
int main()
{
   //break
   long long sk, kiek(0), i;
   cout<<"sk= "; cin>>sk; //15
   for( i=1; i<=sk; i++)
     {
       cout<<i<<" ";
       if(i==13){break;}
     }
   cout<<"po ciklo "<<i;
    return 0;
}
