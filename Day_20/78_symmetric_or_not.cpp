//WAP to check whether the matrix is symmetric or not.
//WAP to multiply two matrix.
#include<iostream>
using namespace std;
int main(){
    int size=0;
    
    cout<<"Enter no element : "<<endl;
    cin>>size;
    int a[100][100];
    cout<<"Enter array element : "<<endl;
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            cin>>a[i][j];
        }
    }
    
    
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            if(a[i][j]!=a[j][i]){ 
                cout<<"Not symmetric !!";
                return 0;
        }}
    }
    cout<<"Yes symmetric matrix.";
    return 0;
}