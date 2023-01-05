#include<iostream>
using namespace std;
main()
{
float rupee=1.94;
float veg_price_per_kg;
float fruit_price_per_kg;
int total_kg_vegetables_sold;
int total_kg_fruits_sold;
float total_vegetables_price_in_coins;
float total_fruits_price_in_coins;
float total_harvest_price_in_rupees;

cout<<"Enter the vegetable price per kilogram in coins: ";
cin>>veg_price_per_kg;
cout<<"Enter the fruit price per kilogram in coins: ";
cin>>fruit_price_per_kg;
cout<<"Enter the total kilograms of vegetables sold: ";
cin>>total_kg_vegetables_sold;
cout<<"Enter the total kilograms of fruits sold: ";
cin>>total_kg_fruits_sold;

total_vegetables_price_in_coins=veg_price_per_kg*total_kg_vegetables_sold;
total_fruits_price_in_coins=fruit_price_per_kg*total_kg_fruits_sold;

total_harvest_price_in_rupees=(total_vegetables_price_in_coins+total_fruits_price_in_coins)*rupee;
cout<<"Total price of the harvest in rupees: "<<total_harvest_price_in_rupees;

}