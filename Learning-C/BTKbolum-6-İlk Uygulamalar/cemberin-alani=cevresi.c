#include <stdio.h>
#include <math.h>
int main()
{
    float yaricap, cevre, alan;

    printf("Dairenin yaricapini giriniz: ");
    scanf("%f", &yaricap);
    cevre = 2 * M_PI * yaricap;
    alan = M_PI * yaricap * yaricap;

    printf("Alan = %f birim kare\nCevre = %f birim", alan , cevre);
}