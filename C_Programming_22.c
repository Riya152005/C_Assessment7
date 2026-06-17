#include<stdio.h>
void disp_2digit_count()
{
    int n, count=0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(;n >= 10;)
    {
        count = count + 1;
        n = n / 100;
    }
    printf("Total 2 digit numbers = %d", count);
}
int main()
{
    disp_2digit_count();
}
