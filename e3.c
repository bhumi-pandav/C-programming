#include<stdio.h>
int main()
{
    int i;
    float w=1189;
    float h=841;

    printf("A0 : %f mm X %f mm \n",w,h);

    for(i=1;i<=8;i++)
    {
        if(w>h)
        {
            w/=2;
        }
        else
        {
            h/=2;
        }
        printf("A%d : %f mm X %f mm \n",i,w,h);
    }
    return 0;
}