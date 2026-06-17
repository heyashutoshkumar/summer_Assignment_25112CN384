//WAP to merge arrays.
#include<iostream>
using namespace std;
int main(){
    int sizea=0,sizeb=0;
    cout<<"Enter the size of an array a:"<<endl;
    cin>>sizea;
    cout<<"Enter the size of an array b:"<<endl;
    cin>>sizeb;
    if(sizea<=0 || sizeb<=0){
        cout<<"Invalid input!!"<<endl;
        return 0;
    }int mergesize=sizea+sizeb;
    int a[mergesize];
    int b[sizeb];
    cout<<"Enter element of a matrix:"<<endl;
    for(int i=0;i<sizea;i++){
        cin>>a[i];
    }
    cout<<"Enter element of b matrix:"<<endl;
    for(int i=0;i<sizeb;i++){
        cin>>b[i];
    }
    
    for(int i=0;i<sizeb;i++){
        int mergeelement=b[i];
        for(int j=sizea;j<sizea+1;j++){
            a[j]=mergeelement;
            
        }sizea++;
    }
    cout<<"Merge array :"<<endl;
    for(int i=0;i<mergesize;i++){
        cout<<a[i]<<' ';
    }
    return 0;
}