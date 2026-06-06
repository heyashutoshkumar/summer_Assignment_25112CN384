//WAP to convert the binary number into decimal number.
#include<iostream>
using namespace std;
int main(){
    long long bin;
    int dec=0,power=1;
    cout<<"Enter binary number:"<<endl;
    cin>>bin;
    if(bin<0){
        cout<<"Not binary!!";
        return 0;
    }
    while(bin>0){
        int d=bin%10;
        if(d>1){
            cout<<"Invalid input";
            return 0;
        }
        dec=dec+power*d;
        power*=2;
        bin/=10;
    }
    cout<<"Decimal number is:"<<dec; 
    return 0;
}