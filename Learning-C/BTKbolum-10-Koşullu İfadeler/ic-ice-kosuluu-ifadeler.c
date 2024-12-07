#include <stdio.h>

int main()
{
    int sayi1, sayi2, sayi3, maximum;

    printf("3 adet sayi giriniz: ");
    scanf("%d%d%d", &sayi1, &sayi2, &sayi3);

    if(sayi1 > sayi2){
        if (sayi1 > sayi3)
        {
            maximum = sayi1;
        }

        else{
            maximum = sayi3;

        }
    }

    else{
        if (sayi2 > sayi3)
        {
            maximum = sayi2;
        }

        else{
            maximum = sayi3;

        }
    }

    printf("En buyuk sayi %d", maximum);
}