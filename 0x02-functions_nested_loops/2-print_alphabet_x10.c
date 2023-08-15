#include <stdio.h>
#include <stdlib.h>

void print_alphabet(void){
    char alphabet = 'a';
    while (alphabet <= 'z'){
        printf("%c ", alphabet);
        alphabet++;
    }
    printf("\n");
}
int main(void)
{
    for (int i = 1; i <= 10; i++){
        print_alphabet();
    }
    return 0;
}
