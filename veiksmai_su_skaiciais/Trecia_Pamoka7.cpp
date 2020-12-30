#include <iostream>
using namespace std;
int main ()
{
    int a, b, c, did;

    cout<<"a= " ;
    cin>>a;
    cout<<"b= " ;
    cin>>b;
    cout<<"c= " ;
    cin>>c;
    /*salyga1=(a>=5 and a<=7 or a>=11 and a<=15);*/

    if (a>=b and a>=c) did=a;
            else if (b>=c and b>=c) did=b;
                    else did=c;



    cout<<"Didziausias "<<did;
    return 0;
}
