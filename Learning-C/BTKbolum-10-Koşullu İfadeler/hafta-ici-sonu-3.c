#include <stdio.h>
int main()
{
    int gun;

    printf("Haftanin kacinci gunu: ");
    scanf("%d", &gun);

    switch (gun)
    {
    case (1 || 2 || 3 || 4 || 5):
        printf("Hafta ici");
        break;


    case (6 || 7):
        printf("Hafta sonu");
        break;

    default:
        printf("Gecersiz deger");
        break;
    }

    return 0;
}