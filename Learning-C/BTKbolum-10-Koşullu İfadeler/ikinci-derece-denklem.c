#include <stdio.h>
#include <math.h>

int main()
{
    float katsayi1, katsayi2, katsayi3;

    float kok1, kok2, diskriminant, imajiner;

    printf("x^2 katsayisini giriniz: ");
    scanf("%f", &katsayi1);
    printf("x katsayisini giriniz: ");
    scanf("%f", &katsayi2);
    printf("Sabit terimi giriniz: ");
    scanf("%f", &katsayi3);

    diskriminant = pow(katsayi2,2) - (4 * katsayi1 * katsayi3);
    if(katsayi1 != 0){
        if(diskriminant > 0){
            kok1 = (-katsayi2 + sqrt(diskriminant)) / (2 * katsayi1);
            kok2 = (-katsayi2 - sqrt(diskriminant)) / (2 * katsayi1);

            printf("Iki adet ayrik ve gercel kok bulunmaktadir: %.2f ve %.2f", kok1, kok2);
        }

        else if(diskriminant == 0){
            kok1 = kok2 = -katsayi2 / (2 * katsayi1);

            printf("Birbirlerine esit iki adet gercel kok bulunmaktadir: %.2f ve %.2f", kok1, kok2);
        }
        else if(diskriminant < 0){
            kok1 = kok2 = -katsayi2 / (2 * katsayi1);
            imajiner = sqrt(-diskriminant) / (2 * katsayi1);
            printf("Iki adet ayrik ve karmasik kok bulunmaktadir: %.2f + %.2fi ve %.2f - %.2fi", kok1, imajiner, kok2, imajiner);
        }


    }

    else
        printf("Denklemin koku %.2f", -katsayi3/katsayi2);


    return 0;
}