#include <iostream>
#include <fstream>
#include<vector>
#include <iomanip>
#include <algorithm>

class Client {
  public:
    double indelis;
    int index;
};

class palyginimas
{
    public:
    inline bool operator() (const Client& client1, const Client& client2)
    {
        return (client1.indelis > client2.indelis);
    }
};

using namespace std;
void skaitymas(vector<Client> &vect);
void didziausiasIndelis(vector <Client> x,Client & maxi);
void maziausiasIndelis(vector <Client> x,Client & mini);
double vidurkis(vector <Client> x);
void spasdinimas(vector <Client> x, Client maximumas, Client minimumas, double vidurkis);
void rikiavimas(vector <Client>& x);
int main()
{
    vector <Client> x;
    Client maximumas;
    Client minimumas;
    double vid;
    skaitymas(x);
    didziausiasIndelis(x, maximumas);
    maziausiasIndelis(x, minimumas);
    vid=vidurkis(x);
    rikiavimas(x);
    spasdinimas(x, maximumas, minimumas, vid);
}

void skaitymas(vector<Client> &vect){

    double temp;
    int i=0;
    Client klientas;

    ifstream file("duomenys.txt");
    while (!file.eof()){
        file>>temp;
        klientas.indelis=temp;
        klientas.index=i+1;
        vect.push_back(klientas);
        i++;
    }

    file.close();
};

void spasdinimas(vector <Client> x, Client maximumas, Client minimumas, double vidurkis)
{
    ofstream file;
    file.open ("rezultatai.txt");
    for (Client n : x) {
        file << "kliento nr: "<<n.index<<"      ";
        file << "indelio dydis: "<<setprecision(9)<<n.indelis<<endl;
    }

    file << "\n\ndidziausias indelis "<<endl;
    file << "kliento nr: "<<maximumas.index<<"      ";
    file << "indelio dydis: "<<setprecision(9)<<maximumas.indelis<<endl;

    file << "\n\nmaziausias indelis "<<endl;
    file << "kliento nr: "<<minimumas.index<<"      ";
    file << "indelio dydis: "<<setprecision(9)<<minimumas.indelis<<endl;


    file << "\n\nvidurkis: "<<setprecision(9)<<vidurkis<<endl;

};

void didziausiasIndelis(vector <Client> x,Client & maxi)
{
    double max=0;
    for (Client n : x) {
        if(max<n.indelis){
            maxi.indelis=n.indelis;
            maxi.index=n.index;
            max=n.indelis;
        }
    }
}

void maziausiasIndelis(vector <Client> x,Client & mini)
{
    double min=9999999999;
    for (Client n : x) {
        if(min>n.indelis){
            mini.indelis=n.indelis;
            mini.index=n.index;
            min=n.indelis;
        }
    }
}

double vidurkis(vector <Client> x)
{
    double vidurkis=0;
    int kiekis=0;
    for (Client n : x) {
        vidurkis+= n.indelis;
        kiekis++;
    }
    return vidurkis/kiekis;
}
void rikiavimas(vector <Client>& x)
{
    sort(x.begin(), x.end(), palyginimas());
}
