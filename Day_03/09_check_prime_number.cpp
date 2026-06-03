//WAP to check whether the nukmber is prime or not.
#include<iostream>
using namespace std;
int main(){
    int n,prime=1;
    cout<<"Enter the value n:"<<endl;
    cin>>n;
    for(int i=2;i<n;i++){ // ---> Here,iteration started from 2 because 1 is factor of every  number!
        if(n%i==0){
            prime=0;
            break;
        }
    }
    if(prime==1){
        cout<<"PRIME NUMBER!!";
        
    }
    else{
        cout<<"NOT PRIME NUMBER!!";
    }
    return 0;
}