#include <iostream>
using namespace std;
int main()
{
   //1 pirmadienis 2 antrad...
   int diena;
   cout<<"Kokia diena ";
   cin>>diena;
   switch(diena)
   {
       case 1: cout<<"Pirmadienis"; break;
       case 2: cout<<"Antradienis"; break;
       case 3: cout<<"Treciadienis"; break;
       case 4: cout<<"Ketvirtadienis"; break;
       case 5: cout<<"Penktadienis"; break;
       case 6: cout<<"Sestadienis"; break;
       case 7: cout<<"Sekmadienis"; break;
       default: cout<<"Blogai ivesti duomenys";
   }
   cout<<"\n baigem ";

    return 0;
}
