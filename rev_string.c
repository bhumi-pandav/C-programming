#include <stdio.h>
int main()
{
char str[100];
char *start = str;
char *end = str;
char temp;
printf("enter string :");
scanf("%s",str);
while (*end != '\0')
{
end ++;
}
end--;
while (start < end)
{
temp = *start;
*start=*end;
*end = temp;

start ++;
end--;
}
printf ("Reversed string : %s \n", str);

return 0;
}