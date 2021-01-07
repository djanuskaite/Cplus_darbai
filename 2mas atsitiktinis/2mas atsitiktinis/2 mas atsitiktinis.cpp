#include <iostream>
#include <ctime>
#include <fstream>
using namespace std;
ifstream in("rez.txt");
ofstream out("rez.txt");

int main()
{
    srand(time(NULL));
    int elSk;
    elSk=rand() % 30 + 10;// nuo 10 iki 40
    out<<elSk<<endl;
    int A[elSk];

    //nuo -100 iki  100
    for(int i= 0; i<elSk; i++){
        A[i]=rand()%100 + (rand()%100*(-1));
    }
//------------------------------------

        for(int i= 0; i<elSk; i++){
            if(i!=elSk-1) {out<<A[i]<<" ";}
                  else {out<<A[i]<<endl;}
    }
    in.seekg(0);
//---------------------------------------
  int bSk(0), lk, B[elSk];
  in>>lk;
   for(int i= 0; i<elSk; i++){
        in>>lk;
        if(lk>0){
                    B[bSk]=lk;
                    bSk++;
                            }
        }
 //----------------------------------------
    for(int i= 0; i<bSk; i++){
            if(i!=bSk-1) {out<<B[i]<<" ";}
                  else {out<<B[i]<<endl;}
    }
//-----------------------------------------
    in.close();
    out.close();
    return 0;
}
