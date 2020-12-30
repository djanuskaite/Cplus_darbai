#include <iostream>
using namespace std;
int main ()
{
    int a, b;
    bool salyga1;
    cout<<"a= " ;
    cin>>a;
    salyga1=(a>=5 and a<=7 or a>=11 and a<=15);
    if (salyga1) cout<<"laimingas";
            else cout<<"nelaimingas";


    return 0;
}
