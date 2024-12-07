#include <stdio.h>
#include <stdlib.h>

#define BUYUK_SAYI 1000000

int BelirliIslemlerGerceklestir(int girdi){
    return(girdi < BUYUK_SAYI);
    //return (girdi < BASKA_BIR_BUYUK_SAYI)// Bu satir hata verecektir

}
int main()
{

    int ilk_degisken = 20;
    int ikinci_degisken = 25;
    int sonuc1, sonuc2, sonuc3;
    const int BASKA_BIR_BUYUK_SAYI = 1000000;

    printf("Buyuk sayi: %d\n", BUYUK_SAYI);

    sonuc1 = (ilk_degisken < BUYUK_SAYI);
    printf("Sonuc1: %d\n", sonuc1);

    sonuc2 = (ikinci_degisken < BUYUK_SAYI);
    printf("Sonuc2: %d\n", sonuc2);

    #undef BUYUK_SAYI
    #define BUYUK_SAYI 300000000
    printf("Buyuk sayi: %d\n", BUYUK_SAYI);

    sonuc3 = BelirliIslemlerGerceklestir(30);
    printf("Sonuc3: %d\n", sonuc3);

}