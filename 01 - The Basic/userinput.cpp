/*
 CIN is a language original variable that reads the data of the user keyboard.
 While in COUT we use << with CIN we should use >>
*/

#include <iostream>

// Ask for the name to the User
int example1() {

    std::string clientName;
    std::cout << "Type your name" << std::endl;
    std::cin >> clientName;
    std::cout << "Your name is: " << clientName;
}


// Simple Calculator
int example2() {
    int x,y;
    int sum;
    std::cout << "Type your FIRST NUMBER: " << std::endl;
    std::cin >> x;
    std::cout << "Type your SECOND NUMBER: " << std::endl;
    std::cin >> y;
    int sum = x + y;
    std::cout << "The SUM between your FIRST NUMBER and your SECOND NUMBER is: " << sum;
}   
