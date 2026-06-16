//WAP to find the missing element in array.
//ASSUMPTION: elements are from 1 to n.
#include<iostream>
using namespace std;
int sumofrange(int range){
    int sum=0;
    for(int i=1;i<=range;i++){
        sum+=i;
    }
    return sum;
}
int main(){
    int size =0,range=0,elementsum=0;
    cout<<"Enter size of array:"<<endl;
    cin>>size;
    if(size<=0){
        cout<<"Invalid input!!"<<endl;
        return 0;
    }
    int ar[size];
    cout<<"Enter the range of array element:"<<endl;
    cin>>range;
    cout<<"Enter element:"<<endl;
    for(int i=0;i<size;i++){
        cin>>ar[i];
    }
    for(int i=0;i<=size-1;i++){
        elementsum+=ar[i];
    }
    int missingelement=sumofrange(range)-elementsum;
    cout<<"Missing element is:"<<missingelement;
    

    return 0;
}