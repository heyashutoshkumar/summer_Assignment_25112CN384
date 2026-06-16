//WAP To find the maximum frequency element.
#include<iostream>
using namespace std;
int main() {
    int size = 6;
    int ar[6] = {1,2,2,3,2,1};
    int maxFreq = 0;
    int frequentElement = ar[0];

    for(int i = 0; i < size; i++) {
        int currentElement = ar[i];
        int count = 0;   

        for(int j = 0; j < size; j++) {
            if(ar[j] == currentElement) {
                count++;
            }
        }

        if(count > maxFreq) {
            maxFreq = count;
            frequentElement = currentElement;
        }
    }

    cout << "Most frequent element is: " << frequentElement;

    return 0;
}