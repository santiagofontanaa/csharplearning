/*
 In CPP we have 4 types of Jump Statements: 
 1 - Break
 2 - Continue
 3 - Return
 4 - Goto

 BREAK:
 The BREAK instruction terminates the nearest itineration container.

 CONTINUE:
 The CONTINUE instruction starts a new iteration when the last one finish.

 RETURN:
 The RETURN instruction returns the flow of the execution to the function from where it is called.

 GOTO:
 The GOTO instruction is used to transfer control to the other part of the program
*/
#include <iostream>

int main() {
    // BREAK EXAMPLE
    for (int i = 0; i < 10; i++) {
        if (i == 4) {
        break;
    }
        std::cout << i << std::endl;
    }

    // CONTINUE EXAMPLE
    for (int i = 0; i < 10; i++) {
        if (i == 4) {
        continue;
    }
        std::cout << i << std::endl;
    }

    // RETURN EXAMPLE
    returnExample();
}

// RETURN EXAMPLE
void returnExample() { 
    std::cout << "HELLO WORLD!"; 
  
    return; 
} 

void gotoExample() {
    int n = 4;
 
    if (n % 2 == 0)
        goto label1;
    else
        goto label2;
 
    label1:
        std::cout << "Even" << std::endl;
        return;
 
    label2:
        std::cout << "Odd" << std::endl;
}
