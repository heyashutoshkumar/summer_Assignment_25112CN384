//WAP to find the length of string without using strlen().
#include<iostream>

using namespace std;
int length(char string[]){
    int length=0;
    while(string[length] !='\0'){
        length++;

    }
    return length;
}
int main(){
    char string[100];
    cout<<"Enter a word : "<<endl;
    cin>>string;
    cout<<"String length is : "<<length(string)<<endl;;
    
    return 0;
}