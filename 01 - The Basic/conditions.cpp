/*
 IF: IF is a block of code that is executed if the expression is TRUE
 ELSE: ELSE is a block of code that is executed if the expression is FALSE
 ELSE IF: ELSER IF is for specify a new condition in case of the first condition was FALSE
 SWITCH: SWITCH is for specify alternatives blocks of code for be executed.


 The sintax for create a condition is the next:
 if (condition) {
    (HERE GOES THE CODE)
 }
*/


#include <iostream>

int main() {
    // IF / ELSEIF / ELSE CONDITIONS EXAMPLE
    int x = 17;
    if (10 > 15) {
        std::cout << "10 is greater than 15";
    }
    else if (x == 20) {
        std::cout << "X is equal to 20";
    }
    else {
        std::cout << "The both conditions was False!";
    }

    // SWITCH CASE
    int clientGender = 2;
    switch (clientGender) {
        case 1:
            std::cout << "The client is a Male";
            break;
        case 2:
            std::cout << "The client is a Female";
            break;

    }
    return 0;
}
