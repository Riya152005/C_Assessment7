#include<stdio.h>
void disp_prime_digit_count()
{
    int n, digit, count=0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(;n > 0;)
    {
        digit = n % 10;
        if(digit==2 || digit==3 || digit==5 || digit==7)
        {
            count = count + 1;
        }
        n = n / 10;
    }
    printf("Total prime digits = %d", count);
}
int main()
{
    disp_prime_digit_count();
}
