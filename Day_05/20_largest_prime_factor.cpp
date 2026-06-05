//WAP to find largest prime factor.
#include<iostream>
using namespace std;
int main(){
    int n ,pfac=1;
    cin>>n;
    if(n==0){
        cout<<"no factor"<<endl;
        return 0;
    }
    if(n<0)
        n=-n;
    for(int i=1;i<=n;i++){
        int fac=0;
        if(n%i==0){
            fac=i;
        }
        if(fac==2){
            pfac=2;
        }
        else{

            for(int j=2;j<fac;j++){
                if(fac%j!=0){
                    pfac=j;
                }
            
        }}
    }   
    cout<<"Largest prime factor is:"<<pfac<<endl;
    return 0;
}