#include<iostream>
#include<cctype>
using namespace std;

int main() {
    char str[100];
    cout << "Enter a string: ";
    cin.getline(str, 100);
    int n = 0;
    while(str[n] != '\0')
        n++;
    for(int i = 0; i < n; i++) {
        bool duplicate = false;
        for(int j = 0; j < i; j++) {
            if(tolower(str[i]) == tolower(str[j])) {
                duplicate = true;
                break;
            }
        }
        if(!duplicate)
            cout << str[i];
    }
    return 0;
}