#include <stdio.h>
#include <string.h>

int main()
{
    char metin1[20] = "Merhaba ";
    char metin2[] = "Dunya";
    char metin3[20];

    strcat(metin1,metin2);

    printf("%s", metin1);
    printf("\n...\n");

    strcpy(metin3, metin1);

    printf("%s", metin3);
    printf("\n...\n");

    printf("%d\n", strcmp(metin1, metin3));
    printf("\n...\n");
    printf("%d\n", strcmp(metin1, metin2));
    printf("\n...\n");
    printf("%d\n", strcmp(metin2, metin1));
    printf("\n...\n");

    return 0;
}