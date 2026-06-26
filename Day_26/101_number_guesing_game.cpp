//WAP to create number guessing game.
#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
void numberGuessing(int target){
    int turns=1;
    while(turns<=7){int n=0;
        cout<<"Enter a number from 1 to 100 : "<<endl;
        cin>>n;
    
        if(n<=0 || n>=101){
        cout<<"Not valid number"<<endl;
        continue;
        }
        if(n==target){ cout<<"Congratulations!!"<<endl;
            cout<<"You have guessed the number in "<<turns<<" turns"<<endl;
            break;}
        else if( n<target) cout<<"OOPS!! Your number is smaller."<<endl;
    
        else cout<<"OOPS!! Your number is bigger."<<endl;
        cout<<"Chances left : "<<7-turns<<endl;;
        turns++;
        if(turns>7) cout<<"Game over. Correct answer was : "<<target;
    }        
    
}
int main(){
    srand(time(0));
    int target=rand()%100+1;
    numberGuessing(target);
    
    
    return 0;
}