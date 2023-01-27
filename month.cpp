/*
Author: Evan Lu
Course: CSCI-135
Instructor: Professor Zamansky
Assignment: Task D. Number of days in a given month
*/

#include <iostream>

int main(){
    int year, month, day; 

    std::cout << "Enter year: ";
    std::cin >> year;

    std::cout << "Enter month: "; 
    std::cin >> month; 

    if(month == 2){
        if((year % 4) != 0){
            day = 28;
        } else if((year % 100) != 0){
            day = 29; 
        } else if((year % 400) != 0){
            day = 28;
        } else {
            day = 29;
        }
    }

    if(month == 4 || month == 6 || month == 9 || month == 11){
        day = 30;
    } else {
        day = 31;
    }

    std::cout << day << std::endl;
    
    return 0; 
}