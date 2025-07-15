#include<stdio.h>
int main()
{
    int amount,nohun,nofifty,noten,nofive,notwo,noone,total;
    printf("enter the amount :");
    scanf("%d",&amount);
    nohun=amount/100;
    amount%=100;
    nofifty=amount/50;
    amount%=50;
    noten=amount/10;
    amount%=10;
    nofive=amount/5;
    amount%=5;
    notwo=amount/2;
    amount%=2;
    noone=amount/1;
    amount%=1;
    total=nohun+nofifty+noten+nofive+notwo+noone;
    printf("smallest number of notes = %d \n",total);
    return 0;
}