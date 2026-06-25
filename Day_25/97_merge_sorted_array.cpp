//WAP to merge two sorted array.
#include<iostream>
#include<vector>
#include<climits>
using namespace std;
vector <int> mergevector( vector <int>& vec1, const vector <int>& vec2){
    int v1=0,v2=0;
    vector <int> ans;
    while(v1<vec1.size() && v2<vec2.size()){
        if(vec1[v1]<vec2[v2]){ ans.push_back(vec1[v1]);
            v1++;}
        else {ans.push_back(vec2[v2]);
            v2++;}
         
    }
    while(v1<vec1.size()){
        ans.push_back(vec1[v1]);
        v1++;
    }
    while(v2<vec2.size()){
        ans.push_back(vec2[v2]);
        v2++;
    }
    
    return ans; 
}
int main(){
    int size1=0,size2=0;
    cout<<"Enter the size of vector 1 : "<<endl;
    cin>>size1;
    cout<<"Enter the size of vector 2 : "<<endl;
    cin>>size2;
    if(size1<=0 || size2<=0){
        cout<<"Invalid vector size "<<endl;
        return 0;
    }
    vector <int> vec1, vec2;
    cout<<"Enter first vector element : "<<endl;
    for(int i=0;i<size1;i++){
        int x;
        cin>>x;
        vec1.push_back(x);
    }
    cout<<"Enter second vector element : "<<endl;
    for(int i=0;i<size2;i++){
        int x;
        cin>>x;
        vec2.push_back(x);
    }
    vector <int> merge=mergevector(vec1,vec2);
    for(int value:merge){
        cout<<value<<' ';
    }
    

    return 0;
}