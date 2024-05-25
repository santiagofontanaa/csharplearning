#include <iostream>

int main() {
    int num1 = 10;
    int num2 = 15;
    // FOR LOOP
    for(num1; num1 <= num2; num1++) {
        std::cout << num1 << std::endl;
    }

    // WHILE LOOP
    while(num1 <= num2) {
        std::cout << num1 << std::endl;
        num1++;
    }

}
