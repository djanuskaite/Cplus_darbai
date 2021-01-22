#include <iostream>
#include <vector>
using namespace std;
void sp(vector<int> A);
int main()
{
    vector<int> V{1,2,3,4,5};
    vector<int>::iterator it1, it2;
    it1 = V.begin();
    it2 = V.end();
    sp(V);
    V.push_back(10);
    V.push_back('a');
    V.push_back(9.854);
   // V.push_back("labas"); neveiks?!
    sp(V);
  //  V.assign(20, 13); // uzpildo 13 20kartu
    V.pop_back();
    sp(V);
    V.insert(V.begin(),0);
    V.insert(V.end(),0);
    V.insert(V.end()-4,-5);
    sp(V);
    V.erase(V.begin()+2);
     sp(V);
     V.erase(V.begin()+2, V.end()-4);
    sp(V);
    vector<int>V1{2,3,4,5};
     vector<int>V2{20,30,40,50};
      sp(V1);
     sp(V2);
     V1.swap(V2);
     sp(V1);
     sp(V2);
     V2.clear();
     sp(V2);
     V.resize(25);
     sp(V);






    return 0;
}

//------------------spausdink-------------------
void sp(vector<int> A)
{
     for(int i=0; i<A.size(); i++)
        cout<<A[i]<<" ";
     cout<<endl;
     cout<<"vektoriaus dydis "<<A.size()<<endl;
}
