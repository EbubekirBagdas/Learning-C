#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr, i, n1, n2;
    printf("Boyut Giriniz: ");
    scanf("%d", &n1);

    ptr = (int*) malloc(n1 * sizeof(int));

    printf("Ayrilan (Tahsis Edilen) Ilk Bellek Adresleri:\n");
    for(i = 0; i < n1; i++){
        printf("%pc\n", ptr + i);
    }

    printf("Yeni Boyut Giriniz: ");
    scanf("%d", &n2);

    ptr = realloc(ptr, n2 * sizeof(int));

    printf("Ayrilan (Tahsis Edilen) Yeni Bellek Adresleri:\n");

    for(i = 0; i < n2; i++){
        printf("%pc\n", ptr + i);
    }

    free(ptr);

    return 0;
}