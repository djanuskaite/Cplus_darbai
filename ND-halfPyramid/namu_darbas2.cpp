#include <iostream>
using namespace std;

int main()
{

    for(int i=0; i<6; i++ )
    {
       for(int j = 1; j<i+1; j++)
        {
          cout<<j<<"  ";
        }
        cout<<endl;
    }
     for(int i=4; i>=0; i--)
    {
       for(int j = 1; j<=i; j++)
        {
          cout<<j<<"  ";
        }
        cout<<endl;
    }

    return 0;
}


