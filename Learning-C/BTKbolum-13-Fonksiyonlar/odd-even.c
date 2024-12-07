#include <stdio.h>
#include <stdbool.h>

bool isEven(int num);
int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);



    if(isEven(num))
        printf("%d is an even number.", num);


    else
        printf("%d is an odd number.", num);

}

bool isEven(int num){
    return (num % 2 == 0);
}
