#include <iostream>
using namespace std;

int main()
{
    for(int i=0; i<5; i++ )
    {
       for(int j = 5-i; j>0; j--)
        {
          cout<<j<<"  ";
        }
        cout<<endl;
    }

    return 0;
}
