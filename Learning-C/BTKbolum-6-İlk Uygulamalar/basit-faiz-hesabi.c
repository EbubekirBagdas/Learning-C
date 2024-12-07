#include <stdio.h>

int main()
{
    float ana_para, zaman, faiz_orani, faiz_miktari;

    printf("Ana para miktarini giriniz: ");
    scanf("%f", &ana_para);

    printf("Zamani giriniz: ");
    scanf("%f", &zaman);

    printf("Faiz oranini girini: ");
    scanf("%f", &faiz_orani);

    faiz_miktari = (ana_para * zaman * faiz_orani) / 100;

    printf("Basit faiz hesabi ile hesaplanan faiz mikteri = %f", faiz_miktari);
}