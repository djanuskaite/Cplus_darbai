#include <iostream>
#include <fstream>

using namespace std;
int random(int start, int size)
{
    int number;
    number = rand() % size + start;
    return number;
}
int main()
{
    ofstream out("rez.txt");
  //  for(int k=0;k<5;k++)
   // {
    int n,m;
    n=random(10,21);
    m=random(10,21);
    int A[n][m];
    int sk=random(-100,201);
    bool found = false;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            A[i][j]=random(-100,201);
            if(A[i][j]==sk)
            {
                out<<"Atsitiktinis skaicius = "<<sk<<", rastas -> "<<"A["<<i<<"]["<<j<<"] = "<<A[i][j]<<endl;
                found=true;
            }
        }
    }
    if(!found)
    {
        out<<"Atsitiktinis skaicius = "<<sk<<" nebuvo rastas"<<endl;
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            out<<"A["<<i<<"]["<<j<<"] = "<<A[i][j]<<endl;
        }
    }
   // }
    return 0;
}
