#include <stdio.h>
#include <string.h>
struct PersonelBilgisi {
    int yas;
    float maas;
    char Isim[30];
    char cinsiyet[8];
};

int main()
{
struct PersonelBilgisi Personel1;


strcpy(Personel1.Isim, "Ahmet Ahmetoglu");
strcpy(Personel1.cinsiyet,"Erkek");
Personel1.yas = 34;
Personel1.maas = 8500;

printf("Personel Adi: %s\n", Personel1.Isim);
printf("Personel Cinsiyeti: %s\n", Personel1.cinsiyet);
printf("Personel Yasi: %d\n", Personel1.yas);
printf("Personel Maasi: %f\n", Personel1.maas);

printf("........................................\n");

struct PersonelBilgisi Personel2 = {33, 8800, "Ayse Ayseoglu", "Kadin"};

printf("Personel Adi: %s\n", Personel2.Isim);
printf("Personel Cinsiyeti: %s\n", Personel2.cinsiyet);
printf("Personel Yasi: %d\n", Personel2.yas);
printf("Personel Maasi: %f\n", Personel2.maas);

printf("........................................\n");

struct PersonelBilgisi Personel2Kopyasi;

Personel2Kopyasi = Personel2;

printf("Personel Adi: %s\n", Personel2Kopyasi.Isim);
printf("Personel Cinsiyeti: %s\n", Personel2Kopyasi.cinsiyet);
printf("Personel Yasi: %d\n", Personel2Kopyasi.yas);
printf("Personel Maasi: %f\n", Personel2Kopyasi.maas);

printf("........................................\n");
}