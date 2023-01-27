/*
Author: Evan Lu
Course: CSCI-135
Instructor: Professor Zamansky
Assignment: Task C. A leap year or a common year?
*/

#include <iostream>

int main(){
    int year; 
    std::cout << " Enter year: ";
    std::cin >> year; 

    if(year % 4 != 0 ){
        std::cout << "Common year" << std::endl;
    }
    else if (year % 100 != 0){
        std::cout << "Leap year" << std::endl;
    }
    else if(year % 400 != 0){
        std::cout << "Common year" << std::endl;
    }
    else{
        std::cout << "Leap year" << std::endl;
    }
    
    return 0;
}