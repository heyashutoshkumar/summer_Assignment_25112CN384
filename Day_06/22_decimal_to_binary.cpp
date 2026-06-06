//WAP to convert the decimal number to binary number.
#include<iostream>
using namespace std;
int main(){
    int decimal,power=1;
    long long binary=0; 
    cout<<"enter a decimal number:"<<endl;
    cin>>decimal;
    while(decimal>0){
        int d=decimal%2;
        binary=binary+power*d;
        power*=10;
        decimal/=2;
    }
    cout<<"Binary number for given decimal number is :"<<binary<<endl;
    return 0;
}