#include<stdio.h>
int romanise(int,int,char);
int main()
{
    int year;
    printf("\n enter year :");
    scanf("%d",&year);
    year=romanise(year,1000,'m');
    year=romanise(year,500,'d');
    year=romanise(year,100,'c');
    year=romanise(year,50,'l');
    year=romanise(year,10,'x');
    year=romanise(year,5,'v');
    year=romanise(year,1,'i');
    return 0;
}
int romanise(int y,int k,char ch)
{
    int i,j;
    j=y/k;
    for(i=1;i<=j;i++)
    {
        printf("%c",ch);
    }
    return(y%k);
}