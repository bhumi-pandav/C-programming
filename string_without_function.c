#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    int l=0;
     int i=0,flag,j=0; 
     printf("for finding length :");
    printf("\nenter string :");
    scanf("%s",a);
    for(int i=0;a[i]!='\0';i++)
    {
        l++;
    }
    printf("the length of string %d",l);
    char b1[100];
    char b2[100];
    char b3[100];
    printf("\n\nfor joining strings :");
    printf("\n enter first string :");
    scanf("%s",b1);
    printf("\n enter second string :");
    scanf("%s",b2);
     for(i=0; b1[i]!='\0'; i++) {
        b3[i]=b1[i]; 
     }
     for(int j=0; b2[j]!='\0'; j++) {
        b3[i]=b2[j]; 
        i++; 
     }
     b3[i]='\0';
    printf("\nnew string :%s",b3);
    char c1[100];
    char c2[100];
     printf("\n\nfor copy of string :");
    printf("\nenter string :");
    scanf("%s",c1);
     for(int i=0;c1[i]!='\0';i++)
     {
        c2[i]=c1[i];
     } 
     c2[i]='\0'; 
     printf("\ncopy string :%s",c2);
    char str1[100],str2[100];
     printf("\n\nfor compares two character strings :");
    printf("\nenter the first string :");
    scanf("%s",str1);
    printf("\nenter the second string :");
    scanf("%s",str2);
    for(i=0;str1[i]!='\0'&&str2[i]!='\0';i++)
    {
        if(str1[i]!=str2[i])
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("equal\n");
    }
    else{
        printf("not equal\n");
    }
    return 0;
}