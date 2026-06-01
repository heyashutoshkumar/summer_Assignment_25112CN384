//WRITE A PROGRAM TO COUNT DIGITS IN A NUMBER
#include<iostream>
using namespace std;
int main(){
    int n,count=0;
    cout<<"Enter the number:"<<endl;
    cin>>n;
    while(n>0){
        count=count+1;
        n=n/10;
    }
    cout<<"Number of digits are:"<<count<<endl;
     return 0;
}