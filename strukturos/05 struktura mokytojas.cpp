#include <iostream>
#include <vector>
using namespace std;
struct Mokytojas{
   string mokVardas;
   int mokAmzius;
   bool mokSkiepas;
   string mokDalykas;
   int kursaiDienos;
    Mokytojas(string vardas, int amzius, bool skiepas, string dalykas, int kursai);
    Mokytojas(string dalykas);
    void duomenuIvedimas();
    void duomenuIsvedimas();
    int darKursai(int dienos);
};


int main(){
     vector<Mokytojas>mokSar{
     Mokytojas("Petraitis Jonas", 59, 0, "Lietuviu kalba", 14),
     Mokytojas ("Onute", 25, 1, "Anglu kalba", 22),
     Mokytojas ("Plaktukas", 65, 0, "Technologijos", 25),
     Mokytojas ("Kirvius", 66, 0, "Matematika", 5)
     };
     for(int i=0; i<mokSar.size(); i++) mokSar[i].duomenuIsvedimas();

   return 0;
}

//-----------------------------------------
int Mokytojas::darKursai(int dienos)
    {
        kursaiDienos += dienos;
        return kursaiDienos;
    }
//---------------------------------

//-------------------------------------
  void Mokytojas::duomenuIsvedimas()
    {
     cout<<"Mokytojo vardas "<< mokVardas<<endl;
     cout<<"Mokytojo amzius "<< mokAmzius<<endl;
     cout<<"Ar paskiepytas?? "<< mokSkiepas<<endl;
     cout<<"Mokomas dalykas "<<mokDalykas<<endl;
     cout<<"isklausyta kursu "<<kursaiDienos<<" dienu(os)."<<endl;
     cout<<"-----------------------------------------------------"<<endl;

    }
//--------------------------------------
//-----------------------------------------
void Mokytojas::duomenuIvedimas()
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
   //----------------------------------
   //---------------------------------
  Mokytojas::Mokytojas(string dalykas)
   {
       mokVardas = "";
       mokAmzius = 0;
       mokSkiepas = 0;
       mokDalykas = dalykas;
       kursaiDienos = 0;
   }
//-------------------------------------------

  Mokytojas::Mokytojas(string vardas, int amzius, bool skiepas, string dalykas, int kursai)
   {
       mokVardas = vardas;
       mokAmzius = amzius;
       mokSkiepas = skiepas;
       mokDalykas = dalykas;
       kursaiDienos = kursai;
   }
   //------------------------------

