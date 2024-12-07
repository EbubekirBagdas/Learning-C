#include <stdio.h>

int main()
{
    int sayi1, sayi2, sayi3, maximum;

    printf("3 adet sayi giriniz: ");
    scanf("%d%d%d", &sayi1, &sayi2, &sayi3);

    if((sayi1 > sayi2) && (sayi1 > sayi3))
        maximum = sayi1;

    else if((sayi2 > sayi1) && (sayi2 > sayi3))
        maximum = sayi2;

    else if((sayi3 > sayi1) && (sayi3 > sayi2))
        maximum = sayi3;

        printf("En buyuk sayi %d", maximum);
}