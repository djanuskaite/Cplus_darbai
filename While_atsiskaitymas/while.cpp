#include <iostream>
using namespace std;

int main()
{
    long long digit, n , quantity=0, sum=0;   // long long digit instead of int digit for ability to write more than 10 digits. 
    cout<<"Enter a number: ";
    cin>>n;

    while(n > 0)
    {
    digit=n%10;

        if(digit%2!=0 && digit >3)
             {
              sum=sum+digit;
              quantity++;
             }
          n=n/10;
    }

    cout << "Sum : " << sum;
    cout << "\nQuantity : " << quantity;
}


