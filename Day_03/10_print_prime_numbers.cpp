//WAP to print the prime number in a range.
#include <iostream>
using namespace std;

int main()
{
    int start, end;
    cout << "Enter start and end: ";
    cin >> start >> end;
    for(int num = start; num <= end; num++)
    {
        int prime=1;
        for(int i=2;i<num;i++)
        {
            if(num % i == 0)
                prime=0;
        }
        if(prime==1){
            cout << num << " ";
        }
    }

    return 0;
}