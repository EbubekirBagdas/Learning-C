#include <stdio.h>

int a = 20;

int BaziIslemlerGerceklestirir(int a, int b){
    printf("a degiskeninin BaziIslemlerGerceklestirir() icerisindeki degeri = %d\n", a);
    printf("b degiskeninin BaziIslemlerGerceklestirir() icerisindeki degeri = %d\n", b);

    a *= 12;
    b += 5;

    printf("a degiskeninin BaziIslemlerGerceklestirir() icerisindeki degeri = %d\n", a);
    printf("b degiskeninin BaziIslemlerGerceklestirir() icerisindeki degeri = %d\n", b);

    return a + b;
}
int main()
{

    int a = 10;
    int b = 20;
    int c = 0;

    printf("a degiskeninin main() icerisindeki degeri = %d\n", a);
    printf("b degiskeninin main() icerisindeki degeri = %d\n", b);
    c = BaziIslemlerGerceklestirir(a, b);
    printf("c degiskeninin main() icerisindeki degeri = %d\n", c);

    printf("a degiskeninin main() icerisindeki degeri = %d\n", a);
    printf("b degiskeninin main() icerisindeki degeri = %d\n", b);

    return 0;
}