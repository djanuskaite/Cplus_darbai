#include <iostream>
using namespace std;
int main()
{
  /*4 5 8 7 -5 8 4 0
  4 5 0
  0*/
  int sk, suma(0), kiek(0);
  float vid;
    do
    {
      kiek++;
      cout<<"koks "<<kiek<<"-asis skaicius? ";
      cin>>sk;
      suma+=sk;
    }
    while (sk!=0);
    cout<<"Suma = "<<suma;
    if (kiek==1) {
                    cout<<"\n Negalim";
                }
            else {
                    vid = (float)suma / (kiek-1);
                    cout<<"\n Vidurkis = "<<vid;
                }



return 0;
}

