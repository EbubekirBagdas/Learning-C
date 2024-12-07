#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool isPerfect(int num);
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if(isPerfect(num))
        printf("%d is a perfect number.", num);
    else
        printf("%d is not a perfect number.", num);

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