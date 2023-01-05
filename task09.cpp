#include<iostream>
using namespace std;
main()
{
int no_1,no_2,no_3,no_4,no_5;
int no_6,no_7,no_8,no_9,no_10;
int no_11,no_12,no_13,no_14,no_15;
int sum_1,multiply,subtract_1;
int sum_2,subtract_2;

cout<<"Enter 1st  number: ";
cin>>no_1;
cout<<"Enter 2nd  number: ";
cin>>no_2;
cout<<"Enter 3rd  number: ";
cin>>no_3;
cout<<"Enter 4th  number: ";
cin>>no_4;
cout<<"Enter 5th  number: ";
cin>>no_5;
cout<<"Enter 6th  number: ";
cin>>no_6;
cout<<"Enter 7th  number: ";
cin>>no_7;
cout<<"Enter 8th  number: ";
cin>>no_8;
cout<<"Enter 9th  number: ";
cin>>no_9;
cout<<"Enter 10th number: ";
cin>>no_10;
cout<<"Enter 11th number: ";
cin>>no_11;
cout<<"Enter 12th number: ";
cin>>no_12;
cout<<"Enter 13th number: ";
cin>>no_13;
cout<<"Enter 14th number: ";
cin>>no_14;
cout<<"Enter 15th number: ";
cin>>no_15;


sum_1=no_1+no_2+no_3+no_4+no_5;
multiply=no_6*no_7*no_8*no_9*no_10;
subtract_1=no_11-no_12-no_13-no_14-no_15;

sum_2=sum_1+multiply;
subtract_2=sum_2-subtract_1;

cout<<"The final output is: "<<subtract_2;
}


