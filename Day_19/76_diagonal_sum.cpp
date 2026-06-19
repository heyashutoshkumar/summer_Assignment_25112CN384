//WAP for finding the sum of the diagonal element.
#include<iostream>
using namespace std;
int diagonalsum(int mat[100][100],int size){
    int dsum=0;
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            if(i==j){
                dsum+=mat[i][j];
            }
        }
    }
    return dsum;
}
int main(){
    int size=0;
    cout<<"Enter the number of rows ans columb for the matrices : "<<endl;
    cin>>size;
    if(size<=0 ){
        cout<<"Invalid input!!";
        return 0;
    }
    int mat[100][100];
    cout<<"Enter the first matrices elements : "<<endl;
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            cin>>mat[i][j];
        }
    }
    
    cout<<"Sum  of daigonal of given matrix is : "<<diagonalsum(mat,size);
    
    return 0;
}