#include<iostream>
using namespace std;

int main() {
    char str[100];

    cout << "Enter a sentence: ";
    cin.getline(str, 100);

    int maxLength = 0;
    int maxStart = 0;

    int currentLength = 0;
    int currentStart = 0;

    for(int i = 0; ; i++) {
        if(str[i] != ' ' && str[i] != '\0') {
            currentLength++;
        }
        else {
            if(currentLength > maxLength) {
                maxLength = currentLength;
                maxStart = currentStart;
            }
            currentLength = 0;
            currentStart = i + 1;
        }
        if(str[i] == '\0')
            break;
    }
    cout << "Largest word: ";
    for(int i = maxStart; i < maxStart + maxLength; i++) {
        cout << str[i];
    }
    return 0;
}