//WAP to count the set of bits in a given number.
#include<iostream>
using namespace std;
int main(){
    int decimal=0,count=0;
    cout<<"Enter a deimal number:"<<endl;
    cin>>decimal;
    while(decimal>0){
        int d=decimal%2;
        if(d==1){
            count++;
        }
        decimal/=2;
    }cout<<"Total set bits are : "<<count; 
    return 0;
}