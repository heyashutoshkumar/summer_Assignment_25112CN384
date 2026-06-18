//WAP to sort an array in descending order.
#include<iostream>
using namespace std;
void descending(int a[],int size){
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-1-i;j++){
            if(a[j]<a[j+1]){
                swap(a[j],a[j+1]);
            }
        }
    }
}
int main(){
    int size=0;
    cout<<"Enter the size of an array : "<<endl;
    cin>>size;
    if(size<=0){
        cout<<"Invalid input!!"<<endl;
        return 0;
    }
    int a[size];
    for(int i=0;i<size;i++){
        cin>>a[i];
    }
    descending(a,size);
    cout<<"After descending sorting:"<<endl;
    for(int i=0;i<size;i++){
        cout<<a[i]<<" ";
    }

    
    return 0;
}