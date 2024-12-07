#include <stdio.h>

int main()
{
    int sayi1, sayi2;

    printf("Lutfen sayi degeri giriniz: ");
    scanf("%d%d", &sayi1, &sayi2);


    if(sayi1 > sayi2){
        printf("%d daha buyuktur", sayi1);
    }
    if(sayi2 > sayi1){
        printf("%d daha buyuktur", sayi2);
    }
    if(sayi1 == sayi2){
        printf("Iki sayi birbirine esittir");
    }

    return 0;

}