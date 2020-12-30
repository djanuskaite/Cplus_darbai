#include <iostream>;
using namespace std;

int main()
{
    int sk, z, pr(0);
    cout<<"sk= "; cin>>sk;
    cout<<"koks zingsnis? "; cin>>z;
    while (pr<=sk)
    {
        cout<<pr<<" ";
        pr = pr + z; // pr+=z;
    }
    cout<<"\nPabaiga";

    return 0;

}
