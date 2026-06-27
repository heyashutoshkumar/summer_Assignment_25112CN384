#include<iostream>
#include<vector>
using namespace std;

struct Book{
    int id;
    string name;
    string author;
};

void addBook(vector<Book>& library){
    Book b;

    cout<<"Enter Book ID : ";
    cin>>b.id;

    cin.ignore();

    cout<<"Enter Book Name : ";
    getline(cin,b.name);

    cout<<"Enter Author Name : ";
    getline(cin,b.author);

    library.push_back(b);

    cout<<"Book Added Successfully!\n";
}

void displayBook(const vector<Book>& library){

    if(library.empty()){
        cout<<"No Books Found.\n";
        return;
    }

    for(Book b:library){
        cout<<"\nBook ID : "<<b.id<<endl;
        cout<<"Book Name : "<<b.name<<endl;
        cout<<"Author : "<<b.author<<endl;
    }
}

void searchBook(const vector<Book>& library){

    int id;
    cout<<"Enter Book ID : ";
    cin>>id;

    bool found=false;

    for(Book b:library){
        if(b.id==id){
            found=true;

            cout<<"Book Found\n";
            cout<<"Book Name : "<<b.name<<endl;
            cout<<"Author : "<<b.author<<endl;

            break;
        }
    }

    if(!found)
        cout<<"Book Not Found\n";
}
int main(){
    vector<Book> library;
    int choice;
    do{
        cout<<"\n1. Add Book";
        cout<<"\n2. Display Books";
        cout<<"\n3. Search Book";
        cout<<"\n4. Exit";
        cout<<"\nEnter Choice : ";
        cin>>choice;
        switch(choice){

        case 1:
            addBook(library);
            break;
        case 2:
            displayBook(library);
            break;
        case 3:
            searchBook(library);
            break;
        case 4:
            cout<<"Thank You!\n";
            break;
        default:
            cout<<"Invalid Choice\n";
        }
    }while(choice!=4);
    return 0;
}