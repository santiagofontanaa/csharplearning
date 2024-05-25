#include <iostream>

int main() {
    int num1 = 10; // Statically defined as an integer
    float num2 = 10.99; // Statically defined as a float
    char c = 'c'; // Statically defined as a char

    num1 = num2; // This assignment would convert pi's value from double type to int type

    std::cout << c;

    return 0;
}
