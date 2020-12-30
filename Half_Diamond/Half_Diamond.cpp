#include <iostream>
using namespace std;

int main()
{

    for(int i=0; i<10; i++ )
    {
       for(int j = 0; j<i+1; j++)
        {
          cout<<j<<"  ";
        }
        cout<<endl;
    }
     for(int i=8; i>=0; i--)
    {
       for(int j = 0; j<=i; j++)
        {
          cout<<j<<"  ";
        }
        cout<<endl;
    }

    return 0;
}
