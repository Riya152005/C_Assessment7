#include<stdio.h>
void disp_biggest_4digit()
{
    int i;
    for(i=9999; i>=1000; i--)
    {
        if(i%7==0 && i%9==0)
        {
            printf("%d", i);
            break;
        }
    }
}
int main()
{
    disp_biggest_4digit();
}
