#include <stdio.h>

int main()
{

    int i, n;

    printf("Ust sinir degerini giriniz: ");
    scanf("%d", &n);

    printf("1'den %d sayisina kadar olan cift sayilar:\n", n);
    for(i = 1; i <= n; i++){
        if(i % 2 == 0)
            printf("%d\n", i);

    }
}