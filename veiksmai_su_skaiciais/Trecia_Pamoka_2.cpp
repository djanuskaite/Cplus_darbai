#include <iostream>
using namespace std;
int main ()
{
    int a, b;
    cout<<"a= " ;
    cin>>a;
    cout<<"b= " ;
    cin>>b;

    if (a>0 and b>0) cout<<"Suma";
            else if (a<0 and b>0)cout<<"Sandauga";
                        else if (a<0 and b<0)cout<<"Suma";
                                    else cout<<"Sandauga";


    return 0;
}
