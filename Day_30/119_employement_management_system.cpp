// WAP to Create Mini Employee Management System

#include<iostream>
#include<vector>
using namespace std;

struct Employee{
    int id;
    string name;
    float salary;
};
void addEmployee(vector<Employee>& employees){
    Employee e;
    cout<<"Enter Employee ID: ";
    cin>>e.id;
    cin.ignore();
    cout<<"Enter Employee Name: ";
    getline(cin,e.name);
    cout<<"Enter Salary: ";
    cin>>e.salary;
    employees.push_back(e);
    cout<<"Employee Added Successfully!\n";
}
void displayEmployees(const vector<Employee>& employees){
    if(employees.empty()){
        cout<<"No Employee Records Found.\n";
        return;
    }

    cout<<"\n------ Employee Details ------\n";

    for(Employee e : employees){

        cout<<"ID     : "<<e.id<<endl;
        cout<<"Name   : "<<e.name<<endl;
        cout<<"Salary : "<<e.salary<<endl;
        cout<<"------------------------------"<<endl;
    }
}
void searchEmployee(const vector<Employee>& employees){
    int id;
    cout<<"Enter Employee ID: ";
    cin>>id;
    bool found=false;
    for(Employee e : employees){

        if(e.id==id){

            found=true;

            cout<<"Employee Found\n";
            cout<<"ID     : "<<e.id<<endl;
            cout<<"Name   : "<<e.name<<endl;
            cout<<"Salary : "<<e.salary<<endl;

            break;
        }
    }

    if(!found)
        cout<<"Employee Not Found.\n";
}

int main(){

    vector<Employee> employees;

    int choice;

    do{

        cout<<"\n===== MINI EMPLOYEE MANAGEMENT SYSTEM ====="<<endl;
        cout<<"1. Add Employee"<<endl;
        cout<<"2. Display Employees"<<endl;
        cout<<"3. Search Employee"<<endl;
        cout<<"4. Exit"<<endl;

        cout<<"Enter Choice: ";
        cin>>choice;

        switch(choice){

            case 1:
                addEmployee(employees);
                break;

            case 2:
                displayEmployees(employees);
                break;

            case 3:
                searchEmployee(employees);
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