/*
 In C++ theres different types of variables that each one is defined with different keyword
 
 > int - Only for INTEGER NUMBERS
 > double - Only for FLOATING NUMBERS
 > char - Only for SINGLES CHARACTERS
 > bool - Only for TRUE or FALSE

 The sintax for create a variable is the next:

 type variableName = value;

 The variables can be named by shorts name like x,y,z or by descriptives names like clientName. I personally recommend using descriptives names. In a simple program the variable name wont be a problem but in complex programs the variables names can make easiers the development.

 We can add const to any variable for make a variable that cant change while the program is executing.

 A example of a const can be:

 const int num1 = 15;
 int num2 = 10;
 
 the first one CANT change
 the second one CAN change
*/

#include <iostream>

int main() {
    
    // An simple Sum
    int num1 = 15;
    int num2 = 10;
    std::cout << "NUMBER 1: " << num1 << std::endl;
    std::cout << "NUMBER 2: " << num2 << std::endl;
    std:: cout << "SUM: " << num1 + num2;


    // Other examples
    int intNum = 10;
    double doubleNum = 10.99;
    char charLetter = 'A';
    bool boolValue = true;

    // We too can make Multiple Variables
    // Example 1
    int x=2,y=4,z=6;

    // Example 2
    int x, y, z;
    x = y = z = 50;

    /*
    // This will work
    const int minutesPerHour = 60;
   
    // This will not work
    const int minutesPerHour;
    minutesPerHour = 60;

    */
    
    // Finish the function
    return 0;
}
