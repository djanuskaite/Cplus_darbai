#include <iostream>
#include <cmath>
using namespace std;
int main()
{
   //skaiciuotuvas + - / * ^
   float sk1, sk2, rez;
   char veiksmas;
   bool geras(true);
   cout<<"Pasirinkite operacija + - * / ^ ";
   cin>>veiksmas;
   cout<<"sk1= "; cin>>sk1;
   cout<<"sk2= "; cin>>sk2;

   switch(veiksmas)
   {
       case '+': rez=sk1+sk2; break;
       case '*': rez=sk1*sk2; break;
       case '-': rez=sk1-sk2; break;
       case '/': rez=sk1/sk2; break;
       case '^': rez=pow(sk1,sk2); break;
       default: cout<<"\nBlogai ivesti duomenys\n"; geras=false;
   }
   if (geras){cout<<sk1<<" "<<veiksmas<<" "<<sk2<<" = "<<rez;}

    return 0;
}
