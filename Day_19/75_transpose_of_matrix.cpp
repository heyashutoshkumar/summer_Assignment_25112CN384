//WAP for finding the transpose of a matrix.
#include<iostream>
using namespace std;
void transpose(int mat[100][100],int row,int columb){
    int transpose[100][100];
    for(int i=0;i<row;i++){
        for(int j=0;j<columb;j++){
            transpose[j][i]=mat[i][j];
        }
    }
        for(int i=0;i<columb;i++){
            for(int j=0;j<row;j++){
                cout<<transpose[i][j]<<' ';
            }cout<<endl;
        }
    }

int main(){
    int row=0,columb=0;
    cout<<"Enter the number of rows ans columb for the matrices : "<<endl;
    cin>>row;
    cin>>columb;
    if(row<=0 || columb<=0){
        cout<<"Invalid input!!";
        return 0;
    }
    int mat[100][100];
    cout<<"Enter the first matrices elements : "<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<columb;j++){
            cin>>mat[i][j];
        }
    }
    
    cout<<"Transpose of given matrix is : "<<endl;
    transpose(mat,row,columb);
    return 0;
}