#include<iostream>
using namespace std;
int main(){
    int row=0,n=1;
    cout<<"Enter no. of rows:"<<endl;
    cin>>row;
    if(row<=0){
        cout<<"Invalid Input!!"<<endl;
        return 0;
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<=i;j++){
            cout<<n;
        }n++;
        cout<<endl;
    }
    return 0;
}