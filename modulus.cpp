#include<iostream>
using namespace std;
main()
{
int num_4digit;
int num_1;
int num_2;
int num_3;
int num_4;
int num_5;
int num_6;
int sum;

cout<<"Enter a 4 digit number: ";
cin>>num_4digit;

num_1=num_4digit/1000;
num_2=num_4digit%1000;
num_3=num_2/100;
num_4=num_2%100;
num_5=num_4/10;
num_6=num_4%10;

sum=num_1+num_3+num_5+num_6;

cout<<"The Final Output is: "<<sum;
}
