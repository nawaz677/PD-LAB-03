#include<iostream>
using namespace std;
main()
{
string movie_name;
float adult_ticket_price;
float child_ticket_price;
float no_of_adult_tickets_sold;
float no_of_child_tickets_sold;
float total_amount_generated;
float percentage_amount_donated;
float total_amount_donated;
float remaining_amount_achieved;

cout<<"Enter the name of Movie: ";
cin>>movie_name;
cout<<"Enter the price of Adult Ticket: ";
cin>>adult_ticket_price;
cout<<"Enter the price of Child Ticket: ";
cin>>child_ticket_price;
cout<<"Enter the number of Adult Tickets sold: ";
cin>>no_of_adult_tickets_sold;
cout<<"Enter the number of Child Tickets sold: ";
cin>>no_of_child_tickets_sold;

total_amount_generated=(adult_ticket_price*no_of_adult_tickets_sold)+(child_ticket_price*no_of_child_tickets_sold);

cout<<"Total amount generated is: "<<total_amount_generated<<endl;

cout<<"Enter the percentage of amount to be donated: ";
cin>>percentage_amount_donated;

total_amount_donated=(percentage_amount_donated/100*total_amount_generated);

remaining_amount_achieved=total_amount_generated-total_amount_donated;

cout<<"The remaining amount achieved is: "<<remaining_amount_achieved;
}










	