#include <stdio.h>

int main()
{
    int x = 5, y = 6, z = 50;
    printf("x = %d, y = %d, z = %d\n", x , y , z);
    printf("%d", x + y + z );
    printf("\n...\n");
    x = y = z = 50;

    printf("x = %d, y = %d, z = %d\n", x , y , z);
    printf("%d\n", x + y + z );

}