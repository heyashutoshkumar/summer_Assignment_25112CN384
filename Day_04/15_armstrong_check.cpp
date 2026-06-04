//WAP to check whether the number is armstong or not.
#include<iostream>
using namespace std;
int main(){
    int n,arm=0,digit=0,d=0;
    cout<<"enter the number :"<<endl;
    cin>>n;
    int temp=n,t=n;
    if(n==0){
        cout<<"ARMSTRONG!!"<<endl;
        return 0;}
    while(t>0){
        digit++;
        t=t/10;
    }t=n;
    while(t>0){
        d=t%10;
        int power=1;
        for(int i=0;i<digit;i++){
            power=power*d;
        }
        arm=arm+power;
        t/=10;

    }if(temp==arm){
        cout<<"ARMSTRONG!!"<<endl;
    }
    else{
        cout<<"NOT AN ARMSTRONG!!";
    }
    return 0;
}