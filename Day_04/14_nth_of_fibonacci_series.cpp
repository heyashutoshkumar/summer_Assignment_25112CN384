//WAP to find the nth term of the fibobacci series.
#include<iostream>
using namespace std;
int main(){
    int n,a=0,b=1,c=0;
    cout<<"Enter a value of n:"<<endl;
    cin>>n;
    if(n==1)
        cout<<"Nth term is:"<<a<<endl;
    else if(n==2)
        cout<<"Nth term is:"<<b;
    else{
        for(int i=0;i<n-2;i++)
    {
        c=a+b;
        a=b;
        b=c;
    }    
    cout<<"Nth term is:"<<b;
    }
    return 0;
}