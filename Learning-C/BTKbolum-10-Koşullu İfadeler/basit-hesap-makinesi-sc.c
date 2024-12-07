#include <stdio.h>

int main()
{
    char islem;
    float sayi1, sayi2, sonuc = 0;

    printf("BASIT HESAP MAKINESI UYGULAMASI\n");
    printf("-------------------------------\n");
    printf("Lutfen [sayi1] [+ - * /] [sayi2] giriniz: ");

    scanf("%f%c%f", &sayi1, &islem, &sayi2);

    switch (islem)
    {
    case '+':
        sonuc = sayi1 + sayi2;
        break;
    case '-':
        sonuc = sayi1 - sayi2;
        break;
    case '*':
        sonuc = sayi1 * sayi2;
        break;
    case '/':
        if(sayi2 != 0)
            sonuc = sayi1 / sayi2;
        else{
            printf("Bolen 0 olamaz");
            return 0;
        }
        break;
    default:
        printf("Gecersiz islem");
        return 0;
        break;
    }

    printf("%.2f %c %.2f = %.2f", sayi1, islem, sayi2, sonuc);
    return 0;
}