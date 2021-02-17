#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>

using namespace std;
ifstream in("nemoku.txt");
ofstream out("rrez.txt");


void skaityk(vector<float> &A, vector<float> &B);
void sp(vector<float> A, string txt);

int main()
{

    vector<float> T;
    vector<float> Ar;

    skaityk(T, Ar);
    sp(T, "\n bla bla bla\n");
      sp(Ar, "\n bla bla bla\n");

    cout<<*max_element(T.begin(),T.end());
   // cout<<*min_element(V.begin(),V.end());



 in.close();
 out.close();
    return 0;
}

//------------------spausdink-------------------
void sp(vector<float> A, string txt)
{
    out<<txt;
     for(int i=0; i<A.size(); i++)
        out<<A[i]<<" ";
     out<<endl;

}
//----------------------------------------------

//-------------------------------------------------
void skaityk(vector<float> &A, vector<float> &B)
{
    float sk;
    while(!in.eof()){
        in>>sk
        A.push_back(sk);
        in>>sk;
        B.push_back(sk);
    }
}
//--------------------------------------------
