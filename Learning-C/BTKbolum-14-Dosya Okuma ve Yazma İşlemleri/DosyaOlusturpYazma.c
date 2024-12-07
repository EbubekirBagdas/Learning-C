#include <stdio.h>
#include <stdlib.h>

#define VERI_BOYUTU 1000
int main()
{

    char veri[VERI_BOYUTU];

    FILE * fPtr;

    fPtr = fopen("dosya1.txt", "w+");

    if(fPtr == NULL){

        printf("Dosya Olusturulamadi.");
        exit(EXIT_FAILURE);

    }

    printf("Dosyaya kayded'lecek olan girdiyi al: \n");
    fgets(veri, VERI_BOYUTU, stdin);

    fputs(veri, fPtr);
    fclose(fPtr);

    printf("Dosya basariyla olusturuldu. ");
}