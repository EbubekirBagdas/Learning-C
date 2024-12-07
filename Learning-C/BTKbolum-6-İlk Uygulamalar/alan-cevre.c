#include <stdio.h>

int main()
{
    float boy, en, cevre, alan;

    printf("Dikdortgen uzunlugunu giriniz: ");
    scanf("%f", &boy);
    printf("Dikdortgen genisligini giriniz: ");
    scanf("%f", &en);

    cevre = 2 * (boy + en);

    alan = boy * en;

    printf("Alan = %f birim kare\nCevre = %f birim", alan, cevre);
}