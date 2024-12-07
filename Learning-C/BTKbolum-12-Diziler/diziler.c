#include <stdio.h>

int main()
{
    int myArr[] = {25, 50, 75, 100};
    myArr[0] = 33;

    printf("%d", myArr[1]);

    return 0;
}