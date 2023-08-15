#include <stdio.h>
#include <stdlib.h>

int _islower(int c){
    if (c >= 'a' && c <= 'z' ){
            return 1;
    }else {
        return 0;
    }
}

int main(void)
{
    int x;
     x = _islower('H');
     printf("%d",x);
     x = _islower('o');
     printf("%d",x);
     x = _islower(108);
     printf("%d",x);
    return 0;
}
