#include <stdio.h>

int main()
{
    int yil;

    printf("Yil degerini giriniz: ");
    scanf("%d", &yil);

    if(yil % 4 == 0 && yil % 100 != 0)
        printf("%d artik yildir", yil);
    else
        printf("%d artik yil degildir", yil);
}