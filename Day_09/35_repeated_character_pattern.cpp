//WAP to print the repeadted character pattern.
#include<iostream>
using namespace std;
int main(){
    int row=0;
    char ch='A';
    cout<<"Enter no of rows:"<<endl;
    cin>>row;
    for(int i=0;i<row;i++){
        for(int j=0;j<=i;j++){
            cout<<ch;
        }ch++;
        cout<<endl;
    }
    return 0;
} 