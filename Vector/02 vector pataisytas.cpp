#include <iostream>
#include <vector>
#include <fstream>
#include <ctime>
#include <algorithm>

using namespace std;
ifstream in("duom.txt");
ofstream out("duom.txt");
void byla();

void skaityk(vector<int> &A);
void sp(vector<int> A, string txt);
void rikiavimas(vector<int> &A);
void salinimas(vector<int> &A);
int main()
{
    srand(time(NULL));
    vector<int> V;
    byla();
    skaityk(V);
    sp(V, "\n Pradinis\n");
    rikiavimas(V);
    sp(V, "\n surikiuotas\n");
    salinimas(V);
    sp(V, "\n be vienodu\n");
  //  cout<<*max_element(V.begin(),V.end());
   // cout<<*min_element(V.begin(),V.end());



 in.close();
 out.close();
    return 0;
}

//------------------spausdink-------------------
void sp(vector<int> A, string txt)
{
    out<<txt;
     for(int i=0; i<A.size(); i++)
        out<<A[i]<<" ";
     out<<endl;
     out<<"vektoriaus dydis "<<A.size()<<endl;
}
//----------------------------------------------
//-----------------Byla-------------------------
void byla()
{
    int kiek, ats;
    kiek = rand()%30 + 50;
    for(int i=0; i<kiek; i++)
        {
          ats = rand() % 100 + rand() %100*(-1);
         if (i!=kiek-1){out<<ats<<" ";}
            else {out<<ats<<endl;}
        }

}
//-------------------------------------------------
void skaityk(vector<int> &A)
{
    int sk, i(0);
    while(in>>sk){
        A.push_back(sk);
        i++;
    }

}
//--------------------------------------------
//------------------Rikiavimas---------------
void rikiavimas(vector<int> &A)
{
   // sort(A.begin(), A.end()); //didejimas
   sort(A.begin(), A.end(), greater<int>());
}
//------------------------------------------
//-----------------salinimas----------------
void salinimas(vector<int> &A)
{
    sort(A.begin(), A.end());
    A.erase(unique(A.begin(), A.end()), A.end());
}
