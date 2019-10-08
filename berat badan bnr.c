#include <stdio.h>
void main()
{
char nama [15];
int t,jk,BI;
printf("nama anda:?"); scanf("%c[15]\n",&nama);
printf("jenis kelamin(0 jika wanita, 1 jika pria)"); scanf("%d[3]\n",&jk);
if (jk==1)
{
BI=t-100;
}
else
{
    BI=t-110;
}
printf("Hai %s, tinggi kamu %d jadi berat ideal badanmu %d \n",nama,t,BI);
}
