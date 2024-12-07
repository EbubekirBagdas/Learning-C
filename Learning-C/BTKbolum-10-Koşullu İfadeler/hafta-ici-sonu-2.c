#include <stdio.h>
int main()
{
    int gun;

    printf("Haftanin kacinci gunu: ");
    scanf("%d", &gun);

    switch (gun)
    {
    case 1:
    case 2:
    case 3:
    case 5:
        printf("Hafta ici");
        break;

    case 6:
    case 7:
        printf("Hafta sonu");
        break;

    default:
        printf("Gecersiz deger");
        break;
    }

    return 0;
}