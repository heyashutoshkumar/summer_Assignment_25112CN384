//WAP to print the armstrong number within a given range.
#include<iostream>
using namespace std;
int main(){
    int st,end;
    cout<<"Enter two numbers :"<<endl;
    cin>>st>>end;
    for(int i=st;i<=end;i++){
        int temp=i,t=i,digit=0,sum=0;
        if(t==0){
            cout<<0<<' ';
            continue;
        }
        while(t>0){
            digit++;
            t/=10; 
        }
        t=i;
        while(t>0){
            int d=t%10;
            int power=1;
            for(int j=0;j<digit;j++){
                power=power*d;
            }
            sum=sum+power;
            t/=10;
        }
        if(temp==sum){
            cout<<i<<' ';
        }
    }
    return 0; 
}