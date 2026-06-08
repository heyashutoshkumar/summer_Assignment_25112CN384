//WAP to print the given number triangle.
/*
n=5
1
12
123
1234
12345*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no. of rows:"<<endl;
    cin>>n;
    if(n<=0){
        cout<<"Invalid number of rows, No pattern exist!!"<<endl;
        return 0;
    }
    for(int i=0;i<n;i++){
        //int num=1;
        for(int j=0;j<=i;j++){
            cout<<j+1;
            //cout<<num;
            //num++;
        }cout<<endl;
    }
    return 0; 
} 