#include<stdio.h>
int f(int);
int main()
{
    int n;
    int fact;
    printf("\n enter the number :");
    scanf("%d",&n);
    fact=f(n);
    printf("factorial of %d =%d \n",n,fact);
    return 0;    
}
int f(int n)
{
    int i;
    int fact=1;
    for(i=1;i<=n;i++)
    {
        fact*=i;
    }
    return(fact);
}