//WAP to print the intersection of two array elements.
#include<iostream>
using namespace std;
int main(){
    int sizea=0,sizeb=0;
    bool intersect=false;
    cout<<"Enter size of a array:"<<endl;
    cin>>sizea;
    cout<<"Enter size of b array:"<<endl;
    cin>>sizeb;
    if(sizea<=0 || sizeb<=0){
        cout<<"Invalid input!!"<<endl;
        return 0;
    }
    int a[sizea];
    int b[sizeb];
    
    cout<<"Enter element of array a:"<<endl;
    for(int i=0;i<sizea;i++){
        cin>>a[i];
    }
    cout<<"Enter element of array b:"<<endl;
    for(int i=0;i<sizeb;i++){
        cin>>b[i];
    }
    for(int i=0;i<sizea;i++){
        for(int j=0;j<sizeb;j++){
            if(a[i]==b[j]){
                intersect=true;
                cout<<a[i]<<" ";
                
            }


        }
            

        }
    
    if(intersect==false){
        cout<<"No common element!!"<<endl;
    }
    
    return 0;
}   