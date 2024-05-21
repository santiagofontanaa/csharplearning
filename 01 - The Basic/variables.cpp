/*
 In C++ theres different types of variables that each one is defined with different keyword
 
 > int - Only for INTEGER NUMBERS
 > double - Only for FLOATING NUMBERS
 > char - Only for SINGLES CHARACTERS
 > std::string - Stores TEXT
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

 DIFFERENT FORMS OF INITIALIZATION:
 int a;         // DEFAULT
 int b = 5;     // INTIAIL VALUE OF B WOULD BE 5
 int c( 6 );    // INITIAL VALUE DIRECTLY IN PARHENTESIS
 int d { 7 };   // INITIAL VALUE DIRECTLY IN BRACES
 int e = { 8 }; // INTIAL VALUE WITH EMPTY BRACES AFTER EQUAL SIGN
 int f {};      // INITIAL VALUE WITH EMPTY BRACES

 We can initialize variables by the next way:

 int a = (15);

 int num1 = (15), num2 = (15); / Correct Way
 int num1, num2 = (15); / Incorrect Way

 We can do it with the braces too

 int num1 = {15}, num2 = {15}; 

 EXAMPLE:
 int num1 {0};        // INITIALIZING WITH THE NUMBER 0
 std::cout << num1;   // THE COUT WILL BE THE 0 INITIALIZED

 int num1;            // INITIALIZING BY THE DEFAULT
 std::cout << num1;   // THE COUT WILL BE 0 BY DEFAULT


 [[maybe_unused]] ATTRIBUTE:
 
 The attribute [[maybe_unused]] is to specify that an variable, function, class or something else can not be used.

 EXAMPLE:

 [[maybe_unused]] double gravity { 9.8 }; // Here we are saying that this variable CAN NOT be used in the program.

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
    std::string stringText = "Hello World!";
    bool boolValue = true;

    // We too can make Multiple Variables
    // Example 1
    int x=2,y=4,z=6;

    // Example 2
    int x, y, z;
    x = y = z = 50;

    // Example 3
    int a;         
    int b = 5;     
    int c( 6 );   
    int d { 7 };   
    int e = { 8 }; 
    int f {};      

    // Example 4
    [[maybe_unused]] double gravity { 9.8 };
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
