/**
    @file smaller.cpp
    @author Evan Lu
    @date 01/26/2023
*/

#include <iostream> 

int main(){
    int first, second, third; 
    std::cout << "Enter the first number: " << std::endl;
    std::cin >> first; 
    std::cout << "Enter the second number: " << std::endl; 
    std::cin >> second; 
    std::cout << "Enter the third number: " << std::endl; 
    std::cin >> third;    

    if(first > second){
        if(second > third){
            std::cout << "The smallest number is: " << third; 
        }
        else{
            std::cout << "The smallest number is: " << second; 
        }
    } else if(first < third){
        std::cout << "The smallest number is: " << first;
    }

    return 0; 
}