#include <stdio.h>
#include <stdlib.h>

void print_alphabet_x10(void){
    for (int i = 1; i <= 10; i++){
        char alphabet = 'a';
    while (alphabet <= 'z'){
        printf("%c ", alphabet);
        alphabet++;
    }
    printf("\n");
    }
}
int main(void)
{
    print_alphabet_x10();
    return 0;
}
