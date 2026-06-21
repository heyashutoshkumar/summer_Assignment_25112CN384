//WAP to reverse a string.
#include<iostream>
#include<cstring>
using namespace std;
void reversestr(char str[100]){
    int leng=0;
    while(str[leng]!='\0'){
         leng++;}
    int start=0,end=leng-1;

    while(start<end){
        swap(str[start],str[end]);
        start++;
        end--;
    }
}
int main(){
    char str[100];
    cout<<"Enter a word : "<<endl;
    cin>>str;
    reversestr(str);
    cout<<"Reverse string is : "<< str<<endl;



    return 0;
}