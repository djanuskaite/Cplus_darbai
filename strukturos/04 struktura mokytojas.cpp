#include <iostream>
#include <vector>
using namespace std;
struct Mokytojas{
   string mokVardas;
   int mokAmzius;
   bool mokSkiepas;
   string mokDalykas;
   int kursaiDienos;

    Mokytojas(string vardas, int amzius, bool skiepas, string dalykas, int kursai)
   {
       mokVardas = vardas;
       mokAmzius = amzius;
       mokSkiepas = skiepas;
       mokDalykas = dalykas;
       kursaiDienos = kursai;
   }

   Mokytojas(string dalykas)
   {
       mokVardas = "";
       mokAmzius = 0;
       mokSkiepas = 0;
       mokDalykas = dalykas;
       kursaiDienos = 0;
   }




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

     Mokytojas mokSar1("Petraitis Jonas", 59, 0, "Lietuviu kalba", 14);
     Mokytojas mokSar2("Onute", 25, 1, "Anglu kalba", 22);
     Mokytojas mokSar3("Lietuviu kalba");
     mokSar1.darKursai(10);
     mokSar1.duomenuIsvedimas();
     mokSar2.duomenuIsvedimas();
      mokSar3.duomenuIsvedimas();
   return 0;
}




