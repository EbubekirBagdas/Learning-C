#include <stdio.h>

int main()
{
    register int i;
    int sayi_dizisi[5] = {8,10,12,14,16};
    for(i = 0; i < 5; i++){
        printf("sayidizisi[%d] = %d\n", i, sayi_dizisi[i]);
    }

    return 0;
}