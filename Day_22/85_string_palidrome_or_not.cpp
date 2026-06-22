//WAP to check whether the string is palidrome or not.
#include<iostream>
#include<cstring>
using namespace std;
int isPalindrome(char str[100]){
    
    int start=0,end=strlen(str)-1;
    while(start<end){
        if(str[start]!=str[end]){
            return -1;
            
        }
        start++;
        end--;
    }
    return 1;
}
int main(){
    char str[100];
    cout<<"Enter a word : "<<endl;
    cin>>str;
    int palidrome=isPalindrome(str);
    if(palidrome==1) cout<<"String is palidrome !!"<<endl;
    else cout<<"Not palidrome "<<endl;

    return 0;
}