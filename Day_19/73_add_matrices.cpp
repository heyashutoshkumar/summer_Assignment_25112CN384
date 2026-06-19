//WAP to add two matrices.
#include<iostream>
using namespace std;
void addmatrix(int mat1[][100],int mat2[][100],int row,int columb){
    int mat3[100][100];
    for(int i=0;i<row;i++){
        for(int j=0;j<columb;j++){
            mat3[i][j]=mat1[i][j]+mat2[i][j];

        }
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<columb;j++){
            cout<<mat3[i][j]<<' ';
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
    int mat1[100][100],mat2[100][100];
    cout<<"Enter the first matrices elements : "<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<columb;j++){
            cin>>mat1[i][j];
        }
    }
    cout<<"Enter the second matrices elements : "<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<columb;j++){
            cin>>mat2[i][j];
        }
    }
    cout<<"Sum of two matrix is : "<<endl;
    addmatrix(mat1,mat2,row,columb);
    return 0;
}