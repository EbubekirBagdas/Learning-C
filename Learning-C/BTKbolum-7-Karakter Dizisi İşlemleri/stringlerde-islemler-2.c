#include <stdio.h>

int main()
{
    char karsilama_mesaji1[] = "Merhaba!";
    char karsilama_mesaji2[] = {'M', 'e','r', 'h', 'a', 'b', 'a', '!', '\0'};

    printf("%lu", sizeof(karsilama_mesaji1));
    printf("\n...\n");
    printf("%lu", sizeof(karsilama_mesaji2));
}