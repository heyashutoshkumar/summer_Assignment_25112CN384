//WAP to find the sum of the rows.
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int a[100][100];
    int columb=0,row=0,maxsum=INT_MIN;
    cout<<"Enter number of row and columb : "<<endl;
    cin>>row;
    cin>>columb;
    cout<<"Enter matrix element : "<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<columb;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<row;i++){
        int rowsum=0;
        for(int j=0;j<columb;j++){
            rowsum+=a[i][j];
            
            
        }maxsum=max(maxsum,rowsum);
        cout<<"Row "<<i+1<<" sum is : "<<rowsum<<endl;

    }
    cout<<"Maximum row sum is : "<<maxsum;
    return 0;
}