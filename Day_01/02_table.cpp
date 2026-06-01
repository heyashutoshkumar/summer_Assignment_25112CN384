//WAP TO PRINT THE TABLE OF A GIVEN NUMBER 
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of which you want to print the table:"<<endl;
    cin>>n;
    for(int i=1;i<=10;i++){
        cout<<n<<" X "<<i<<" = "<<n*i<<endl;
    }

    return 0;
}