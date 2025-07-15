#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    int i,j,len;
    printf("enter the string :");
    scanf("%s",a);
    len=strlen(a);
    for(i=0,j=len-1;i<j;i++,j--)
    {
        if(a[i]!=a[j])
        {
            break;
        }
    }
    if(i>=j)
    {
        printf("palindrome\n");
    }
    else
    {
        printf("not palindrome\n");
   }
    return 0;

}