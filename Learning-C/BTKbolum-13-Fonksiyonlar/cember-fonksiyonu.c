#include <stdio.h>
#include <math.h>

float cemberAlani(float yaricap);
float cemberCevresi(float yaricap);
int main()
{

    float yaricap;
    printf("Yaricapi giriniz: ");
    scanf("%f", &yaricap);
    float alan = cemberAlani(yaricap);
    float cevre = cemberCevresi(yaricap);

    printf("%.3f yaricapli dairenin alani %.3f, cevresi %.3f", yaricap, alan, cevre);
}

float cemberAlani(float yaricap){
    float alan = pow(yaricap,2) * M_PI;
    return alan;
}

float cemberCevresi(float yaricap){
    float cevre = 2 * M_PI * yaricap;
    return cevre;
}
