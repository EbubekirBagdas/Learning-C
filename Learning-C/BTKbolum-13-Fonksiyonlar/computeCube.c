#include <stdio.h>
#include <math.h>

float compueCube(float num);

int main()
{

    float num;
    printf("Ente a number: ");
    scanf("%f", &num);

    float numsCube = compueCube(num);

    printf("%.3f's cube is %.3f", num, numsCube);
}

float compueCube(float num){
    return pow(num,3);
}
