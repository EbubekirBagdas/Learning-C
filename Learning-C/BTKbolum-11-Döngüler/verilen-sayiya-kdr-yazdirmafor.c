#include <stdio.h>

int main()
{

    int i, n;
    printf("Ust siniri giriniz: ");
    scanf("%d", &n);

    for(i = 1; i <=n ; i++){
        printf("%d\n", i);
    }

    for (i = n; i >= 1; i--)
    {
        printf("%d\n", i);
    }

    return 0;
}