#include <stdio.h>
#include <stdlib.h>

int _isalpha(int c){
    if (c >= 'a' || c >= 'A'){
        return 1;
    }else {
        return 0;
    }
}

int main(void)
{
    int x ;

    x = _isalpha('H');
    printf("%d", x);
    x = _isalpha('o');
    printf("%d", x);
    x = _isalpha('108');
    printf("%d", x);
    x = _isalpha(';');
    printf("%d", x);

    return 0;
}
