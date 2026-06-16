#include<stdio.h>
void disp_2d_even_sum6()
{
    int i,x,y,z;
    for(i=1; i<=100; i++)
    {
        x=i/10;
        y=i%10;
        z=x+y;
        if((i % 2 == 0) && (z == 6))
        {
            printf("%d\n", i);
        }
    }
}
int main()
{
    disp_2d_even_sum6();
}
