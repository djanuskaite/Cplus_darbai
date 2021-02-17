#include <iostream>
#include <vector>
using namespace std;
struct Mokytojas{
   string mokVardas;
   int mokAmzius;
   bool mokSkiepas;
   string mokDalykas;
   int kursaiDienos;
   void duomenuIvedimas()
   {
       char zodis[20];
       cout<<"Koks mokytojo vardas? "; getline(cin, mokVardas);
       cout<<"Kiek metu ? "; cin>>mokAmzius;
       cout<<"Ar mokytojas paskiepytas (0/1) ? "; cin>>mokSkiepas;
       cin.ignore(80, '\n');
       cout<<"Koks destomas dalykas? "; getline(cin, mokDalykas);
       cout<<"Kiek dienu isklausyta kursu? "; cin>>kursaiDienos;
       cin.ignore(80, '\n');
   }

    void duomenuIsvedimas()
    {
     cout<<"Mokytojo vardas "<< mokVardas<<endl;
     cout<<"Mokytojo amzius "<< mokAmzius<<endl;
     cout<<"Ar paskiepytas?? "<< mokSkiepas<<endl;
     cout<<"Mokomas dalykas "<<mokDalykas<<endl;
     cout<<"isklausyta kursu "<<kursaiDienos<<" dienu(os)."<<endl;
     cout<<"-----------------------------------------------------"<<endl;

    }

    int darKursai(int dienos)
    {
        kursaiDienos += dienos;
        return kursaiDienos;
    }

};


int main(){
     Mokytojas mokSar[5];
     for(int i= 0; i<1; i++)  mokSar[i].duomenuIvedimas();
     for(int i= 0; i<1; i++)  mokSar[i].duomenuIsvedimas();
     mokSar[0].darKursai(5);
     mokSar[0].duomenuIsvedimas();
   return 0;
}




