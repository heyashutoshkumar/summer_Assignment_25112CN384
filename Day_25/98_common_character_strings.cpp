//WAP to print the common characters in strings.
#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char str1[100],str2[100],ans[50];
    cout<<"Enter a word : "<<endl;
    cin>>str1;
    cout<<"Enter another word : "<<endl;
    cin>>str2;
    int len1=0,len2=0;
    while(str1[len1]!='\0'){
        len1++;
    }
    while(str2[len2]!='\0'){
        len2++;
    }
   
    for(int i=0;i<len1;i++){bool found=false;
        for(int k=0;k<i;k++){
            if(str1[k]==str1[i]) found=true;

        }
        if(found) continue;
        
        for(int j=0;j<len2;j++){
            if(str1[i]==str2[j]){
                    
                    bool found=false;
                    for(int k=0;k<j;k++){
                        if(str2[k]==str2[j]) found=true;

                    }
                    if(!found) cout<<str1[i]<<endl;
            }
        }
        
    }
    

    return 0;
}