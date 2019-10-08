#include <stdio.h>


void main()
{
    int n_prak, n_teori;

    printf("Masukkan nilai praktik : ");
    scanf("%d", &n_prak);
    printf("Masukkan nilai Teori   : ");
    scanf("%d", &n_teori);


    if (n_prak > 100 || n_prak < 0 || n_teori > 100 || n_teori < 0 ){
        printf("Nilai Anda Salah");
    }
    else if (n_prak < 70 && n_teori > 60){
        printf("Anda lulus ");
    }
    else {
        printf("Anda tydak lulus");
    }
}
