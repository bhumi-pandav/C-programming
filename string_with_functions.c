#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    int l;
     printf("for finding length :");
    printf("\nenter string :");
    scanf("%s",a);
    l=strlen(a);
    printf("the length of string %d",l);
    char b[100];
     printf("\n\nfor joining strings :");
    printf("\n enter second string :");
    scanf("%s",b);
    strcat(a,b);
    printf("\nnew string :%s",a);
    char c[100];
     printf("\n\nfor copy of string :");
    strcpy(c,b);
    printf("\ncopy string :%s",c);
    char str1[100],str2[100];
    int diff=0;
     printf("\n\nfor compares two character strings :");
    printf("\nenter the first string :");
    scanf("%s",str1);
    printf("\nenter the second string :");
    scanf("%s",str2);
    diff=strcmp(str1,str2);
    //printf("diff =%d",diff);
    if(diff==0){
        printf("equal");
    }
    else{
        printf("not equal");
    }
    return 0;
}