#include <stdio.h>
int main()
{
    int gun;

    printf("Haftanin kacinci gunu: ");
    scanf("%d", &gun);

    switch (gun)
    {
    case 1:
        printf("Hafta ici");
        break;

    case 2:
        printf("Hafta ici");
        break;

    case 3:
        printf("Hafta ici");
        break;

    case 4:
        printf("Hafta ici");
        break;

    case 5:
        printf("Hafta ici");
        break;

    case 6:
        printf("Hafta sonu");
        break;

    case 7:
        printf("Hafta sonu");
        break;

    default:
        printf("Gecersiz deger");
        break;
    }

    return 0;
}