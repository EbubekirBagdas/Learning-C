#include <stdio.h>

int main()
{
    int maliyet, satis_bedeli, kar_zarar;

    printf("Maliyet bedelini giriniz: ");
    scanf("%d", &maliyet);

    printf("Satis bedelini giriniz: ");
    scanf("%d", &satis_bedeli);

    if(satis_bedeli > maliyet){
        printf("%d tl kar", satis_bedeli - maliyet);
    }
    else if (maliyet > kar_zarar)
    {
        printf("%d tl zarar", maliyet - satis_bedeli);
    }
    else
    {
        printf("Ne kar ne zarar.");
    }

}