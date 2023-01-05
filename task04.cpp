#include<iostream>
using namespace std;
main()
{
string name;
float subj_1;
float subj_2;
float subj_3;
float subj_4;
float subj_5;
float sum_of_marks;
float total_marks=500;
float percentage;

cout<<"Enter name of student: ";
cin>>name;
cout<<"Enter subject 1 marks: ";
cin>>subj_1;
cout<<"Enter subject 2 marks: ";
cin>>subj_2;
cout<<"Enter subject 3 marks: ";
cin>>subj_3;
cout<<"Enter subject 4 marks: ";
cin>>subj_4;
cout<<"Enter subject 5 marks: ";
cin>>subj_5;

sum_of_marks= subj_1+subj_2+subj_3+subj_4+subj_5;
percentage=(sum_of_marks/total_marks)*100;

cout<<"Student name: "<<name<<endl;
cout<<"Total obtained percentage: "<<percentage;
}