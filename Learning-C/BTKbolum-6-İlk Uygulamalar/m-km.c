#include <stdio.h>

int main()
{
    float cm, m, km;

    printf("Uzunlugu santimetre cinsinden giriniz: ");
    scanf("%f", &cm);

    m = cm / 100.0;
    km = m / 1000.0;

    printf("Metre cinsinden uzunluk = %.3f m\n", m);
    printf("Kilometre cinsinden uzunluk = %.3f km\n", km);

    return 0;
}