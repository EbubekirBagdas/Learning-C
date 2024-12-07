#include <stdio.h>

int factoriel(int num);

int main()
{

    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("%d! = %d", num, factoriel(num));
}

int factoriel(int num){
    int f;
    if(num == 1)
        f = 1;
    else
        f = num * factoriel(num-1);
    return f;

}
