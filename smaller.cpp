#include <iostream> 

int main(){
    int first, second; 
    std::cout << "Enter the first number: ";
    std::cin >> first; 
    std::cout << "Enter the second number: "; 
    std::cin >> second; 

    if(first > second){
        std::cout << second;
    } 
    else{
        std::cout << first; 
    }
    return 0; 
}