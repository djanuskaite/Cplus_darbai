#include <iostream>
using namespace std;
int main()
{

   string vardas;
   int amzius;
  // cout<<"koks vardas?? ";
   //cin>>vardas;
  // getline(cin, vardas);

/* duom.txt byla
Jonas Petras   12
Antanas        28 */
    char pavarde[16], kazkas[16];

   cout<<"pavarde??  ";
   cin.get(pavarde, 16);
   cin.ignore(80, '\n');
   cout<<"kazkas??  ";
   cin.get(kazkas, 16);


   cout<<pavarde<<" "<<kazkas;


    return 0;
}

