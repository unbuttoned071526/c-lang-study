#include <stdio.h>

int main(void)
{
    /*
    
        Some compilers have a limit of 31 characters 
        in the variable name, but there are all kinds 
        of cases.

    */

    int Number;  // declaration.
    int number;
    // int number; - error!
    int number2;
    int _number3;
    int newNumber1, newNumber2, newNumber3;

    int another_one_number;
    another_one_number = 0;  // assignment.

    // %d = specifier.
    printf(
        "another_one_number = %d.\n", 
        another_one_number
    );

    int another_one_number2 = 0;  // initialization.

    int a_number = 1, b_number = 2, c_number = 3;

    return 0;
}
