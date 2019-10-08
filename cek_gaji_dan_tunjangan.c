#include <stdio.h>


void main()
{
    int gaji_pokok, tunjangan_istri = 0, tunjangan_anak = 0, total_tunjangan_anak =0, total_gaji_kotor =0 , total_gaji_bersih = 0, anak = 0, status = 0, pajak = 0;

    printf("Masukkan gaji pokok anda : ");
    scanf("%d", &gaji_pokok);
    printf("Apakah Anda Sudah Menikah? 1 umtuk sudah dan 0 untuk tidak : ");
    scanf("%d", &status);
    printf("Masukkan Jumlah Anak : ");
    scanf("%d", &anak);

    tunjangan_anak = 0.05*gaji_pokok;

    if (status == 1){
        tunjangan_istri = 0.1*gaji_pokok;
    }
    else if (status == 0){
        tunjangan_istri = 0;
    }
    else{
        printf("\nStatus Yang Dimasukkan Salah");
    }
    if (anak>3){
        total_tunjangan_anak = tunjangan_anak*3;
    }
    else {
        total_tunjangan_anak = anak*tunjangan_anak;
    }

    total_gaji_kotor = gaji_pokok+tunjangan_istri+total_tunjangan_anak;


    if (total_gaji_kotor > 5000000){
        pajak  = 0.1 * total_gaji_kotor;
    }
    else if (total_gaji_kotor >=2000000 && total_gaji_kotor <= 5000000){
        pajak= 0.05 * total_gaji_kotor;
    }
    else {
        pajak = 0;
    }


    total_gaji_bersih = total_gaji_kotor - pajak;



    printf("\nTotal Gaji Kotor Anda : %d", total_gaji_kotor);
    printf("\nPajak : %d\n====================================", pajak);
    printf("\n\nTotal Gaji Bersih Anda : %d", total_gaji_bersih);


    getch();
}

