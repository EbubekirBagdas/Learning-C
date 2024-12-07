#include <stdio.h>
#include <math.h>
#include <stdbool.h>
int main()
{
    float a, b, c;

    float x1, x2, diskriminant, imajiner;
    int sc;
    printf("a(x^2) + bx + c = 0 olacak sekilde katsayilari giriniz: ");
    scanf("%f%f%f",&a,&b,&c);

    diskriminant = pow(b,2) - (4 * a * c);


    if (diskriminant > 0) {
        sc = 1;  // Pozitif diskriminant: 1
    }
    else if (diskriminant == 0) {
        sc = 0;  // Sıfır diskriminant: 0
    }
    else {
        sc = -1; // Negatif diskriminant: -1
    }


    switch (sc)
    {
    case -1:
        x1 = x2 = -b / (2 * a);
        imajiner = sqrt(-diskriminant) / (2 * a);
        printf("Iki adet ayrik ve karmasik kok bulunmaktadir: %.2f + %.2fi ve %.2f - %.2fi", x1, imajiner, x2, imajiner);

        break;
    case 0:
        x1 = x2 = -b / (2 * a);
        printf("Birbirlerine esit iki adet gercel kok bulunmaktadir: %.2f ve %.2f", x1, x2);

        break;
    case 1:
        x1 = (-b + sqrt(diskriminant)) / (2 * a);
        x2 = (-b - sqrt(diskriminant)) / (2 * a);

        printf("Iki adet ayrik ve gercel kok bulunmaktadir: %.2f ve %.2f", x1, x2);
        break;

    default:
        break;
    }

    return 0;
}