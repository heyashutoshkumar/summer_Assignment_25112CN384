//Write a recursive function to find the sum of digits.
#include<iostream>
using namespace std;
int sumDigits(int n)
{   if(n==0)
        return 0;
    return n%10 + sumDigits(n/10);
}

int main()
{
    int n;
    cout<<"Enter a number:"<<endl;
    cin>>n;

    cout<<sumDigits(n);

    return 0;
}