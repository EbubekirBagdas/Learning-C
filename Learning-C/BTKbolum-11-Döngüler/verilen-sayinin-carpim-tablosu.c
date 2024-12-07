#include <stdio.h>

int main()
{
    int i, sayi;
    printf("Carpim tablosu olusturulacak sayiyi giriniz: ");
    scanf("%d", &sayi);

    for(i = 1; i <= 10; i++)
        printf("%d * %d = %d\n", sayi, i, (sayi*i));

    return 0;
}