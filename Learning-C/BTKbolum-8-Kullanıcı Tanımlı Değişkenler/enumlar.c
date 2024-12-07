#include<stdio.h>

enum Seviyeler1 {
    DUSUK = 12,
    ORTA,
    YUKSEK
};

enum Seviyeler2 {
    DUSUK2,
    ORTA2,
    YUKSEK2
};

enum Seviyeler3 {
    DUSUK3 = 14,
    ORTA3 = 25,
    YUKSEK3 = 25
};

int main()
{
    enum Seviyeler1 seviye11 = DUSUK;

    printf("%d\n", seviye11);

    enum Seviyeler1 seviye12 = ORTA;

    printf("%d\n", seviye12);

    enum Seviyeler1 seviye13 = YUKSEK;

    printf("%d\n", seviye13);

    printf(".....\n");

    enum Seviyeler2 seviye21 = DUSUK2;

    printf("%d\n", seviye21);

    enum Seviyeler2 seviye22 = ORTA2;

    printf("%d\n", seviye22);

    enum Seviyeler2 seviye23 = YUKSEK2;

    printf("%d\n", seviye23);

    printf(".....\n");

    enum Seviyeler3 seviye31 = DUSUK3;

    printf("%d\n", seviye31);

    enum Seviyeler3 seviye32 = ORTA3;

    printf("%d\n", seviye32);

    enum Seviyeler3 seviye33 = YUKSEK3;

    printf("%d\n", seviye33);

}