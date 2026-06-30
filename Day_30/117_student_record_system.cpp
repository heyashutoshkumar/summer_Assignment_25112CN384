// WAP to create student record system by using string and vector.

#include<iostream>
#include<vector>
using namespace std;

int main(){

    int choice=0;
    vector<int> rollno;
    vector<int> mark;
    vector<string> names;

    do{

        cout<<"\n======== STUDENT RECORD SYSTEM ========\n";
        cout<<"1. Add Student Detail\n";
        cout<<"2. Update Student Detail\n";
        cout<<"3. Find Student Detail\n";
        cout<<"4. Exit\n";
        cout<<"Enter your choice: ";
        cin>>choice;

        switch(choice){

            case 1:
            {
                int roll,marks;
                string name;

                cout<<"Enter Student Roll No: ";
                cin>>roll;

                bool found=false;

                for(int value:rollno){
                    if(value==roll){
                        found=true;
                        break;
                    }
                }

                if(found){
                    cout<<"Roll Number already exists.\n";
                    break;
                }

                rollno.push_back(roll);

                cin.ignore();

                cout<<"Enter Student Name: ";
                getline(cin,name);
                names.push_back(name);

                cout<<"Enter Total Marks: ";
                cin>>marks;
                mark.push_back(marks);

                cout<<"Student Added Successfully.\n";
                break;
            }

            case 2:
            {
                int roll;
                cout<<"Enter Roll Number: ";
                cin>>roll;

                int index=-1;

                for(int i=0;i<rollno.size();i++){
                    if(rollno[i]==roll){
                        index=i;
                        break;
                    }
                }

                if(index==-1){
                    cout<<"Student Not Found.\n";
                    break;
                }

                int update;

                do{

                    cout<<"\n1. Update Roll No\n";
                    cout<<"2. Update Name\n";
                    cout<<"3. Update Marks\n";
                    cout<<"4. Exit\n";
                    cout<<"Enter Choice: ";
                    cin>>update;

                    switch(update){

                        case 1:
                        {
                            int newRoll;

                            cout<<"Enter New Roll No: ";
                            cin>>newRoll;

                            bool exist=false;

                            for(int value:rollno){
                                if(value==newRoll){
                                    exist=true;
                                    break;
                                }
                            }

                            if(exist)
                                cout<<"Roll Number already exists.\n";
                            else{
                                rollno[index]=newRoll;
                                cout<<"Roll Number Updated.\n";
                            }

                            break;
                        }
                        case 2:
                        {
                            cin.ignore();

                            cout<<"Enter New Name: ";

                            getline(cin,names[index]);

                            cout<<"Name Updated.\n";
                            break;
                        }

                        case 3:
                        {
                            cout<<"Enter New Marks: ";
                            cin>>mark[index];

                            cout<<"Marks Updated.\n";
                            break;
                        }

                        case 4:
                            break;

                        default:
                           cout<<"Invalid Choice.\n";
                    }
                }while(update!=4);
                break;
            }
            case 3:
            {
                int roll;
                cout<<"Enter Roll Number: ";
                cin>>roll;
                int index=-1;
                for(int i=0;i<rollno.size();i++){
                    if(rollno[i]==roll){
                        index=i;
                        break;
                    }
                }
                if(index==-1){

                    cout<<"Student Not Found.\n";
                }
                else{

                    cout<<"\nStudent Detail\n";
                    cout<<"Roll No : "<<rollno[index]<<endl;
                    cout<<"Name : "<<names[index]<<endl;
                    cout<<"Marks : "<<mark[index]<<endl;
                }

                break;
            }

            case 4:

                cout<<"Thank You!\n";
                break;

            default:

                cout<<"Invalid Choice.\n";
        }

    }while(choice!=4);

    return 0;
}