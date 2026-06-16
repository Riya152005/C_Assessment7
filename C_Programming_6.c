#include<stdio.h>
void disp_2d_odd()
{
    int i;
    for(i=10; i<=20; i++)
    {
        if(i % 2 != 0)
        {
            printf("%d\n", i);
        }
    }
}
int main()
{
    disp_2d_odd();
}
