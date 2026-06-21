//WAP to find the number of consonant and vowel in a word.
#include<iostream>
using namespace std;
int main(){
    int vowel=0,consonant=0;
    char str[100];
    cout<<"Enter a word : "<<endl;
    cin>>str;
    
    int start=0;
    while(str[start]!='\0'){
        if(str[start]>='A' && str[start]<='Z' || str[start]>='a' && str[start]<='z'){
            if(str[start]=='a'||str[start]=='A'||str[start]=='E'||str[start]=='e'||str[start]=='u'||str[start]=='U'||str[start]=='i'||str[start]=='I'||str[start]=='o'||str[start]=='O'){
            vowel++;
        }
        else {consonant++;}
        
        
    }
    else {cout<<"Invalid input!!";
        return 0;}
        start++;
        

    }
    cout<<"Total vowels are : "<<vowel<<endl; 
    cout<<"Consonat are : "<<consonant;
    return 0;
}