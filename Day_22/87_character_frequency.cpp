//WAP to count character frequency.
#include<iostream>
using namespace std;
#include<cstring>
int main(){
    char str[200],letter;
    cout<<"Enter a sentence : "<<endl;
    cin.getline(str,200);
    cout<<"Enter a character : "<<endl;
    cin>>letter;
    int count=0;
    for(int i=0;i<strlen(str);i++){
        if(str[i]==letter) count++;
    }
    if(count!=0) cout<<"Frequency of character is : "<<count;
    else cout<<"Character not found.";

    return 0;
}