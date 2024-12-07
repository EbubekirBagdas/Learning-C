#include <stdio.h>

int main()
{
    int i;

    i = 0;
    while(i < 10){
        if(i == 5)
            continue; //Program sonsuz dongude calismaya devam ediyor ama i = 5 kaldigi icin yazdirma yapilmiyor.
        printf("%d\n", i);
        i++;
    }
}