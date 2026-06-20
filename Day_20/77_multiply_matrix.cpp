//WAP to multiply two matrix.
#include<iostream>
using namespace std;
int main(){
    int size=0;
    cout<<"Enter no element : "<<endl;
    cin>>size;
    int a[100][100],b[100][100];
    cout<<"Enter array element : "<<endl;
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            cin>>a[i][j];
        }
    }
    cout<<"Enter second array element : "<<endl;
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            cin>>b[i][j];
        }
    }
    int c[100][100]={0};
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            for(int k=0;k<size;k++){
                c[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            cout<<c[i][j]<<' ';
        }cout<<endl;
    }
    return 0;
}