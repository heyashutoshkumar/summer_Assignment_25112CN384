//WAP to create student record management system.
#include<iostream>
#include<vector>
#include<cstring>
using namespace std;
struct student{
    int roll=0;
    string name;
    int tmarks=0;
};
void addstudent( vector <student>& students){
    

    student s1;

    cout<<"Enter student name : "<<endl;
    cin.ignore();
    getline(cin,s1.name);
    cout<<"Enter student roll no."<<endl;

    cin>>s1.roll;
    cout<<"Enter Total marks of student : "<<endl;
    cin>>s1.tmarks;
    students.push_back(s1);
    cout<<"Student detail has been successfully added."<<endl;

}
void studentdetail(const vector <student>& students){
    if(students.size()==0) cout<<"No student detail."<<endl;

    else{cout<<"All student details are : "<<endl;
    
        for(student value:students){
            cout<<"Roll no. : "<<value.roll<<endl;
            cout<<"Name of student : "<<value.name<<endl;
            cout<<"Total Marks : "<<value.tmarks<<endl<<endl;;
        }
    }
}
void searchstudent(const vector<student>& students,int rollno){
    bool found=false;
    for(student value:students){
        if(value.roll==rollno){
            found=true;
            cout<<"Name of student is : "<<value.name<<endl;
            cout<<"Roll no of that student : "<<value.roll<<endl;
            cout<<"Total marks of student : "<<value.tmarks<<endl;
            break;
        }
    }
    if(!found) cout<<"No such student for given roll number."<<endl;
}
int main(){
    int choice=0;
    vector<student> students;
    
    do{ int rollno=0;
        cout<<"========MENU========"<<endl;
        cout<<"1. Add student.\n2. Display student.\n3. Search student.\n4. exit"<<endl;
        cout<<"Choose any one option : "<<endl;
        cin>>choice;
        switch(choice){
            case 1: cout<<"ADD STUDENT SECTION : "<<endl; 
                    addstudent(students);
                    break;
            case 2: cout<<"STUDENT DETAIL SECTION : "<<endl;
                    studentdetail(students);
                    break;
            case 3: cout<<"SEARCH STUDENT SECTION : "<<endl;
                    
                    cout<<"Enter roll number of the student : "<<endl;
                    cin>>rollno;
                    searchstudent(students,rollno);
                    break;
            case 4:cout<<"Thank You !!"<<endl;
                    break;

            default: cout<<"Invalid choice!!"<<endl;
                    break;
        }

        
    }while(choice!=4);
    
    return 0;
} 