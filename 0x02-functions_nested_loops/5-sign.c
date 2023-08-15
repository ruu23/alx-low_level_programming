#include <stdio.h>
#include <stdlib.h>
int print_sign(int n){
    if (n > 0){
        return 1;
        printf("+");
    }else if (n == 0){
        return 0;
        printf("0");
    }else {
        return -1;
        printf("-");
    }
}
int main(void)
{
    int r;

    r = print_sign(98);
    _putchar(',');
    _putchar(' ');
    _putchar(r + '0');
    _putchar('\n');
    r = print_sign(0);
    _putchar(',');
    _putchar(' ');
    _putchar(r + '0');
    _putchar('\n');
    r = print_sign(0xff);
    _putchar(',');
    _putchar(' ');
    _putchar(r + '0');
    _putchar('\n');
    r = print_sign(-1);
    _putchar(',');
    _putchar(' ');
    _putchar(r + '0');
    _putchar('\n');
    
    return 0;
}
