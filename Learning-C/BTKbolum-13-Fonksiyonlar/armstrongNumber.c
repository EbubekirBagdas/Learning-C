#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool isArmstrong(int num);

int main()
{

    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if(isArmstrong(num))
        printf("%d is an Armstrong number.", num);
    else
        printf("%d is not an Armstrong number.", num);

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