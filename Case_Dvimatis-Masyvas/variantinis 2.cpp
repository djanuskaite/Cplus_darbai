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
       case 1:
       case 2:
       case 3:
       case 4:
       case 5: cout<<"darbo diena"; break;
       case 6:
       case 7: cout<<"savaitgalis"; break;
       default: cout<<"Blogai ivesti duomenys";
   }
   cout<<"\n baigem ";

    return 0;
}
