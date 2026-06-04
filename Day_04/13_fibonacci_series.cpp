//WAP to print the fibonacci series.
#include<iostream>
using namespace std;
int main(){
    int n,a=0,b=1,c=0;
    cout<<"No. of terms u want:"<<endl;
    cin>>n;
    if(n>=1)
    cout<<a<<' ';
    if(n>=2)
    cout<<b<<' ';
    for(int i=0;i<n-2;i++){
        c=a+b;
        //or cout<<c<<' ';
        a=b;      
        b=c;
        cout<<b<<' ';
    }
    return 0;
}