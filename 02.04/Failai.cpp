#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
//ifstream in("duom.txt");
//ifstream in1("duom1.txt");
void skaitymas1(ifstream &in, int &a);
void skaitymas2(string byla, int &a);
void skaitymas3(char byla[], int &a);

int main()
{

   int sk;
   //  skaitymas1(in, sk);
   //skaitymas2("duom.txt", sk);
   skaitymas3("duom.txt", sk);
   cout<<sk;
    return 0;
}

void skaitymas1(ifstream &in, int &a)
{
    in>>a;
}
//-------------------------------------
void skaitymas2(string byla, int &a)
{
    ifstream in(byla.c_str());
    in>>a;
    in.close();
}
//---------------------------------------
void skaitymas3(char byla[], int &a){

  ifstream in(byla);
  in>>a;
  in.close();

}
