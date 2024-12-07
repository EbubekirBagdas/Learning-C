#include <stdio.h>

int main()
{
    char metin1[] = "Merhaba\nDunya!";
    printf("%s", metin1);
    printf("\n...\n");

    char metin2[] = "Merhaba\nDunya!";
    printf("%s", metin2);
    printf("\n...\n");

    char metin3[] = {'M','e','r','h','a','b','a','\0'};
    printf("%s", metin3);
    printf("\n...\n");

    char metin4[] = "Ogretmen iceri girince \"Gunaydin\" diye seslendi";
    printf("%s", metin4);
    printf("\n...\n");

    char metin5[] = "Ahmet\'in telefonu hic susmuyordu.";
    printf("%s", metin5);
    printf("\n...\n");

    char metin6[] = "\\ karakteri ters taksim beya backslash olarak anilir.";
    printf("%s", metin6);
    printf("\n...\n");

    return 0;


}