#include <stdio.h>

int main(void)
{
    printf("Hello, World!\n");
    printf(": mkdir -p build/metanit/01\n");
    printf("GCC: gcc src/metanit/01/01-hello-world.c -o build/metanit/01/01-hello-world-gcc.\n");
    printf("Clang: clang src/metanit/01/01-hello-world.c -o build/metanit/01/01-hello-world-clang.\n");
    return 0;
}
