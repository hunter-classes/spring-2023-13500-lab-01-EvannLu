/*
Author: Evan Lu
Course: CSCI-135
Instructor: Professor Maryash
Assignment: E2.10 - Cost per 100 Miles
*/

#include<iostream>

int main(){               
    //Enter number of gallons of gas.
    std::cout << "Enter number of gallons of gas: ";
    int num_gallons;
    std::cin >> num_gallons;

    //enter miles_per_gallon, this can contain decimal parts,
    //so the type is double.
    std::cout << "Enter miles per gallon: ";
    double miles_per_gallon; 
    std::cin >> miles_per_gallon;

    //Enter the price of gas per gallon.
    std::cout << "Enter price per gallon: ";
    double price_per_gallon; 
    std::cin >> price_per_gallon;

    //Find out the price of gas to drive 100 miles.
    int miles = 100;
    int gallons_needed;
    gallons_needed = miles - miles_per_gallon;
    int total_price;
    total_price = gallons_needed * price_per_gallon;
    std::cout << total_price << std::endl; 
    
    //Find out how many miles can drive with my current gas level?
    int miles_possible;
    miles_possible = num_gallons * miles_per_gallon;
    std::cout << miles_possible << std::endl;  

    return 0;
}