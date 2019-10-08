#include <stdio.h>

void main()
{
    float berat, tinggi, umur, BMR, kalori, coklat;
    char jenis, program;

    printf("\n================Data Diri===================\n");
    printf("Masukkan Jenis Kelamin (P/L)   : ");
    scanf("%c", &jenis);
    printf("Masukkan berat badan (kg)      : ");
    scanf("%f", &berat);
    printf("Masukkan Tinggi Badan (cm)     : ");
    scanf("%f", &tinggi);
    printf("Masukkan Umur dalam tahun      : ");
    scanf("%f", &umur);
    scanf("%c", &program);
    printf("\n================Program Diet================");
    printf("\nProgram yang anda ingin (N/T/S): ");
    scanf("%c", &program);

    jenis = toupper(jenis);
    program = toupper(program);

    berat = berat * 0.39;
    tinggi = tinggi * 2.20;

    if (jenis == 'P' ){
        BMR = 655 + (4.1 * berat) + (4.7 * tinggi) - (4.7 * umur);
        if (program == 'N'){
            kalori = BMR+600;
            coklat = kalori/230;
            printf("BMR anda adalah : %.2f \nCoklat yang anda butuhkan jika ingin berat badan naik  %.1f coklat", BMR, coklat);
        }
        else if (program == 'T') {
            kalori = BMR-200;
            coklat = kalori/230;
            printf("BMR anda adalah : %.2f \nCoklat yang anda butuhkan jika ingin berat badan turun %.1f coklat", BMR, coklat);
        }
        else if (program == 'T') {
            kalori = BMR;
            coklat = kalori/230;
            printf("BMR anda adalah : %.2f \nCoklat yang anda butuhkan jika ingin berat badan anda tetap %.1f coklat", BMR, coklat);
        }
    }
    else if (jenis = 'L'){
        BMR = 66 + (6.3 * berat) + (12.9 * tinggi) - (6.8 * umur);
        if (program == 'N'){
            kalori = BMR+600;
            coklat = kalori/230;
            printf("BMR anda adalah : %.2f \nCoklat yang anda butuhkan jika ingin berat badan naik  %.1f coklat", BMR, coklat);
        }
        else if (program == 'T') {
            kalori = BMR-200;
            coklat = kalori/230;
            printf("BMR anda adalah : %.2f \nCoklat yang anda butuhkan jika ingin berat badan turun %.1f coklat", BMR, coklat);
        }
        else if (program == 'T') {
            kalori = BMR;
            coklat = kalori/230;
            printf("BMR anda adalah : %.2f \nCoklat yang anda butuhkan jika ingin berat badan anda tetap %.1f coklat", BMR, coklat);
        }

    }

}
