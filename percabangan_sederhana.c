#include <stdio.h>

void main()
{
    int bill;

    printf("Masukan bill : ");
    scanf ("%d", &bill);

    if (bill > 0){
        printf("%d Bilangan Positif", bill);
    }
    else if (bill < 0 ){
        printf("%d Bilangan Negatif", bill);
    }
    else {
        printf("%d Nol", bill);
    }
}
