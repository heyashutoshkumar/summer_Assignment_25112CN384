//WAP to find a pair for the givensum in array.
#include<iostream>
using namespace std;
int main(){
    int sum=0,size=0;
    cout<<"Enter the size and sum :"<<endl;
    cin>>size;
    cin>>sum;
    int ar[size];
    for(int i=0;i<size;i++){
        cin>>ar[i];
    }
    
    for(int i=0;i<size;i++){
       
        for(int j=i+1;j<size;j++){
            if(ar[i]+ar[j]==sum){
                cout<<"Elements are :"<<ar[i]<<" and "<<ar[j];
                return 0;
            }

        }
    }
    cout<<"No pair for given sum"<<endl;

    return 0; 
} 