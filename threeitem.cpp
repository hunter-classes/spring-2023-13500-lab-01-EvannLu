/*
Author: Evan Lu
Course: CSCI-135
Instructor: Professor Maryash
Assignment: E1.7 - Three Items
*/

#include <iostream>
#include <string>


int main(){
    std::string a,b,c; 

    std::cout << "Enter one name: " << std::endl;
    std::cin >> a; 

    std::cout << "Enter an second name: " << std::endl; 
    std::cin >> b; 

    std::cout << "Enter an third name: " << std::endl; 
    std::cin >> c; 

    std::cout << a << std::endl; 
    std::cout << b << std::endl; 
    std::cout << c << std::endl;

    return 0; 
}