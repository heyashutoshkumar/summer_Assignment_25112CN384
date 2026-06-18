//WAP for insertion sort.
#include<iostream>
#include<vector>
using namespace std;
void insertionSort(vector<int>& vec){
    for(int i=1;i<vec.size();i++){
        int current=vec[i],previous=i-1;
        while(previous>=0 && vec[previous]>current){
            vec[previous+1]=vec[previous];
            previous--;
        }
        vec[previous+1]=current;
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
    insertionSort(vec);
    for(int i=0;i<vec.size();i++){
        cout<<vec.at(i)<<' ';
    }
    
    return 0;
} 