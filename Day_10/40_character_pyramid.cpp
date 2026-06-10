//WAP to print the character pyramid.

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
        char ch='A';
        for(int j=0;j<=i;j++){
            cout<<ch;
            ch++;
        }
        ch--;
        for(int j=0;j<i;j++){
            ch--;
            cout<<ch;
            
        }cout<<endl;
    }
    return 0;
}