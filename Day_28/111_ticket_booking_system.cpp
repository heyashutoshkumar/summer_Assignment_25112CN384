// WAP to Create Ticket Booking System

#include<iostream>
#include<vector>
using namespace std;
struct Ticket{
    int ticketNo;
    string name;
    string destination;
};
void bookTicket(vector<Ticket>& tickets){
    Ticket t;

    cout<<"Enter Ticket Number: ";
    cin>>t.ticketNo;

    cin.ignore();

    cout<<"Enter Passenger Name: ";
    getline(cin,t.name);

    cout<<"Enter Destination: ";
    getline(cin,t.destination);

    tickets.push_back(t);

    cout<<"Ticket Booked Successfully!\n";
}
void displayTickets(const vector<Ticket>& tickets){

    if(tickets.empty()){
        cout<<"No Ticket Booked.\n";
        return;
    }
    cout<<"\n------ Booked Tickets ------\n";
    for(Ticket t : tickets){
        cout<<"Ticket No : "<<t.ticketNo<<endl;
        cout<<"Passenger : "<<t.name<<endl;
        cout<<"Destination : "<<t.destination<<endl;
        cout<<"---------------------------"<<endl;
    }
}
int main(){
    vector<Ticket> tickets;
    int choice;
    do{

        cout<<"\n===== TICKET BOOKING SYSTEM ====="<<endl;
        cout<<"1. Book Ticket"<<endl;
        cout<<"2. Display Tickets"<<endl;
        cout<<"3. Exit"<<endl;
        cout<<"Enter Choice: ";
        cin>>choice;
        switch(choice){
            case 1:
                bookTicket(tickets);
                break;
            case 2:
                displayTickets(tickets);
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