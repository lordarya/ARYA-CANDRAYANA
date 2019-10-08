#include <stdio.h>

void main()
{
    int golongan, waktu;
    float gaji;

    printf("Masukkan Golongan : ");
    scanf("%d", &golongan);
    printf("Masukkan Lama Anda Berkerja (tahun) : ");
    scanf("%d", &waktu);

    if (golongan == 1){
        if (waktu < 5)
            gaji = 4;
        else if (waktu <= 10 )
            gaji = 5;
        else if (waktu <= 20 )
            gaji = 6.50;
        else if (waktu > 20 )
            gaji = 8;
    }
    else if (golongan == 2 ){
        if (waktu < 5)
            gaji = 4.7;
        else if (waktu <= 10 )
            gaji = 6;
        else if (waktu <= 20 )
            gaji = 7.9;
        else if (waktu > 20 )
            gaji = 10.2;
    }
     else if (golongan == 3 ){
        if (waktu < 5)
            gaji = 5.9;
        else if (waktu <= 10 )
            gaji = 7.5;
        else if (waktu <= 20 )
            gaji = 9;
        else if (waktu > 20 )
            gaji = 12.3;
    }

     else if (golongan == 4 ){
        if (waktu < 5)
            gaji = 7;
        else if (waktu <= 10 )
            gaji = 8.8;
        else if (waktu <= 20 )
            gaji = 10.5;
        else if (waktu > 20 )
            gaji = 14;
    }
     else if (golongan == 5 ){
        if (waktu < 5)
            gaji = 8.5;
        else if (waktu <= 10 )
            gaji = 10;
        else if (waktu <= 20 )
            gaji = 12.1;
        else if (waktu > 20 )
            gaji = 16;
    }
    printf("Golongan Anda : %d \nMasa Kerja Anda : %d\nGaji Anda : %.1f juta", golongan,waktu ,gaji);

}
