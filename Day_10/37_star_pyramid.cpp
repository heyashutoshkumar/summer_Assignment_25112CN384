//WAP to print star pattern.
#include<iostream>
using namespace std;
int main(){
    int row=0;
    cout<<"Enter no of rows:"<<endl;
    cin>>row;
    for(int i=0;i<row;i++){
        for(int j=0;j<row-1-i;j++){
            cout<<" ";
        }
        for(int j=0;j<=i;j++){
            cout<<'*';
        }
        for(int j=0;j<i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}