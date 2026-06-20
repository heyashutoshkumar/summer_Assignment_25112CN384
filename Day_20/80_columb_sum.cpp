//WAP to find the columb wise sum.
#include<iostream>
using namespace std;
int main(){
    int row=0,columb=0;
    cout<<"Enter no of rows and columb : "<<endl;
    cin>>row;
    cin>>columb;
    int a[100][100];
    cout<<"Enter array element : "<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<columb;j++){
            cin>>a[i][j];

        }
    }
    for(int i=0;i<columb;i++){
        int columbsum=0;
        for(int j=0;j<row;j++){
            columbsum+=a[j][i];
        }
        cout<<"Columb "<<i+1<<" sum is : "<<columbsum<<endl;
    }
    return 0;
}