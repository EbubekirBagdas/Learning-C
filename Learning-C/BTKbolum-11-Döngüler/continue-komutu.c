#include <stdio.h>

int main()
{

    int i, j;
    for(i = 1; i <= 10; i++){
        if(i == 4)
            continue;
        printf("%d\n", i);
    }

    for(i = 1; i <= 10; i++){
        for(j = 1; j <= 3; j++) {
            if(j == 2)
                break;
            printf("%d\n", j);
        }
        printf("%d\n", i);
    }

    return 0;
}