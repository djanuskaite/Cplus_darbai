#include <iostream>
using namespace std;
int main()
{
    int sk, k(0), ksk, x, suma(1);
    cout<<"sk = "; cin>>sk;
    ksk = sk;
    while(sk>0)
    {
    x = sk % 10;
    sk = sk / 10;
    if(x % 2 !=0)suma = suma * x;
    k++;
    }

    cout<<"skaicius "<<ksk<<" sudarytas is "<<k<<" skaitmenu";
    cout<<" ju sandauga lygi "<<suma;
    /* 587 / 10 = 58 / 10 = 5 / 10 = 0
    //7
    54874 */
    return 0;

}
