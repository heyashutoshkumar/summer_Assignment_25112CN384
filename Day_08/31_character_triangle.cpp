//WAP to print the given character triangle .
/*for eg n=5
A
AB
ABC
ABCD
ABCDE*/
#include<iostream>
using namespace std;
int main(){
    int n=0;
    cout<<"Enter no. of rows:"<<endl;
    cin>>n;
    if(n<=0){
        cout<<"Invalid input!!"<<endl;
        return 0;
    }
    for(int i=0;i<n;i++){
        char ch='A';
        for(int j=0;j<=i;j++){
            cout<<ch;
            ch++;
        }cout<<endl;
    }
    return 0;
}