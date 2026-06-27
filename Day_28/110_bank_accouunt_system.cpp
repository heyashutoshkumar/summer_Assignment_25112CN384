//WAP to create bank account system.
// WAP to Create Bank Account System

#include<iostream>
#include<vector>
using namespace std;

struct Account{
    int accountNo;
    string name;
    float balance;
};

void createAccount(vector<Account>& accounts){
    Account a;

    cout<<"Enter Account Number: ";
    cin>>a.accountNo;

    cin.ignore();

    cout<<"Enter Account Holder Name: ";
    getline(cin,a.name);

    cout<<"Enter Initial Balance: ";
    cin>>a.balance;

    accounts.push_back(a);

    cout<<"Account Created Successfully!\n";
}

void displayAccounts(const vector<Account>& accounts){
    if(accounts.empty()){
        cout<<"No Account Found.\n";
        return;
    }
    cout<<"\n----- Account Details -----\n";
    for(Account a : accounts){
        cout<<"Account No : "<<a.accountNo<<endl;
        cout<<"Name       : "<<a.name<<endl;
        cout<<"Balance    : "<<a.balance<<endl;
        cout<<"---------------------------"<<endl;
    }
}
int main(){
    vector<Account> accounts;
    int choice;
    do{
        cout<<"\n===== BANK ACCOUNT SYSTEM ====="<<endl;
        cout<<"1. Create Account"<<endl;
        cout<<"2. Display Accounts"<<endl;
        cout<<"3. Exit"<<endl;
        cout<<"Enter Choice: ";
        cin>>choice;
        switch(choice){
            case 1:
                createAccount(accounts);
                break;
            case 2:
                displayAccounts(accounts);
                break;
            case 3:
                cout<<"Thank You!"<<endl;
                break;

            default:
                cout<<"Invalid Choice!"<<endl;
        }
    }while(choice!=3);
    return 0;
}