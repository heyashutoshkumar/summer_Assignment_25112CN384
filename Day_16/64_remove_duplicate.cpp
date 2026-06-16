//WAP to remove the duplicate from array.
#include<iostream>
using namespace std;
int main(){
    int size=0;
    cout<<"Enter the size :"<<endl;
    cin>>size;
    int ar[size];
    for(int i=0;i<size;i++){
        cin>>ar[i];
    }
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(ar[i]==ar[j]){
                
            }
        }
    }
    for(int i=0;i<size;i++){
        cout<<ar[i];
    }
    
    return 0;
}