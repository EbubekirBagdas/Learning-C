#include <stdio.h>
#include <stdlib.h>

int main()
{
    int bolunen = 20, bolen = 0, bolum;
    if(bolen == 0){
        fprintf(stderr, "Sifirla Bolme hatasi! Programdan cikiliyor.....\n");
        exit(-1);
    }
    bolum = bolunen / bolen;
    fprintf(stderr, "Bolum (Sonuc): %d\n",bolum);

    exit(0);
}