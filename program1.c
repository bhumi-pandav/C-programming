#include<stdio.h>
int main()
{
    float cp,sp,p,l;
    printf("\n enter the cost price and selling price :");
    scanf("%f %f",&cp,&sp);
    p=sp-cp;
    l=cp-sp;
    if(p>0)
    {
        printf("profit of Rs.%f \n",p);
    }
    if(l>0)
    {
        printf("loss of Rs.%f \n",l);
    }
    if(p==0)
    {
        printf("\n no profit or loss\n");
    }
    return 0;
}