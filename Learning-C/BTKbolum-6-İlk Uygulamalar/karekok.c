#include <stdio.h>
#include <math.h>

int main()
{
    double sayi, karekok;

    printf("Karekoku hesaplanacak sayiyi girniz: ");
    scanf("%lf", &sayi);

    karekok = sqrt(sayi);
    printf("sonuc = %.3lf", karekok);
}