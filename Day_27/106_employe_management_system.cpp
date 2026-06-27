//WAP to create employee management system.
#include<iostream>
#include<vector>
#include<cstring>
using namespace std;
struct employe{
    int id=0;
    string name;
    float salary=0;
};
void addemploye( vector <employe>& employee){
    

    employe s1;

    cout<<"Enter employe name : "<<endl;
    cin.ignore();
    getline(cin,s1.name);
    cout<<"Enter employe id no."<<endl;

    cin>>s1.id;
    cout<<"Enter Total salary of employe : "<<endl;
    cin>>s1.salary;
    employee.push_back(s1);
    cout<<"Employe detail has been successfully added."<<endl;

}
void employedetail(const vector <employe>& employee){
    if(employee.size()==0) cout<<"No employee detail found."<<endl;

    else{cout<<"All employee details are : "<<endl;
    
        for(employe value:employee){
            cout<<"ID no. : "<<value.id<<endl;
            cout<<"Name of Employe : "<<value.name<<endl;
            cout<<"Total Salary : "<<value.salary<<endl<<endl;;
        }
    }
}
void searchemploye(const vector<employe>& employee,int idno){
    bool found=false;
    for(employe value:employee){
        if(value.id==idno){
            found=true;
            cout<<"Name of employe is : "<<value.name<<endl;
            cout<<"Id no of that employe : "<<value.id<<endl;
            cout<<"Total salary of employe : "<<value.salary<<endl;
            break;
        }
    }
    if(!found) cout<<"No such employe for given id number."<<endl;
}
int main(){
    int choice=0;
    vector<employe> employee;
    
    do{ int idno=0;
        cout<<"========MENU========"<<endl;
        cout<<"1. Add employe.\n2. Display employes.\n3. Search employe.\n4. exit"<<endl;
        cout<<"Choose any one option : "<<endl;
        cin>>choice;
        switch(choice){
            case 1: cout<<"ADD STUDENT SECTION : "<<endl; 
                    addemploye(employee);
                    break;
            case 2: cout<<"STUDENT DETAIL SECTION : "<<endl;
                    employedetail(employee);
                    break;
            case 3: cout<<"SEARCH STUDENT SECTION : "<<endl;
                    
                    cout<<"Enter id no of the employee : "<<endl;
                    cin>>idno;
                    searchemploye(employee,idno);
                    break;
            case 4:cout<<"Thank You !!"<<endl;
                    break;

            default: cout<<"Invalid choice!!"<<endl;
                    break;
        }

        
    }while(choice!=4);
    
    return 0;
}  