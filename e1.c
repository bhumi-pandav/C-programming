#include<stdio.h>
int main()
{
    int n,num;
    printf("enter the five digit number :");
    scanf("%d",&n);
     int sum=0;
     while (num > 0)
     {
     num=n%10;
     sum=sum+num;
     n=n/10;
     }
     printf("the sum is %d \n",sum);
    return 0;
}