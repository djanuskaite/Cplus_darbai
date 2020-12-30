#include <iostream>
using namespace std;
int main()
{
   int paz;
   cout<<"Koks pazimys? ";
   cin>>paz;
   if(paz>10 or paz<1) cout<<"blogas\n";
            else cout<<"Geras\n";

    if(paz>=1 and paz<=10) cout<<"geras\n";
            else cout<<"Blogas\n";

    return 0;
}
