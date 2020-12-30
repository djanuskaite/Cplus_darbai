#include <iostream>
#include <iomanip>
//Pozicijos!!!
#include <cmath>
using namespace std;
int main()
{

  //10 20 50 1 2 galimi variantai
  double kavosKaina, likoSumoketi, moneta;
  cout<<"Kokia kavos kaina? ";
  cin>>kavosKaina;//2.50
  likoSumoketi = kavosKaina;
    do
    {
     cout<<"Meskite moneta ";
     cin>>moneta;
     if(moneta > 2){moneta=moneta / 100;}
     likoSumoketi = likoSumoketi - moneta;
     if(likoSumoketi<=0.001){
                            cout<<"\nskanios kavos\n";
                            cout<<"Jusu graza "<<setw(5)<<fixed<<setprecision(2)<<likoSumoketi;
                        }
              else {
                       cout<<"liko sumoketi "<<setw(5)<<fixed<<setprecision(2)<<abs(likoSumoketi)<<endl;

                    }

    }
    while (likoSumoketi>0.001);
return 0;
}

