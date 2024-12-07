#include <stdio.h>

void ornek(int *a, int *b, int *restrict c, volatile int *d) {
    *a += *c;
    /*
    c restrict olduğu için, derleyici c değerini tekrar yüklemeyecek.
    Böylece daha optimize bir şekilde çalışacak.
    */
    *b += *c;

    /*
    d volatile olarak tanımlandığı için, derleyici her okuma
    yaptığında değeri bellekteki d'den tekrar yükleyecek.
    Bu, d'nin dış bir kaynak (örneğin bir donanım sensörü)
    tarafından değiştirilmesi durumunda gereklidir.
    */
    *a += *d;
    *b += *d;
}

int main() {
    int x = 5;
    int y = 10;
    int z = 20;
    volatile int sensor = 30; // Değeri dışarıdan değişebilecek bir sensör değeri

    ornek(&x, &y, &z, &sensor);

    printf("x = %d\n", x); // x'in yeni değeri
    printf("y = %d\n", y); // y'nin yeni değeri
    printf("z = %d\n", z); // z'nin değeri aynı kalır
    printf("sensor = %d\n", sensor); // sensor değeri değişmiş olabilir (örneğin bir donanım güncellemesiyle)

    return 0;
}
