#include <stdio.h>

int main()
{
    int j, i, n, toplam = 0;

    printf("Ust sayi degerini giriniz: ");
    scanf("%d", &n);
    printf("Alt sayi degerini giriniz: ");
    scanf("%d", &i);

    for(j = i; j <= n; j++){
        toplam += j;
    }

    printf("%d ile %d arasindaki dogal sayilarin toplami %d.", i, n, toplam);
    return 0;
}