#include <stdio.h>

int main()
{
    int i, n, toplam = 0;
    printf("Ust sinir degerini giriniz: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        if(i % 2 == 0){
            toplam += i;
        }
    }
    printf("Ilk %d adet dogal sayinin toplami %d.", n, toplam);

    toplam = 0;
    for(i = 0; i <= n; i = i + 2){
            toplam += i;
    }

    printf("Ilk %d adet dogal sayinin toplami %d.", n, toplam);
    return 0;
}