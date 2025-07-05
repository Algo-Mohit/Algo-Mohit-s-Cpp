#include<iostream>
#include<string>
#include<cstdio>
using namespace std;
struct car
{
    string brand_name ;
    string model;
    int price;
    string fuel_type;
    int launching_year;
    string transmission;
    int horsepower;
    string cheis_number;
    string vehicle_type;
    
};
int main()
{
    car car_specs;
    cout<<"Enter brand name : ";
    getline(cin,car_specs.brand_name);
    cout<<"Enter model name : ";
    getline(cin,car_specs.model);
    cout<<"Enter price : ";
    cin>>car_specs.price;
    cout<<"Enter fuel type : ";
    getline(cin,car_specs.fuel_type);
    cout<<"Enter launching year : ";
    cin>>car_specs.launching_year;
     cout<<"Enter tranmission mode : ";
    getline(cin,car_specs.transmission);
    cout<<"Enter horse power : ";
    cin>>car_specs.horsepower;
     cout<<"Enter chesis number : ";
    getline(cin,car_specs.cheis_number);
     cout<<"Enter vehicle type (ex. SUV , MUV etc) : ";
    getline(cin,car_specs.vehicle_type);

    cout<<"\n\n\n\n\n";
    cout<<"Brand : " <<car_specs.brand_name<<endl; 
    cout<<"Model name : "<<car_specs.model<<endl;
    cout<<"price : "<<car_specs.price<<endl;
    cout<<"Fuel type : "<<car_specs.fuel_type<<endl;
    cout<<"Launching year : "<<car_specs.launching_year<<endl;
    cout<<"transmission : "<<car_specs.transmission<<endl;
    cout<<"Horse power : "<<car_specs.horsepower<<endl;
    cout<<"chesis number : "<<car_specs.cheis_number<<endl;
    cout<<"vehicle type : "<<car_specs.vehicle_type<<endl;
    
    return 0;
    
}