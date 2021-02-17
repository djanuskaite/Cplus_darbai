#include <iostream>
#include <vector>
using namespace std;
struct Mokytojas{
   string mokVardas;
   int mokAmzius;
   bool mokSkiepas;
   string mokDalykas;
   int kursaiDienos;
};


int main(){
     Mokytojas mok1;
     //------------------------------------
        mok1.mokVardas = "Jonas";
        mok1.mokAmzius = 59;
        mok1.mokSkiepas = 0;
        mok1.mokDalykas = "Kuno kultura";
        mok1.kursaiDienos =16;
     //-----------------------------
     //-----------------------------
     cout<<"Mokytojo vardas "<< mok1.mokVardas<<endl;
     cout<<"Mokytojo amzius "<< mok1.mokAmzius<<endl;
     cout<<"Ar paskiepytas?? "<< mok1.mokSkiepas<<endl;
     cout<<"Mokomas dalykas "<<mok1.mokDalykas<<endl;
     cout<<"isklausyta kursu "<<mok1.kursaiDienos<<" dienu(os)."<<endl;

   return 0;
}




