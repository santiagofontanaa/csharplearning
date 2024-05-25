Data types are used to categorize different types of variables. The Data Type is essential to determine the type that a variable would be.

FUNDAMENTAL DATA TYPES:
- Integer
- Float/Double
- Character
- Bool

DERIVED DATA TYPES:
- Arrays
- Pointers
- References

USER-DEFINED DATA TYPES:
- Structures
- Classes
- Unions


**FUNDAMENTAL DATA TYPES:**

INTEGER:

The INT or Integer data type is for storing integer numbers
> int num1 = 10;


FLOAT/DOUBLE:

The Float or Double data type is for storing floating numbers. Double has more precision than Float
> float num1 = 10.99;
> double num1 = 10.888889;

CHARACTER:

The CHARACTER data type is for storing an single charracter.
> char letter = 'A';

BOOL:
The BOOL data type is for storing TRUE or FALSE value.
> bool green_background = false;

**DERIVED DATA TYPES:**

ARRAY:

The ARRAY data type is for storing multiple values.
> int numbers[3] = {0 , 1 , 2}

POINTERS:

The POINTERS data type is for storing the memory adress of a variable.
> int num1 = 10;
> int* pNum1 = &num1;

REFERENCES:

The REFERENCE data type is for creating an alter name of a variable.
> int num1 = 10;
> int& num1Ref = num1;

**USER-DEFINED DATA TYPES:**

STRUCTURES:

Structures are used to store different data types under a single variable and accessibility of member variables and methods are public.

```
struct clientId() {
  std::string name;
  int age;
  flot height;
}

clientId 1 = {"Santiago", 17, 6.1} 
```

CLASSES:

A class in C++ is a user-defined type or data structure declared with any of the keywords class, struct or union that has data and functions as its members whose access is governed by the three access specifiers private, protected or public.

```
class clientId() {
  Public() {
      std::string name;
      int age;
      flot height;
  }
}

int main() {
  class clientId;

  clientId.name = "Santiago"
  clientId.age = 17;
  cliendId.height = 6.1;
}
```

UNIONS:

a data structure that allows different data types to be stored in the same memory location.

```
union clientId {
  std::string name;
  int age;
  flot height;
};

clienID client;
client.age = 17;
```
