#include <stdio.h>

int main()
{
    int sayi;
    printf("Lutfen bir sayi giriniz: ");
    scanf("%d", &sayi);

    if (sayi > 0)
    {
        printf("Sayi pozitiftir");
    }
    if(sayi < 0){
        printf("Sayi negatiftir");
    }
    if(sayi == 0){
        printf("Sayi sifirdir");
    }

    return 0;
}