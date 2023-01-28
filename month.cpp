/*
Author: Evan Lu
Course: CSCI-135
Instructor: Professor Zamansky
Assignment: Task D. Number of days in a given month
*/

#include <iostream>

int main(){
    int year, month, days; 

    std::cout << "Enter year: ";
    std::cin >> year;

    std::cout << "Enter month: "; 
    std::cin >> month; 

    if((month % 2 == 1) and month < 8){
        days = 31; 
    }
    //From Jan to July, odd first then even.
    //From Aug to Dec, even first then odd. 
    else if((month % 2 == 0) and month > 7){
        days = 31;
    }
    else if(month == 2){
        if((year % 4) != 0){
            days = 28;
        }
        else if((year % 100) != 0){
            days = 29;
        }
        else if((year % 400) != 0){
            days = 28;
        }
        else{
            days =29;
        }
    }
    else{
        days = 30;
    }

    std::cout << days;
    return 0;
}
