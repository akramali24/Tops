#include<iostream>
using namespace std;

class Event{
    public:
       string event_name;
       string customer_name;
       double numberof_guest;
       int numberof_minutes;

    void input_data(){
        cout<<"**********|| Event Management System ||**********"<<endl;
        cout<<"Enter the name of event:";
        cin>>event_name;
        cout<<"Enter the customer's First and Last name:";
        cin.ignore();
        getline(cin,customer_name);
        cout<<"Enter number of guests: ";
        cin>>numberof_guest;
        cout<<endl;
        cout<<"Enter the number of minutes in the Event: ";
        cin>>numberof_minutes;
    }
};
class Cost: public Event{
    public:
       double Cost1; 
       double Cost2; 
       double total_food;
       double cost_of_one_server;
       int numberof_server;
       double avg_cost;
       double totalcost;

       void calculate_cost(){
         Cost1 = (numberof_minutes / 60) * 18.50;
         Cost2 = (numberof_minutes % 60) * 0.40;
         total_food = numberof_guest * 20.70 ;
         cost_of_one_server = Cost1 + Cost2 ;
         numberof_server = numberof_guest / 20;
         avg_cost = total_food / numberof_guest;
         totalcost = total_food + ((Cost1 + Cost2) * numberof_server);
       }

       void display(){
          cout<<"===============Event Estiment for:"<<customer_name<<"==============="<<endl;
          cout<<"Number of servers:"<<numberof_server<<endl;
          cout<<"The cost for servers: "<<cost_of_one_server<<endl;
          cout<<"The cost for Food is: "<<total_food<<endl;
          cout<<"Averager cost per person: "<<avg_cost<<endl;
          cout<<endl;
          cout<<"Total cost is: "<<totalcost<<endl;
          cout<<"Please deposit 25% amount to reserve the event: "<<endl;
          cout<<"The deposit needed is: "<<totalcost*(1.0/4);
       }
};
 int main(){
    Cost p;
    p.input_data();
    p.calculate_cost();
    p.display();
 }