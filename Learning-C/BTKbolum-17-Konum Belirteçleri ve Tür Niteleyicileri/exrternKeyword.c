#include <stdio.h>
int x = 10;
int y = 20;
int z = 30;
int main()
{
    extern int y;
    int z;
    extern int t;
    printf("Global olan x degiskeninin degeri:%d\n", x);
    printf("Extern olan y degiskeninin degeri:%d\n", y);
    printf("z degiskeninin degeri:%d\n", z);
    printf("Extern olan t degiskeninin degeri:%d\n", t);

    return 0;
}
int t = 40;
