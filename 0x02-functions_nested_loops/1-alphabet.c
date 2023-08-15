#include <stdio.h>
#include <stdlib.h>

void print_alphabet(void){
    char alphabet = 'a';
    while (alphabet <= 'z'){
        printf("%c \n", alphabet);
        alphabet++;
    }
    printf("\n");
}
int main(void)
{	
    print_alphabet();
    return 0;
}
