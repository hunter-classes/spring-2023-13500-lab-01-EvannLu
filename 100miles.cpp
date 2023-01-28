/*
Author: Evan Lu
Course: CSCI-135
Instructor: Professor Maryash
Assignment: E2.10 - Cost per 100 Miles
*/

#include <iostream>

int main(){               
    
    int numGallons; 
    std::cout << "Enter the number of gallons of gas in the tank: ";
    std::cin >> numGallons; 

    double milesPerGallon; 
    std::cout << "Enter the fuel efficiency in miles per gallon: ";
    std::cin >> milesPerGallon;

    double pricePerGallon; 
    std::cout << "Enter the price of gas per gallon: ";
    std::cin >> pricePerGallon; 

    int miles = 100; 
    double gallonsNeeded = miles / milesPerGallon;
    int totalPrice = gallonsNeeded * pricePerGallon; 
    std::cout << "The price to drive 100 miles is: " << totalPrice << std::endl;

    int currentPosMile; 
    currentPosMile = numGallons * milesPerGallon;
    std::cout << "Possible miles with current gas: " << currentPosMile << std::endl;

    


    return 0;
}