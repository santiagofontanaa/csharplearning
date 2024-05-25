#include <iostream>

int main() {
    int num1 = 10;
    int num2 = 15;
    int num3 = 20;

    // AND 
    if (num1 > 0 && num2 > 0) {
        std::cout << "BOTH NUMBERS ARE GREATHER THAN 0" << std::endl;
    }

    // OR
    if (num1 > 0 || num2 > 0) {
        std::cout << "AT LEAST ONE OF THE 2 NUMBERS IS GREATHER THAN 0" << std::endl;
    }

    // NOT
    if (!(num1 < 0)) {
        std::cout << "THE NUMBER IS NOT NEGATIVE" << std::endl;
    }


    // AN FULL EXAMPLE

    if(!(num2 > 10) && (num2 < 20 || num3 > 15)) {
        std::cout << "THE 2 VALUES ARE TRUE" << std::endl;
    }

}
