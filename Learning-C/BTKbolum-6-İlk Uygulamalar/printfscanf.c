#include <stdio.h>

int main()
{
    int sayi1, sayi2, toplam;

    printf("Iki sayi giriniz: ");
    scanf("%d%d", &sayi1,&sayi2);

    toplam = sayi1 + sayi2;

    printf("Sum = %d", toplam);

}