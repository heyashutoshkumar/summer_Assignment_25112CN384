
#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"Enter a number:"<<endl;
    cin>>n;
    if(n==0){
        cout<<"0 is not perfect"<<endl;
        return 0;
    }
    for(int i=1;i<n;i++){
        if(n%i==0){
            sum+=i;
            
        }
    }
    if(n==sum){
        cout<<"Perfect number"<<endl;
    }
    else{
        cout<<"Not perfect"<<endl;
    }
    
    return 0;
}