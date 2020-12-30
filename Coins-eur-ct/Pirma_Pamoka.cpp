#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
int main ()
{
   int pinigai,eur, ct;
   cout<<"Kiek imetei monetu?";
   cin>>pinigai;
   eur = pinigai / 100;
   ct = pinigai % 100;
   cout<<pinigai<<" ct. = "<<eur<<" eur. "<<ct<<" ct.";




return 0;

}
