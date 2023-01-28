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

    float milesPerGallon; 
    std::cout << "Enter the fuel efficiency in miles per gallon: ";
    std::cin >> milesPerGallon;

    float pricePerGallon; 
    std::cout << "Enter the price of gas per gallon: ";
    std::cin >> pricePerGallon; 

    int miles = 100; 
    float gallonsNeeded = miles / milesPerGallon;
    float totalPrice = gallonsNeeded * pricePerGallon; 
    std::cout << "The price to drive 100 miles is: " << totalPrice << " per 100 miles" << std::endl;

    float currentPosMile = numGallons * milesPerGallon;
    std::cout << "Possible miles with current gas: " << currentPosMile << std::endl;

    return 0;
}