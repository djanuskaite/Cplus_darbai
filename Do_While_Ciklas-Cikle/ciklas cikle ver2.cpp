#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
bool originalas(double mon);
int main()
{

  //10 20 50 1 2 galimi variantai
  double kavosKaina, likoSumoketi, moneta;
  bool geraMoneta;
  cout<<"Kokia kavos kaina? ";
  cin>>kavosKaina;//2.50
  likoSumoketi = kavosKaina;
    do
    {
     cout<<"Meskite moneta ";//
     cin>>moneta;
   //  geraMoneta=originalas(moneta);
     if(originalas(moneta))
        {
            if(moneta > 2){moneta=moneta / 100;}
            likoSumoketi = likoSumoketi - moneta;
            if(likoSumoketi<=0.00001){
                            cout<<"\nskanios kavos\n";
                            cout<<"Jusu graza "<<setw(5)<<fixed<<setprecision(2)<<abs(likoSumoketi);
                        }
              else {
                       cout<<"liko sumoketi "<<setw(5)<<fixed<<setprecision(2)<<abs(likoSumoketi)<<endl;

                    }
        }
           else {cout<<"\nBloga moneta\n";}

    }
    while (likoSumoketi>0.00001);
return 0;
}


//---------------------------tikriname--------------
bool originalas(double mon)
{
    bool gm;
      gm=(mon==2 or mon==1 or mon==10 or mon==20 or mon==50);
      return gm;
}
//--------------------------------------------------




