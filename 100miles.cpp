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

    //User inputs the amount of mile the car can travel per gallon
    float milesPerGallon; 
    std::cout << "Enter the fuel efficiency in miles per gallon: ";
    std::cin >> milesPerGallon;

    float pricePerGallon; 
    std::cout << "Enter the price of gas per gallon: ";
    std::cin >> pricePerGallon; 

    //To find the price of 100 mile cose of gas, 
    //Need to calculate the gallon used in 100 miles. 
    //Assume we say the 5 miles per gallon is our fuel efficiency, 
    //Then the gallon we need to travel 100 miles is 100/5 = 20 gallons. 
    //Mulitply the gallon by price to get the total price. 
    int miles = 100; 
    float gallonsNeeded = miles / milesPerGallon;
    float totalPrice = gallonsNeeded * pricePerGallon; 
    std::cout << "The price to drive 100 miles is: " << totalPrice << std::endl;

    float currentPosMile = numGallons * milesPerGallon;
    std::cout << "Possible miles with current gas: " << currentPosMile << std::endl;

    return 0;
}