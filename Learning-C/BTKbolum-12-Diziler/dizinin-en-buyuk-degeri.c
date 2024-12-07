#include <stdio.h>

int main()
{

    int myArr[5];
    int i;
    printf("5 tane sayi yaziniz: ");
    int boyut = sizeof(myArr) / sizeof(myArr[0]);
    for(i = 0; i < boyut; i++){
        scanf("%d", &myArr[i]);
    }
    int enBuyuk = 0;
    int konum = 0;
    for(i = 0; i < boyut; i++){
        if(enBuyuk < myArr[i]){
            enBuyuk = myArr[i];
            konum = i;
        }

    }
    printf("Dizinin en buyuk elemani, %d indeksli konumda bulunan %d degeridir.\n", konum, enBuyuk);

}