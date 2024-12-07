#include <stdio.h>
#include <stdlib.h>


int main()
{
    int eklenecek_sayi, eklenecek_index;
    int myArr[] = {3,6,2,4,8,7,5,1};
    int boyut = sizeof(myArr) / sizeof(myArr[0]);
    int i;
    for(i = 0; i < boyut; i++)
        printf("%d ", myArr[i]);

    printf("\nDiziye eklenecek sayiyi giriniz: ");
    scanf("%d", &eklenecek_sayi);
    printf("\nSayinin eklenecegi indeksi giriniz: ");
    scanf("%d", &eklenecek_index);
    int newArr[boyut + 1];
    for(i = 0; i < boyut + 1; i++){
        if(i < eklenecek_index){
            newArr[i] = myArr[i];
        }
        else if(i > eklenecek_index){
            newArr[i] = myArr[i-1];
        }
        else{
            newArr[i] = eklenecek_sayi;
        }

    }


    for(i = 0; i < boyut + 1; i++)
        printf("%d ", newArr[i]);

    free(newArr);
    return 0;



}