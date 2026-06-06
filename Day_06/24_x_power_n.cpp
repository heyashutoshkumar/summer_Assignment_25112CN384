//WAP to find X^n without pow().
#include<iostream>
using namespace std;
int main(){
    int x=0,n=0,ans=1;
    cout<<"Enter a value of x:"<<endl;
    cin>>x;
    cout<<"Enter the value of n(raised power)"<<endl;
    cin>>n;
    int temp=n;
    if(n<0){
        n=-n;
    }
    for(int i=1;i<=n;i++){
        ans=ans*x;   
    } 
    if(x==0 && temp<0){
        cout<<"Undefined!!";
    }
    else if(temp<0)
       cout<<"X^-n = "<<(double)1/ans;
    else cout<<"X^n = "<<ans;
    return 0;
}