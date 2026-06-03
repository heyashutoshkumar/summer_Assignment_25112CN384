//WAP TO FIND THE LCM OF TWO NUMBERS 
#include <iostream>
using namespace std;

int main()
{
    int a,b,gcd,lcm;
    cout<<"Enter two numbers :"<<endl;
    cin>>a;
    cin>>b;

    for(int i=1;i<=a&&i<=b;i++)
    {
        if(a%i==0 && b%i==0)
            gcd=i;
    }

    lcm=(a*b)/gcd;
    cout<<"GCD = "<<gcd<<endl;
    cout<<"LCM = "<<lcm;

    return 0;
}