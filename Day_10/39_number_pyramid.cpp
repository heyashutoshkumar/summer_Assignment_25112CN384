//WAP to print the number pyramid.
#include<iostream>
using namespace std;
int main(){
    int row=0;
    cout<<"Enter no of rows:"<<endl;
    cin>>row;
    for(int i=0;i<row;i++){
        for(int j=0;j<row-i-1;j++){
            cout<<" ";
        }
        int num=1;
        for(int j=0;j<=i;j++){
            cout<<num;
            num++;
        }
        num--;
        for(int j=0;j<i;j++){
            num--;
            cout<<num;
            
        }cout<<endl;
    }
    return 0;
}