#include <stdio.h>

int main()
{

    int myArr[10] = {25,50,75,100};
    myArr[0] = 33;
    int i;
    for(i = 0; i < 15; i++){
        printf("%d\n",myArr[i]);
    }
    return 0;

}