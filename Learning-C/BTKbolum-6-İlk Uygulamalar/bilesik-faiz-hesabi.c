#include <stdio.h>
#include <math.h>
int main()
{
    float ana_para, zaman, faiz_orani, basit_faiz_miktari, bilesik_faiz_miktari;

    printf("Ana parayi giriniz: ");
    scanf("%f", &ana_para);

    printf("Zamani giriniz: ");
    scanf("%f", &zaman);

    printf("Faiz oranini giriniz: ");
    scanf("%f", &faiz_orani);

    basit_faiz_miktari = (ana_para * zaman * faiz_orani) / 100;
    printf("Basit faiz miktari: %f\n", basit_faiz_miktari);

    bilesik_faiz_miktari = ana_para * (pow((1 + faiz_orani / 100), zaman));
    printf("Bilesik faiz miktari: %f", bilesik_faiz_miktari);

    return 0;
}