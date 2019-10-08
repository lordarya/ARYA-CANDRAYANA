#include <stdio.h>

void main()
{
    int lama, golongan, berat, biaya;

    printf("Masukkan Lama Pengiriman : ");
    scanf("%d", &lama);
    if (lama <= 3){
        printf("Masukkan Golongan (1/2)  : ");
        scanf("%d", &golongan);
    }
    printf("Masukkan Berat Barang(kg): ");
    scanf("%d", &berat);

    if (lama == 1){
        if (golongan == 1){
            biaya = berat*30000;
        }
        else if (golongan == 2 ){
            biaya = berat*20000;
        }
    }
    else if (lama == 2 || lama == 3){
       if (golongan == 1){
            biaya = berat*30000;
        }
        else if (golongan == 2 ){
            biaya = berat*15000;
        }
    }
    else if (lama > 3){
        biaya = berat*5000;
    }
    else
        printf("input lama salah");

    printf("Biaya Pengiriman %d ", biaya);
}
