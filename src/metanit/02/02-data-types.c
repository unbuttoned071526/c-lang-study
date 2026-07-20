#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void)
{
    // 1 byte (8 bit)

    /*
    
        It's worth noting that 
        character literals in single quotes have 
        the type int.
    
    */

    char character1 = 'A';
    printf("character1 (c): %c.\n", character1);
    printf("character1 (d): %d.\n\n", character1);

    /*

        I got curious about what would happen if 
        I tried to store a character larger than one byte 
        in a char. GCC wasn't happy about it! =)

        char character2 = 'Ы';
        printf(character2);

    */

    unsigned char unsigned_char1 = 0;
    unsigned char unsigned_char2 = UCHAR_MAX;

    printf("unsigned_char1 (c): %c.\n", unsigned_char1);
    printf("unsigned_char1 (d): %d.\n", unsigned_char1);
    printf("unsigned_char2 (c): %c.\n", unsigned_char2);
    printf("unsigned_char2 (d): %d.\n\n", unsigned_char2);

    signed char signed_char1 = CHAR_MIN;
    signed char signed_char2 = CHAR_MAX;

    printf("signed_char1 (c): %c.\n", signed_char1);
    printf("signed_char1 (d): %d.\n", signed_char1);
    printf("signed_char2 (c): %c.\n", signed_char2);
    printf("signed_char2 (d): %d.\n\n", signed_char2);

    // 2 byte (16 bit)

    short short1 = SHRT_MIN;
    short short2 = SHRT_MAX;

    printf("short1: %hd.\n", short1);
    printf("short2: %hd.\n\n", short2);

    short int short_int1 = SHRT_MIN;
    short int short_int2 = SHRT_MAX;

    printf("short_int1: %hd.\n", short_int1);
    printf("short_int2: %hd.\n\n", short_int2);

    signed short signed_short1 = 0;
    signed short signed_short2 = SHRT_MAX;

    printf("signed_short1: %hd.\n", signed_short1);
    printf("signed_short2: %hd.\n\n", signed_short2);

    signed short int signed_short_int1 = SHRT_MIN;
    signed short int signed_short_int2 = SHRT_MAX;

    printf("signed_short_int1: %hd.\n", signed_short_int1);
    printf(
        "signed_short_int2: %hd.\n\n", 
        signed_short_int2
    );

    unsigned short unsigned_short1 = 0;
    unsigned short unsigned_short2 = USHRT_MAX;

    printf("unsigned_short1: %hu.\n", unsigned_short1);
    printf("unsigned_short2: %hu.\n\n", unsigned_short2);

    unsigned short int unsigned_short_int1 = 0;
    unsigned short int unsigned_short_int2 = USHRT_MAX;

    printf(
        "unsigned_short_int1: %hu.\n", 
        unsigned_short_int1
    );
    printf(
        "unsigned_short_int2: %hu.\n\n", 
        unsigned_short_int2
    );

    /*
    
        2 byte (16 bit) 
        or 
        4 byte (32 bit) on main platforms.
    
    */

    int int1 = INT_MIN;
    int int2 = INT_MAX;

    printf("int1: %d.\n", int1);
    printf("int2: %d.\n\n", int2);

    signed int signed_int1 = INT_MIN;
    signed int signed_int2 = INT_MAX;

    printf("signed_int1: %d.\n", signed_int1);
    printf("signed_int2: %d.\n\n", signed_int2);

    signed signed1 = INT_MIN;
    signed signed2 = INT_MAX;

    printf("signed1: %d.\n", signed1);
    printf("signed2: %d.\n\n", signed2);

    /*
    
        While experimenting with some examples, 
        I learned that unsigned int 
        should be printed with %u 
        because %d expects an int. 
        char and short, on the other hand, 
        can be printed with %d 
        since they are automatically promoted to int 
        when passed to printf (integer promotions).
    
    */

    unsigned int unsigned_int1 = 0;
    unsigned int unsigned_int2 = UINT_MAX;

    printf("unsigned_int1: %u.\n", unsigned_int1);
    printf("unsigned_int2: %u.\n\n", unsigned_int2);

    unsigned unsigned1 = 0;
    unsigned unsigned2 = UINT_MAX;

    printf("unsigned1: %u.\n", unsigned1);
    printf("unsigned2: %u.\n\n", unsigned2);

    /*
    
        4 byte (32 bit) on Windows
        or
        8 byte (64 bit) on Linux and MacOS.
    
    */

    /*
    
        I learned that values of type long 
        should be printed using the %ld format specifier. 
        I also learned that 
        the compiler treats a negative integer literal 
        as the expression -(number): 
        it first processes the positive literal 
        and then applies the unary minus operator. 
        If the positive literal does not fit 
        in the intended type, 
        the compiler tries to find 
        another suitable type for it. 
        That's why the minimum value is usually written 
        as -LONG_MAX - 1 (or -LLONG_MAX - 1), 
        or, 
        even better, 
        by using the LONG_MIN and LLONG_MIN constants.
    
    */

    long long1 = LONG_MIN;
    long long2 = LONG_MAX;

    printf("long1: %ld.\n", long1);
    printf("long2: %ld.\n\n", long2);

    long int long_int1 = LONG_MIN;
    long int long_int2 = LONG_MAX;

    printf("long_int1: %ld.\n", long_int1);
    printf("long_int2: %ld.\n\n", long_int2);

    signed long int signed_long_int1 = LONG_MIN;
    signed long int signed_long_int2 = LONG_MAX;

    printf("signed_long_int1: %ld.\n", signed_long_int1);
    printf("signed_long_int2: %ld.\n\n", signed_long_int2);

    signed long signed_long1 = LONG_MIN;
    signed long signed_long2 = LONG_MAX;

    printf("signed_long1: %ld.\n", signed_long1);
    printf("signed_long2: %ld.\n\n", signed_long2);

    unsigned long unsigned_long1 = 0;
    unsigned long unsigned_long2 = ULONG_MAX;

    printf("unsigned_long1: %lu.\n", unsigned_long1);
    printf("unsigned_long2: %lu.\n\n", unsigned_long2);

    unsigned long int unsigned_long_int1 = 0;
    unsigned long int unsigned_long_int2 = ULONG_MAX;

    printf(
        "unsigned_long_int1: %lu.\n", 
        unsigned_long_int1
    );
    printf(
        "unsigned_long_int2: %lu.\n\n", 
        unsigned_long_int2
    );

    /*
    
        8 bytes (64 bit) on Windows, Linux and MacOS.

    */

    long long long_long1 = LLONG_MIN;
    long long long_long2 = LLONG_MAX;

    printf("long_long1: %lld.\n", long_long1);
    printf("long_long2: %lld.\n\n", long_long2);

    long long int long_long_int1 = LLONG_MIN;
    long long int long_long_int2 = LLONG_MAX;

    printf("long_long_int1: %lld.\n", long_long_int1);
    printf("long_long_int2: %lld.\n\n", long_long_int2);

    signed long long int signed_long_long_int1 = LLONG_MIN;
    signed long long int signed_long_long_int2 = LLONG_MAX;

    printf(
        "signed_long_long_int1: %lld.\n", 
        signed_long_long_int1
    );
    printf(
        "signed_long_long_int2: %lld.\n\n", 
        signed_long_long_int2
    );

    signed long long signed_long_long1 = LLONG_MIN;
    signed long long signed_long_long2 = LLONG_MAX;

    printf(
        "signed_long_long1: %lld.\n", 
        signed_long_long1
    );
    printf(
        "signed_long_long2: %lld.\n\n", 
        signed_long_long2
    );

    unsigned long long unsigned_long_long1 = 0;
    unsigned long long unsigned_long_long2 = ULLONG_MAX;

    printf(
        "unsigned_long_long1: %llu.\n", 
        unsigned_long_long1
    );
    printf(
        "unsigned_long_long2: %llu.\n\n", 
        unsigned_long_long2
    );

    unsigned long long int unsigned_long_long_int1 = 0;
    unsigned long long int unsigned_long_long_int2 = (
        ULLONG_MAX
    );

    printf(
        "unsigned_long_long_int1: %llu.\n", 
        unsigned_long_long_int1
    );
    printf(
        "unsigned_long_long_int2: %llu.\n\n", 
        unsigned_long_long_int2
    );

    // 4 byte (32 bit)

    /*
    
        By analogy with <limits.h>, 
        I also learned about <float.h> 
        for floating-point numbers.

    */

    /*
    
        I also learned that floating-point values 
        are typically printed using the %e format specifier.
    
    */

    /*
    
        I found out that to get 
        the largest negative floating-point value, 
        it's enough to put a minus sign 
        in front of the maximum-value constant.
    
    */

    float float1 = -FLT_MAX;
    float float2 = FLT_MAX;

    printf("float1: %f.\n", float1);
    printf("float2: %f.\n\n", float2);

    // 8 byte (64 bit)

    double double1 = -DBL_MAX;
    double double2 = DBL_MAX;

    printf("double1: %lf.\n", double1);
    printf("double2: %lf.\n\n", double2);

    /*
    
        10 byte (80 bit)
        or
        96 bit
        or
        128 bit.

    */

    long double long_double1 = -LDBL_MAX;
    long double long_double2 = LDBL_MAX;

    printf("long_double1: %Lf.\n", long_double1);
    printf("long_double2: %Lf.\n\n", long_double2);

    /*
        void is a special type 
        that represents the absence of a value.
        Variables of type void cannot be declared.
    */

    /*
    
        bi, oct and hex numbers.

    */

    int bi_number = 0b1010;
    int oct_number = 012;
    int hex_number = 0xA;

    printf("bi_number: %d.\n", bi_number);
    printf("oct_number: %d.\n", oct_number);
    printf("hex_number: %d.\n\n", hex_number);

    /*
    
        We can define our own aliases 
        for long or complex types using typedef 
        to make them easier to work with.

    */

    {
        typedef unsigned char BYTE;

        BYTE byte = 0;

        printf("unsigned_char_BYTE: %d.\n\n", byte);
    }

    size_t long_size = sizeof(long);
    printf("sizeof(long): %hd bytes.\n\n", long_size);

    int sizeof_variable = 0;
    printf(
        "sizeof(variable): %hd bytes.\n\n", 
        sizeof(sizeof_variable)
    );
    printf(
        "sizeof variable: %hd bytes.\n\n", 
        sizeof sizeof_variable
    );

    /*
    
        sizeof can also return the size 
        of the value returned by a function!
    
    */

    long long sizeof_sizeof = sizeof sizeof(char);
    printf(
        "sizeof sizeof(char): %lld bytes.\n",
        sizeof_sizeof
    );

    return 0;
}
