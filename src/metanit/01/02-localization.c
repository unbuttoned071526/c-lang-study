/*

But it doesn't work on my CachyOS! =)

❯ locale -a
C
C.utf8
en_US.utf8
POSIX

*/

#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "en_US.UTF-8");
    printf("%.2f\n", 6.7);

    setlocale(LC_ALL, "de_DE.UTF-8");
    printf("%.2f\n", 6.7);

    return 0;
}
