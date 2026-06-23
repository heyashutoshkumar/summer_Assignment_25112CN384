//WAp to check whether two given string are anagram.
#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char str1[100],str2[100];
    cout<<"Enter first word : "<<endl;
    cin>>str1;
    cout<<"Enter second word : "<<endl;
    cin>>str2;
    
    if(strlen(str1)!=strlen(str2)){
        cout<<"Not anagram";
        return 0;
    }
    int n=0;
    while(str1[n]!='\0'){
        n++;
    }
    for(int i=0;i<n;i++){
        int count1=0,count2=0;
        for(int j=0;j<n;j++){
            if(tolower(str1[i])==tolower(str1[j])) count1++;
        }
        for(int k=0;k<n;k++){
            if(tolower(str1[i])==tolower(str2[k])) count2++;
        }
        if(count1!=count2){
            cout<<"Not anagram"<<endl;
            return 0;
        }
    }
    cout<<"Anagram!!"<<endl;

    return 0;
}