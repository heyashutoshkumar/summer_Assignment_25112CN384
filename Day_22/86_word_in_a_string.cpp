//WAP to count a word in a sentencs.
#include<iostream>
using namespace std;

int main() {
    char str[200];

    cout << "Enter a sentence: ";
    cin.getline(str, 200);

    int count = 0;
    bool inWord = false;

    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] != ' ' && inWord == false) {
            count++;        // new word starts
            inWord = true;
        }
        else if(str[i] == ' ') {
            inWord = false; // word ended
        }
    }
    cout << "Number of words: " << count;
    return 0;
}