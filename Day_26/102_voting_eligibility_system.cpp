//WAP for voting eligibilty criteria system.
#include<iostream>
using namespace std;
void votingEligibility(int age,char name[]){
    if(age>=18){
        cout<<"Congratulations!! "<<name<<"."<<endl;
        cout<<"You are eligible for voting"<<endl;
    }
    else {
        cout<<"You are not eligible for voting!!"<<endl;
        cout<<"You can vote after "<<18 - age<<" Years"<<endl;
    }
}
int main(){
    int age=0;
    char name [100];
    cout<<"Enter your name : "<<endl;
    cin.getline(name,100);
    cout<<"Enter your age : "<<endl;
    cin>>age;
    if(age<=0){
        cout<<"Invalid age!!"<<endl;
        return 0;
    }
    votingEligibility(age,name);
    
    
    return 0;
}