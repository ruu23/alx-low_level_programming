#include <stdio.h>
#include <stdlib.h>
int print_last_digit(int num){
    int digits = num % 10;
    return digits;
}
int main(void)
{
     int r;

    r = print_last_digit(98);
    printf("%d\n", r);
    r = print_last_digit(0);
    printf("%d\n", r);
    r = print_last_digit(-1024);
    printf("%d\n", r);

    return 0;
}
