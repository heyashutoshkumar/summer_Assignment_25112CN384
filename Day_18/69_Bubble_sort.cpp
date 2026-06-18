//WAP to bubble sort.
#include<iostream>
#include<vector>
using namespace std;
void bubbleSort(vector<int>& vec){
    for(int i=0;i<vec.size()-1;i++){
        for(int j=0;j<vec.size()-i-1;j++){
            if(vec[j]>vec[j+1]){
                swap(vec[j],vec[j+1]);
            }
        }
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
    bubbleSort(vec);
    for(int i=0;i<vec.size();i++){
        cout<<vec.at(i)<<' ';
    }
    
    return 0;
} 