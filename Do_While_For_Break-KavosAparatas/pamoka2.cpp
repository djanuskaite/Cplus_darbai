#include <iostream>
using namespace std;
int main()
{
  int sk, kiek(0),x1, suma(0), kopijaSk;
  cout<<"sk= "; cin>>sk;
  //85475/10=8547/10=854/10=85/10=8/10=0
  kopijaSk=sk;
  while (sk>0)
{
    x1 = sk % 10;
    suma+=x1;
   // cout<<sk<<" ";
    sk = sk / 10;
    kiek++;
}
cout<<kopijaSk<<" Skaitmenu yra "<<kiek<<" suma= "<<suma;
    cout<<"\nPabaiga";

return 0;
}

