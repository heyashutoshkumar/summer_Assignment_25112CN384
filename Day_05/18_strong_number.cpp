//WAP To check whether the number is strong or not.
#include<iostream>
using namespace std;
long long fact(int n){
    long long fac=1;
    for(int i=1;i<=n;i++){
        fac=fac*i;
    }return fac;
}
int main(){
    long long n,sum=0;
    cout<<"Enter the value of n:"<<endl;
    cin>>n;
    long long temp=n;
    if(temp==0){
        cout<<"0 is not strong"<<endl;
        return 0;
    }
    while(n>0){
        int d=n%10;
        sum=sum+fact(d);
        n/=10;
    }
    if(temp==sum){
        cout<<"YES! strong number."<<endl;
    } 
    else{
        cout<<"OPPS!Not a strong number.";
    }
    return 0;
}