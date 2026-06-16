#include<stdio.h>
void disp_2d_sum7()
{
    int i, sum=0;
    for(i=70; i<80; i++)
    {
        if(i / 10 == 7)
        {
            sum = sum + i;
        }
    }
    printf("%d", sum);
}
int main()
{
    disp_2d_sum7();
}
