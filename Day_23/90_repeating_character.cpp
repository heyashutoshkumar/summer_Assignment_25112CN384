//WAP to find the repeating character.//Time complexity:O(n^2)
#include<iostream>
#include<cctype>
using namespace std;
int main(){
    char str[100];
    cout<<"Enter a sentence : "<<endl;
    cin.getline(str,100);
    int length=0;
    while(str[length]!='\0'){
        length++;
    }
    for(int i=0;i<length;i++){
        //int count=0;
        for(int j=i+1;j<length;j++){
            if(str[i]!=' ' && tolower(str[i])==tolower(str[j] )){
                cout<<"First repeating character : "<<str[i];
                return 0;
            }
        }
    }
    cout<<"No repeating character!!"<<endl;
 
    return 0;
}