//WAP to print half triangle pattern.
#include<iostream>
using namespace std;
int main(){
    int row=0;
    cout<<"Enter number of rows:"<<endl;
    cin>>row;
    if(row<=0){
        cout<<"INVALID INPUT!!"<<endl;
        return 0;
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<=i;j++){
            cout<<'*';
        }cout<<endl;
    }
    return 0;
}