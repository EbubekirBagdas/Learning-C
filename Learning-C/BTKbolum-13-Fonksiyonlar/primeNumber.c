#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool isPrime(int num);

int main()
{

    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if(isPrime(num))
        printf("%d is a prime number.", num);
    else
        printf("%d is not a prime number.", num);

}

bool isPrime(int num){
    int i;

    for(i = 2; i <= num / 2; i++){
        if(num % i == 0)
            return false;
    }

    return true;
}
