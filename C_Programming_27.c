#include<stdio.h>
void disp_count()
{
    int i, n, digit, sum, count=0;
    for(i=1; i<100000; i++)
    {
        n = i;
        sum = 0;
        for(;n > 0;)
        {
            digit = n % 10;
            sum = sum + digit;
            n = n / 10;
        }
        if(sum == 14)
        {
            count = count + 1;
        }
    }
    printf("%d", count);
}
int main()
{
    disp_count();
}
