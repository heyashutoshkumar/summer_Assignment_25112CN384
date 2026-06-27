//WAP to create quiz competition applications.
#include<iostream>
using namespace std;

int main(){
    int score = 0;
    char ans;
    cout<<"Quiz Competition\n";
    cout<<"\nQ1. Capital of India?\n";
    cout<<"A. Delhi\nB. Mumbai\n";
    cin>>ans;
    if(ans=='A' || ans=='a'){
        cout<<"Correct!\n";
        score++;
    }
    else{
        cout<<"Wrong!\n";
    }
    cout<<"\nQ2. 2 + 3 = ?\n";
    cout<<"A. 4\nB. 5\n";
    cin>>ans;
    if(ans=='B' || ans=='b'){
        cout<<"Correct!\n";
        score++;
    }
    else{
        cout<<"Wrong!\n";
    }
    cout<<"\nYour Score = "<<score<<"/2";
    return 0;
}