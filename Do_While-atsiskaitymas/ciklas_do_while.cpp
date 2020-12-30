#include <iostream>
using namespace std;
int main()
{

  int sk, sandTeig=1,sandNeig=1, kiek(0), t=0,n=0;
  do
    {
      kiek++;
      cout<<"koks "<<kiek<<"-asis skaicius? ";
      cin>>sk;
      if (sk > 0){
        t++;
        sandTeig = sandTeig*sk;
      }
      else if (sk < 0){
        n++;
        sandNeig = sandNeig*sk*(-1);
      }
    }
    while (sk!=0);
    if (t == 0){
            sandTeig = 0;
}
    if (n == 0){
            sandNeig = 0;
      }
    if (sandTeig > sandNeig) {
                    cout<<"\nTeigiamu skaiciu sandauga "<<sandTeig<< " yra didesne uz neigiamu skaiciu sandauga "<<sandNeig;
                }
    else if (sandTeig < sandNeig){
                    cout<<"\nTeigiamu skaiciu sandauga "<<sandNeig<< " yra mazesne uz teigiamu skaiciu sandauga "<<sandTeig;
                }
    else if (sandTeig = sandNeig){
                    cout<<"\nSandaugos lygios";
    }


return 0;
}
