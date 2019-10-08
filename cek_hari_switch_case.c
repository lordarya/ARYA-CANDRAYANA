#include <stdio.h>

void main()
{
    int angka;

    printf("Masukan Nomor Hari (1-7):");
    scanf("%d", &angka);

    switch(angka)
    {
        case 1 : printf("Senin"); break;
        case 2 : printf("Selasa"); break;
        case 3 : printf("Rabu"); break;
        case 4 : printf("Kamis"); break;
        case 5 : printf("Jumat"); break;
        case 6 : printf("Sabtu"); break;
        case 7 : printf("Minggu"); break;
        default : printf("Diluar Jangkauan");
    }
}
