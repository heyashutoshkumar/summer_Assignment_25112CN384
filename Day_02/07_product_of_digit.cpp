//WRITE A PROGRAM TO FIND THE PRODUCT OF DIGIT OF GIVEN NUMBER.
#include<iostream>
using namespace std;
int main(){
    int n,d=0,p=1;
    cout<<"Enter a number :"<<endl;
    cin>>n;
    while(n>0){
        d=n%10;
        p=p*d;
        n=n/10;
    }
    cout<<"Product of digits : "<<p;
    return 0;
}