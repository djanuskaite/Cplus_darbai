#include <iostream>
using namespace std;
int main()
{
    int kiek, suma(0), paz, maxPaz, kelintas;
    float vid;

    cout<<"Kiek Petriukas turi pazymiu "; cin>>kiek;
    for(int i=1; i<=kiek; i++)
    {
        cout<<"iveskite "<<i<<"-aji pazymi ";
        cin>>paz;
        if(paz>10 or paz<1) {
            cout<<"blogas pazymys/n";
            i--;
        }
      else { suma = suma + paz;
      if(i == 1){maxPaz = paz; kelintas=i;}
      else if (maxPaz<=paz){maxPaz = paz; kelintas=i;}
      }
    }
    vid = (float)suma / kiek;
    cout <<"petriuko vidurkis "<<vid;
    cout<<"/n max ivertinimas "<<kelintas <<" pazymys "<<maxPaz;
    return 0;
}
