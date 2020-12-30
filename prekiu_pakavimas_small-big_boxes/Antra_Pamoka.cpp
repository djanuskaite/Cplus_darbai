#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
int main ()
{
   int prekes, didelesPrekes, mazosPrekes, didelesDezes, mazosDezes, prekiuLikutisPoSupakavimo, supakuotosDideles, supakuotosMazos, supakuotosPrekes, prekiuLikutis;
   cout<<"Kiek turite is viso prekiu? ";
   cin>>prekes;
   cout<<"Kiek prekiu telpa i dideles dezes? ";
   cin>>didelesPrekes;
   didelesDezes = prekes/didelesPrekes;

   prekiuLikutisPoSupakavimo=prekes-didelesPrekes*didelesDezes;
   supakuotosDideles=didelesDezes*didelesPrekes;

   cout<<"Kiek prekiu telpa i mazas dezes? ";
   cin>>mazosPrekes;
   mazosDezes=prekiuLikutisPoSupakavimo/mazosPrekes;
   supakuotosMazos=mazosDezes*mazosPrekes;

   supakuotosPrekes=supakuotosDideles+supakuotosMazos;
   prekiuLikutis=prekes-supakuotosPrekes;


   cout<<"Kad supakuoti prekes Jums reikes "<<didelesDezes<<" dideliu deziu ir "<<mazosDezes<<" mazu deziu."<<endl;
   cout<<"Liks nesupakuotos "<<prekiuLikutis<<" prekes.";

return 0;
}
