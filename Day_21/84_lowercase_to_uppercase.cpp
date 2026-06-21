//WAP to convert the string from lowercase to uppercase.
#include<iostream>
using namespace std;
void uppercase( char str[]){
    int start=0;
    while(str[start]!='\0'){
        if(str[start]==' '){cout<<' ' ;}
        else if(str[start]>='a' && str[start]<='z'){
            char upper=str[start]-32;
            cout<<upper;
           
            
        }
        else cout<<str[start];
        start++;
        
    }
}
int main(){
    char str[100];
    cout<<"Enter a sentence : "<<endl;
    cin.getline(str,100);
    uppercase(str);
    
    return 0;
}