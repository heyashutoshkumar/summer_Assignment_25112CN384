//WAP for selection sort

#include<iostream>
#include<vector>
using namespace std;
void selectionSort(vector<int>& vec){
    for(int i=0;i<vec.size()-1;i++){
        int minindex=i;
        for(int j=i+1;j<vec.size();j++){
            if(vec[j]<vec[minindex]) minindex=j;
        }
        swap(vec[i],vec[minindex]);
    }
}
int main(){
    int size=0;
    cout<<"Enter the number of elements : "<<endl;
    cin>>size;
    if(size<=0){
        cout<<"Invalid input!!"<<endl;
        return 0;
    }
    vector <int> vec;
    cout<<"Enter vector elements:"<<endl;
    for(int i=0;i<size;i++){
        int x;
        cin>>x;
        vec.push_back(x);
    }
    cout<<"Vector before sorting : "<<endl;
    for(int i=0;i<vec.size();i++){
        cout<<vec.at(i)<<' ';
    }
    cout<<"\nVector after sorting : "<<endl;
    selectionSort(vec);
    for(int i=0;i<vec.size();i++){
        cout<<vec.at(i)<<' ';
    }
    
    return 0;
} 