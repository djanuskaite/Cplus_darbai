#include <iostream>
using namespace std;
int main()
{
int n,answ,m,rest;
cout<<"Enter a number: ";
cin>>n;
cout<<"Enter a second number : ";
cin>>m;
answ = n/m;
rest = n%m;
cout<<"Answer is = "<<answ<<endl;
cout<<"Liekana is = "<<rest<<endl;
return 0;
}
