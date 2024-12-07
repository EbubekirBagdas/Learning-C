#include <stdio.h>

int main()
{
    int sayi1, sayi2, toplam;
    int *ptr1, *ptr2;

    ptr1 = &sayi1;
    ptr2 = &sayi2;

    printf("Iki sayi giriniz: ");
    scanf("%d%d", ptr1, ptr2);
    toplam = *ptr1 + *ptr2;

    printf("Toplam = %d\n", toplam);

    return 0;

}