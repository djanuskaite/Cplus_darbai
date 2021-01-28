#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;
struct preke{
    string pav;
    int kiek;
    double kaina;
    double suma;
};
    ifstream in("prekes.txt");
    ofstream out("cekis.txt");
    void skaitom (preke P[], int kiekis);
    void rasom (preke P[], int kiekis);
    void rikiavimas (preke P[], int kiekis);


int main()
{

    int n; //prekiu kiekis
    in>>n;
    preke Sar[n];
    skaitom(Sar, n);
    rasom(Sar, n);
    rikiavimas(Sar, n);
    in.close();
    out.close();
    return 0;
}
//-------------------Skaito---------------------
 void skaitom (preke P[], int kiekis)
 {
     for(int i = 0; i<kiekis; i++){
        in>>P[i].pav;
        in>>P[i].kiek;
        in>>P[i].kaina;
    }

 }
//------------------------------------------
    void rasom (preke P[], int kiekis)
    {
        float moketi(0);
        for(int i = 0; i<kiekis; i++){
        P[i].suma =P[i].kaina*P[i].kiek;
        moketi+=P[i].suma;
        out<<left<<setw(20)<<P[i].pav<<right<<setw(6)<<P[i].kiek<<setw(6)<<P[i].kaina<<setw(8)<<P[i].suma;
        out<<endl;
    }
        out<<setw(40)<<moketi;
}
//-----------------------------------------
//-----------------------------
    void rikiavimas (preke P[], int kiekis)
    {
        preke laik[1];
        int k;
        for(int i=0; i<kiekis-1; i++){
            k=i+1;
            for(int j=i; j<kiekis; j++)
                        if(P[j].pav<P[k].pav) k=j;

            laik[0]= P[k];
            P[k]=P[i];
            P[i]=laik[0];
            }

        out<<"\nSurikiuotas \n";
          rasom(P, kiekis);
    }












