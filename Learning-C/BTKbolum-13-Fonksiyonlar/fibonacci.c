#include <stdio.h>
int NinciFibonacciSayisiniHesapla(int n);
int main()
{

    int n1 = 0, n2 = 1;
    printf("Fibonacci dizisinden ilk kac elemanin hesaplanmasini istiyorsunuz: ");
    int adet;
    scanf("%d", &adet);
    int n3,i;

    printf("%d %d ", n1,n2);
    for(i = 2; i < adet; i++){
        n3 = n1 + n2;
        printf("%d ", n3);
        n1 = n2;
        n2 = n3;
    }

    printf("\n%d. fibonacci sayisi %d olur.", adet, NinciFibonacciSayisiniHesapla(adet));
    return 0;
}

int NinciFibonacciSayisiniHesapla(int n){
    if(n==1)
        return 0;
    else if(n==2)
        return 1;
    else
        return NinciFibonacciSayisiniHesapla(n-1)+NinciFibonacciSayisiniHesapla(n-2);
}