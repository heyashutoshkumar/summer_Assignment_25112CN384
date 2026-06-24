//WAP to remove the space from the string.
#include<iostream>
using namespace std;

int main(){
    char str[200];

    cout << "Enter a sentence: ";
    cin.getline(str, 200);

    int i = 0, j = 0;

    while(str[i] != '\0'){
        if(str[i] != ' '){
            str[j] = str[i];
            j++;
        }
        i++;
    }

    str[j] = '\0';
    cout << "After removing spaces: " << str;
    return 0;
}