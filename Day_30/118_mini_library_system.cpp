//WAP to create mini library system.


#include<iostream>
#include<vector>
using namespace std;

struct Book{
    int id;
    string name;
    bool issued=false;
};

void addBook(vector<Book>& books){

    Book b;

    cout<<"Enter Book ID: ";
    cin>>b.id;

    cin.ignore();

    cout<<"Enter Book Name: ";
    getline(cin,b.name);

    books.push_back(b);

    cout<<"Book Added Successfully!\n";
}

void displayBooks(const vector<Book>& books){

    if(books.empty()){
        cout<<"No Books Available.\n";
        return;
    }

    cout<<"\n------ Library Books ------\n";

    for(Book b : books){

        cout<<"Book ID : "<<b.id<<endl;
        cout<<"Book Name : "<<b.name<<endl;

        if(b.issued)
            cout<<"Status : Issued"<<endl;
        else
            cout<<"Status : Available"<<endl;

        cout<<"---------------------------"<<endl;
    }
}

void issueBook(vector<Book>& books){

    int id;
    cout<<"Enter Book ID: ";
    cin>>id;

    bool found=false;

    for(Book &b : books){

        if(b.id==id){

            found=true;

            if(b.issued)
                cout<<"Book Already Issued.\n";
            else{
                b.issued=true;
                cout<<"Book Issued Successfully.\n";
            }

            break;
        }
    }

    if(!found)
        cout<<"Book Not Found.\n";
}

int main(){

    vector<Book> books;

    int choice;

    do{

        cout<<"\n===== MINI LIBRARY SYSTEM ====="<<endl;
        cout<<"1. Add Book"<<endl;
        cout<<"2. Display Books"<<endl;
        cout<<"3. Issue Book"<<endl;
        cout<<"4. Exit"<<endl;

        cout<<"Enter Choice: ";
        cin>>choice;

        switch(choice){

            case 1:
                addBook(books);
                break;

            case 2:
                displayBooks(books);
                break;

            case 3:
                issueBook(books);
                break;

            case 4:
                cout<<"Thank You!"<<endl;
                break;

            default:
                cout<<"Invalid Choice!"<<endl;
        }
    }while(choice!=4);
    return 0;
}