//WAP to reverse number triangle pattern.
#include<iostream>
using namespace std;
int main(){
    int row=0;
    cout<<"Enter no. of rows:"<<endl;
    cin>>row;
    for(int i=row;i>0;i--){
        for(int j=1;j<=i;j++){
            cout<<j;
        }cout<<endl;
    }
    return 0;
}