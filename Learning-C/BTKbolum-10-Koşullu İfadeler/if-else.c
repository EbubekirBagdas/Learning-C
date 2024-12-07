#include <stdio.h>

int main()
{
    int sayi;

    printf("Sayi giriniz: ");
    scanf("%d", &sayi);

    if (sayi > 0){
        printf("Sayi pozitiftir");
    }
    else if(sayi < 0){
        printf("Sayi negatiftir");
    }
    else{
        printf("Sayi sifirdir");
    }
}