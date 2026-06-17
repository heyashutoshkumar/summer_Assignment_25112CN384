//WAP to print the common element in the given two arrays.
#include<iostream>
using namespace std;
int main(){
    int sizea=0,sizeb=0,sizec=0;
    cout<<"Enter size of a array:"<<endl;
    cin>>sizea;
    cout<<"Enter size of b array:"<<endl;
    cin>>sizeb;
    cout<<"Enter size of c array:"<<endl;
    cin>>sizec;
    if(sizea<=0 || sizeb<=0 || sizec<=0){
        cout<<"Invalid input!!"<<endl;
        return 0;
    }
    int a[sizea];
    int b[sizeb];
    int c[sizec];
    
    
    cout<<"Enter element of array a:"<<endl;
    for(int i=0;i<sizea;i++){
        cin>>a[i];
    }
    cout<<"Enter element of array b:"<<endl;
    for(int i=0;i<sizeb;i++){
        cin>>b[i];}
    cout<<"Enter element of array c:"<<endl;
    for(int i=0;i<sizec;i++){
        cin>>c[i];}
    for(int i=0;i<sizea;i++){
        bool flagb=false,flagc=false,duplicate=false;
        
        for(int j=0;j<sizeb;j++){
            if(a[i]==b[j] ){
                flagb=true;
                
                
            }
        }
        for(int k=0;k<sizec;k++){
            if(a[i]==c[k])
                flagc=true;
        }
        if(flagb==true && flagc==true){
            
            for(int j=0;j<i;j++){
                if(a[i]==a[j]){
                    duplicate=true;

                }
            }
            if(!duplicate)
               cout<<a[i]<<' ';
        }

    }
    return 0;
}    