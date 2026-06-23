//WAP for finding the maximum occuring character.
#include<iostream>
#include<cctype>
using namespace std;
int main(){
    char str[100];
    cout<<"Enter a sentence : "<<endl;
    cin.getline(str,100);
    int n=0,maxfrequency=0,ans=0;
    while(str[n]!='\0'){
        n++;
    }
    for(int i=0;i<n;i++){
        int currentfrequency=0;
        for(int j=0;j<n;j++){
            if(str[i]!=' ' && tolower(str[i])==tolower(str[j])) currentfrequency++;
            
        }if(currentfrequency>maxfrequency){
                ans=i;
                maxfrequency=currentfrequency;
            }

    }
    if(maxfrequency==1) cout<<"All words occur once!!"<<endl;
    else if(maxfrequency==0) cout<<"No character given";
    else cout<<"Maximum occuring character is : "<<str[ans];
    
    return 0;
} 