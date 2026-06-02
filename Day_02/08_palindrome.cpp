//WRITE A PROGRAM TO CHECK WHETHER THE NUMBER IS A PALINDRONE OR NOT.
#include<iostream>
using namespace std;
int main(){
    int n ,d=0,rev=0;
    cout<<"Enter a number:"<<endl;
    cin>>n;
    int temp=n;
    while(n>0){
        d=n%10;
        rev=(rev*10)+d;
        n=n/10;
    }
    if(temp==rev){
        cout<<"Number is palindrome!!"<<endl;
    }
    else{
        cout<<"Number is not Palindrome!!"<<endl;
    }
    return 0;
}