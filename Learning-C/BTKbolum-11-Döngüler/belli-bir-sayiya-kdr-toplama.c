#include <stdio.h>

int main()
{
    int i, n, toplam = 0;

    printf("Ust sayi degerini giriniz: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        toplam += i;
    }

    printf("Ilk %d adet dogal sayinin toplami %d.", n, toplam);
    return 0;
}