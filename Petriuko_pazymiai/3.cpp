#include <iostream>
using namespace std;
int main()
{
    int sk, kiek(0);
    cout<<"sk = " cin>>sk; //15
    for(int i=1; i<=sk; i++)
    {
        if(sk % i ==0){kiek++; cout<<i " ";} //1
    }

    if(kiek > 2){cout<<"sudetinis";}
      else cout<<"pirminis";}

    return 0;

}
