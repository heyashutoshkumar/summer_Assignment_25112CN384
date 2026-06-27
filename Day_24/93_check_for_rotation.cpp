#include<iostream>
#include<cstring>
using namespace std;

int main() {
    char str1[100], str2[100];

    cout << "Enter first string: ";
    cin >> str1;
    cout << "Enter second string: ";
    cin >> str2;

    int n = strlen(str1);

    if(n != strlen(str2)) {
        cout << "Not Rotation";
        return 0;
    }

    for(int rotation = 0; rotation < n; rotation++) {
        char first = str1[0];
        for(int i = 0; i < n - 1; i++) {
            str1[i] = str1[i + 1];
        }
        str1[n - 1] = first;
        if(strcmp(str1, str2) == 0) {
            cout << "Rotation";
            return 0;
        }
    }
    cout << "Not Rotation";
    return 0;
}