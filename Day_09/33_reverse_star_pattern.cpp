//WAP to print reverse star pattern.
#include<iostream>
using namespace std;
int main(){
    int row=0;
    cout<<"Enter no. of rows:"<<endl;
    cin>>row;
    for(int i=0;i<row;i++){
        for(int j=row;j>i;j--){
            cout<<"*";
        }cout<<endl;
    }
    return 0;
}