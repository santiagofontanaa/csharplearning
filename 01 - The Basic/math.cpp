/*
 ARITHMETIC OPERATORS:
 [+  ] - Addition        
 [-  ] - Subtraction    
 [*  ] - Multiplication 
 [/  ] - Division        
 [%  ] - Modulus        
 [++ ] - Increment      
 [-- ] - Decrement    

 EXAMPLES FOR EACH ONE:
 x + y
 x - y
 x * y
 x / y
 x % y
 ++x
 --x

 ---------------------------------------------

 ASSIGNMENT OPERATORS:
 [=  ] - Equal
 [+= ] - Equal AND Plus
 [-= ] - Equal AND Minus
 [*= ] - Equal AND Multiplied
 [/= ] - Equal AND Divided
 [%= ] - Equal AND Moduluis
 [|= ] - Divide AND Assignment
 [&= ] - Bitwise AND Assignment
 [^= ] - Bitwise Exclusive OR AND Assignment
 [>>=] - Right Shift AND Assignment
 [<<=] - Left Shift AND Assignment 

 EXAMPLES FOR EACH ONE:
 x = 5
 x = x + 1
 x = x - 1
 x = x * 2
 x = x / 2
 x = x % 2
 x = x & 2 
 x = x | 2
 x = x ^ 2
 x = x >> 3
 x = x << 3

 ---------------------------------------------

 COMPARATION OPERATORS:
 [== ] - Equal TO
 [!==] - NOT equal TO
 [>  ] - Greater THAN
 [<  ] - Less THAN
 [>= ] - Greater THAN or Equal TO
 [<= ] - Less THAN or Equal TO

 EXAMPLES FOR EACH ONE:
 x == y
 x != y
 x > y
 x < y
 x >= y
 x <= y

 ---------------------------------------------

 LOGICAL OPERATORS:
 [&& ] - TRUE if BOTH TRUE
 [|| ] - TRUE if ONE TRUE
 [!  ] - FALSE if TRUE
*/


/*
 MATH:
 MAX AND MIN:
 MAX function find the HIGHEST value between the numbers
 MIN function find the LOWEST value between the numbers

 CMATH library:
 As #include <iostream> we can include the CMATH Library using the include function #include <cmath>

 In the library CMATH we can found functions like:
 > SQRT: Square Root
 > ROUND: Round a number
 > LOG: Natural Logarithm
*/
#include <iostream>
#include <cmath>

int main() {
    // MAX AND MIN
    std::cout << std::max(15,10); // Output: 15
    std::cout << std::min(15,10); // Output: 10

    // CMATH
    std::cout << std::sqrt(64); // Output: 8
    std::cout << std::round(4.8); // Output: 5
    std::cout << std::log(2); // Output: 0.693147

}
