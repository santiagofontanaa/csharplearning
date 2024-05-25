#include <iostream>

int main() {
    int x = 42;
    float y = 3.14f;
    std::string z = "Hello, world!";

    void* void_ptr;

    void_ptr = &x;
    std::cout << "int value: " << *(static_cast<int*>(void_ptr)) << std::endl;

    void_ptr = &y;
    std::cout << "float value: " << *(static_cast<float*>(void_ptr)) << std::endl;

    void_ptr = &z;
    std::cout << "string value: " << *(static_cast<std::string*>(void_ptr)) << std::endl;

    return 0;
}

// ROADMAP.SH CODE
