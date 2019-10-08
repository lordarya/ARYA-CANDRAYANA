#include <stdio.h>

void main()
{
    int nilai;

    printf("Masukkan Nilai : ");
    scanf("%d", &nilai);

    if (nilai > 100)
    {
        printf("Nilai Lebih Dari 100");
    }
    //else if (nilai >=81 && nilai <=100);
    else if (nilai >=81)
        printf("A");
    else if (nilai >= 76)
        printf("AB");
    else if (nilai >= 65)
        printf("B");
    else if (nilai >= 55)
        printf("BC");
    else if (nilai >= 50)
        printf("C");
    else if (nilai >= 40)
        printf("D");
    else if (nilai >=0 )
        printf("E");
    else
        printf("Nilai Kurang Dari 0");
}
