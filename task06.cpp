#include<iostream>
using namespace std;
main()
{
float size_of_bag_in_pounds;
float cost_of_one_bag;
float area_covered_in_sqfeet;
float cost_of_fertilizer_per_pound;
float cost_of_fertilizing_per_sqfeet;

cout<<"Enter the size of fertilizer bag in pounds: ";
cin>>size_of_bag_in_pounds;
cout<<"Enter the cost of one bag: ";
cin>>cost_of_one_bag;
cout<<"Enter the area covered in Square Feet by the bag: ";
cin>>area_covered_in_sqfeet;

cost_of_fertilizer_per_pound=cost_of_one_bag/size_of_bag_in_pounds;
cout<<"Cost of Fertilizer per pound is: "<<cost_of_fertilizer_per_pound<<endl;

cost_of_fertilizing_per_sqfeet=cost_of_one_bag/area_covered_in_sqfeet;
cout<<"Cost of fertilizng the area per square foot: "<<cost_of_fertilizing_per_sqfeet;

}



