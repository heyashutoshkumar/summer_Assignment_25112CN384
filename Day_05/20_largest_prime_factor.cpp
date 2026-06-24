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
    for(int i=2;i<=n;i++){
        int prime=1;
       
        if(n%i==0){
            int prime=1;
            for(int j=2;j<i;j++){
                if(i%j==0){
                    prime=0;
                    break;}
            }
            if(prime){
                pfac=i;
            
            }
        }
        
    }   
    cout<<"Largest prime factor is:"<<pfac<<endl;
    return 0;
}