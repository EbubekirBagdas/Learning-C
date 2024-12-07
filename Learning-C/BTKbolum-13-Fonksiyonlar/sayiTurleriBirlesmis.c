#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool isPerfect(int num);
bool isArmstrong(int num);
bool isEven(int num);
bool isPrime(int num);

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if(isEven(num))
        printf("%d is an even number.", num);

    else
        printf("%d is an odd number.", num);

    if(isPerfect(num))
        printf("%d is a perfect number.", num);

    if(isPrime(num))
        printf("%d is a prime number.", num);

    if(isArmstrong(num))
        printf("%d is an Armstrong number.", num);
}

bool isPerfect(int num){
    int i, sum = 0;

    for(i = 1; i < num; i++){
        if(num % i == 0){
            sum += i;
        }
    }
    if(sum == num)
        return true;
    else
        return false;


}

bool isArmstrong(int num){
    int sum = 0, lastDigit, newNum = num,
    n = (int)(log10(num)) + 1;
    while(newNum > 0){
        lastDigit = newNum %10;
        sum += (round)(pow(lastDigit, n));
        newNum /= 10;
    }

    if(sum == num)
        return true;
    else
        return false;



}

bool isEven(int num){
    return (num % 2 == 0);
}

bool isPrime(int num){
    int i;

    for(i = 2; i <= num / 2; i++){
        if(num % i == 0)
            return false;
    }

    return true;
}
