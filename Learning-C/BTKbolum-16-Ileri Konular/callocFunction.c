#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, *ptr, sum=0;

    printf("Toplanacak eleman sayisi: ");
    scanf("%d", &n);

    ptr = (int*) calloc(n, sizeof(int));

    if(ptr == NULL){
        printf("Hata! Bellek ayirma islemi basarisiz oldu.");
        exit(0);
    }

    printf("Ayrilan (Tahsis Edilen) Ilk Bellek Adresleri:\n");
    for(i = 0; i < n; i++){
        printf("%pc\n", ptr + i);
    }

    printf("Toplanacak elemanlari giriniz: ");
    for(i = 0; i < n; i++){
        scanf("%d", ptr + 1);
        sum += *(ptr + 1);
    }

    printf("Sum = %d", sum);


    free(ptr);

    return 0;
}