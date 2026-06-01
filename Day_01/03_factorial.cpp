//WAP TO FIND THE FACTORIAL OF A NUMBER
#include<iostream>
using namespace std;
int main(){
    int n,fac=1;
    cout<<"Enter the value of N:"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        if(n==0){
            cout<<"Factorial of Zero is:1"<<endl;
        }
        else{
            fac=fac*i;
        }
    }cout<<"Factorial of number is:"<<fac<<endl;
     return 0;
}