//WRITE A PROGRAM TO FIND THE SUM OF DIGITS OF A NUMBER.
#include<iostream>
using namespace std;
int main(){
    int n,sum=0,d=0;
    cout<<"Enter the number:"<<endl;
    cin>>n;
    while(n>0){
        d=n%10;    //---->modulus operator: gives the remainder
        sum=sum+d;
        n=n/10;   //----->used to perform the division and give Quotient.
    }
    cout<<"Sum of the digits is:"<<sum;
    return 0;
}