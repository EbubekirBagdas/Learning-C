#include <stdio.h>
#include <math.h>

int main()
{
    double taban, kuvvet, sonuc;

    printf("Taban degerini giriniz: ");
    scanf("%lf", &taban);

    printf("Kuvvet degerini giriniz: ");
    scanf("%lf", &kuvvet);

    sonuc  =pow(taban, kuvvet);
    printf("%.2lf ^ %.2lf = %.2lf", taban, kuvvet, sonuc);
}