//WRITE THE PROGRAM TO REVERSE THE NUMBER
#include<iostream>
using namespace std;
int main(){
    int n,d=0,rev=0;
    cout<<"Enter a number:"<<endl;
    cin>>n;
    while(n>0){
        d=n%10;
        rev=(rev*10)+d;
        n=n/10;
    }
    cout<<"Reverse number is : "<<rev;;
    
    return 0;
}