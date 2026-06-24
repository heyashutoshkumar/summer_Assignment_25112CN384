#include<iostream>
using namespace std;
int main() {
    int size;
    cin >> size;
    int arr[100];
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    int j = 0; 
    for(int i = 1; i < size; i++) {
        if(arr[i] != arr[j]) {
            j++;
            arr[j] = arr[i];
        }
    }

    int newSize = j + 1;

    for(int i = 0; i < newSize; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}