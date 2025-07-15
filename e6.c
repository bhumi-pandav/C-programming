#include<stdio.h>
int main()
{
    int c,d,e;
    printf("\nentr the value for c location :");
    scanf("%d",&c);
    printf("entr the value for d location :");
    scanf("%d",&d);
    e=c;
    c=d;
    d=e;
    printf("\n after inter-change values :\n");
    printf("\n now in location c the value is %d",c);
    printf("\n now in location d the value is %d \n\n",d);
    return 0;
}