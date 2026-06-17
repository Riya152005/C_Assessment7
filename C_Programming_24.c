#include<stdio.h>
void disp_2digit_perfect_square_count()
{
    int n, x, count=0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(;n >= 10;)
    {
        x = n % 100;
        if(x==16 || x==25 || x==36 || x==49 || x==64 || x==81)
        {
            count = count + 1;
        }
        n = n / 100;
    }
    printf("Total 2 digit perfect squares = %d", count);
}
int main()
{
    disp_2digit_perfect_square_count();
}
