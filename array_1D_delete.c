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
    
    for(int i=pos-1;i<n;i++)
    {
        a[i]=a[i+1];
    }

     printf("new 1D array elements :");
    for (int i=0;i<n-1;i++)
    {
       printf("%d ",a[i]);
    }

    return 0;
}