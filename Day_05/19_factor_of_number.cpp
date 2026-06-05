//WAP to find the factor of the given number.
#include<iostream>
using namespace std;
int main(){
   int n,count=0;
   cout<<"Enter a number:"<<endl;
   cin>>n;
   if(n==0){
    cout<<"Zero has no factor!!";
    return 0;
   }
   if(n<0)
        n=-n;
   for(int i=1;i<=n;i++){
    if(n%i==0){
        cout<<i<<' ';
        count++;}
   }cout<<"\n"<<"Total factors:"<<count; // Not asked in question.
    return 0;
}