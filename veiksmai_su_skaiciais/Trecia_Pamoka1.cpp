#include <iostream>
using namespace std;
int main ()
{
    int turimEur, reikiaEur;
    cout<<"Kiek pinigu turime? ";
    cin>>turimEur;
    cout<<"Kiek pinigu reikia? ";
    cin>>reikiaEur;
    if (turimEur>reikiaEur) cout<<"Viskas OK";
                else if (turimEur<reikiaEur)cout<<"Nekazka...";
                else cout<<"Vos vos...";


    return 0;
}
