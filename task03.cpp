#include<iostream>
using namespace std;
main()
{
float initial_velocity,acceleration;
float time;
float final_velocity;
cout<<"Enter initial velocity: ";
cin>>initial_velocity;
cout<<"Enter acceleration: ";
cin>>acceleration;
cout<<"Enter time: ";
cin>>time;
final_velocity=(acceleration*time)+initial_velocity;
cout<<"Final Velocity= "<<final_velocity<<endl;
}
