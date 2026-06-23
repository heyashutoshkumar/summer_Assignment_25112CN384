//WAP to find the first non-repeating character.
#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char str[100];
    cout<<"Enter a sentence : "<<endl;
    cin.getline(str,100);
    int start=0;
    while(str[start]!='\0'){
        start++;
    }
    
    for(int i=0;i<start;i++){
        int count=0;
        for(int j=0;j<start;j++){
            if(tolower(str[i])==tolower(str[j])){
                count++;
            }
        }
        if(count==1){
            cout<<"First non repeating character : "<<str[i]<<endl;
            return 0;
        }
    }
    cout<<"All elements are repeating!"<<endl;

    return 0; 
} 