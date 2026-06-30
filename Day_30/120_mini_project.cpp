// WAP to create Student Record System using Arrays, Strings and Functions.
#include<iostream>
#include<string>
using namespace std;

string name[100];
int roll[100];
int marks[100];
int totalStudents = 0;

void addStudent(){

    cout<<"Enter Roll Number : ";
    cin>>roll[totalStudents];

    cin.ignore();

    cout<<"Enter Name : ";
    getline(cin,name[totalStudents]);

    cout<<"Enter Marks : ";
    cin>>marks[totalStudents];

    totalStudents++;

    cout<<"Student Added Successfully.\n";
}

void displayStudents(){

    if(totalStudents==0){
        cout<<"No Student Record Found.\n";
        return;
    }

    for(int i=0;i<totalStudents;i++){

        cout<<"\nStudent "<<i+1<<endl;
        cout<<"Roll No : "<<roll[i]<<endl;
        cout<<"Name : "<<name[i]<<endl;
        cout<<"Marks : "<<marks[i]<<endl;
    }
}

void searchStudent(){

    int searchRoll;
    cout<<"Enter Roll Number : ";
    cin>>searchRoll;

    bool found=false;

    for(int i=0;i<totalStudents;i++){

        if(roll[i]==searchRoll){

            found=true;

            cout<<"Student Found\n";
            cout<<"Roll No : "<<roll[i]<<endl;
            cout<<"Name : "<<name[i]<<endl;
            cout<<"Marks : "<<marks[i]<<endl;

            break;
        }
    }

    if(!found)
        cout<<"Student Not Found.\n";
}

void updateStudent(){

    int searchRoll;

    cout<<"Enter Roll Number : ";
    cin>>searchRoll;

    bool found=false;

    for(int i=0;i<totalStudents;i++){

        if(roll[i]==searchRoll){

            found=true;

            cin.ignore();

            cout<<"Enter New Name : ";
            getline(cin,name[i]);

            cout<<"Enter New Marks : ";
            cin>>marks[i];

            cout<<"Record Updated Successfully.\n";

            break;
        }
    }

    if(!found)
        cout<<"Student Not Found.\n";
}
void deleteStudent(){
    int searchRoll;
    cout<<"Enter Roll Number : ";
    cin>>searchRoll;
    bool found=false;
    for(int i=0;i<totalStudents;i++){
        if(roll[i]==searchRoll){
            found=true;
            for(int j=i;j<totalStudents-1;j++){

                roll[j]=roll[j+1];
                name[j]=name[j+1];
                marks[j]=marks[j+1];
            }
            totalStudents--;
            cout<<"Student Deleted Successfully.\n";
            break;
        }
    }
    if(!found)
        cout<<"Student Not Found.\n";
}
int main(){
    int choice;
    do{
        cout<<"\n========== STUDENT RECORD SYSTEM ==========\n";
        cout<<"1. Add Student\n";
        cout<<"2. Display Students\n";
        cout<<"3. Search Student\n";
        cout<<"4. Update Student\n";
        cout<<"5. Delete Student\n";
        cout<<"6. Exit\n";
        cout<<"Enter Choice : ";
        cin>>choice;

        switch(choice){
            case 1:
                addStudent();
                break;
            case 2:
                displayStudents();
                break;
            case 3:
                searchStudent();
                break;
            case 4:
                updateStudent();
                break;
            case 5:
                deleteStudent();
                break;
            case 6:
                cout<<"Thank You!\n";
                break;
            default:
                cout<<"Invalid Choice.\n";
        }
    }while(choice!=6);
    return 0;
}