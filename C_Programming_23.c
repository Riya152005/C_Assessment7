#include<stdio.h>
void disp_perfect_square_count()
{
    int n, digit, count=0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(;n > 0;)
    {
        digit = n % 10;
        if(digit==1 || digit==4 || digit==9)
        {
            count = count + 1;
        }
        n = n / 10;
    }
    printf("Total perfect square digits = %d", count);
}
int main()
{
    disp_perfect_square_count();
}
