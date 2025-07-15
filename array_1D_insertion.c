#include<stdio.h>
int main()
{
    int n;
    printf("enter the size of array :\n");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements :");
    for (int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("1D array elements :");
    for (int i=0;i<n;i++)
    {
       printf("%d ",a[i]);
    }
    int pos,new_value;

    printf("\nenter the position for new element of array :");
    scanf("%d",&pos);

    printf("enter new element of array :");
    scanf("%d",&new_value);
    
    for(int i=n-1;i>=pos-1;i--)
    {
        a[i+1]=a[i];
        a[pos-1]=new_value;
    }

     printf("new 1D array elements :");
    for (int i=0;i<=n;i++)
    {
       printf("%d ",a[i]);
    }

    return 0;
}