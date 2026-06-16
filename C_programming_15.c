#include<stdio.h>
void check_last_digit_odd()
{
    int n, t, p=1, first, rest, last;
    printf("Enter a number: ");
    scanf("%d", &n);
    last = n % 10;
    if(last % 2 == 0)
    {
        printf("%d", n);
    }
    else
    {
        t = n;
        for(;t >= 10;)
        {
            p = p * 10;
            t = t / 10;
        }
        first = t;
        rest = n % p;
        first = first - 1;
        printf("%d", first * p + rest);
    }
}
int main()
{
    check_last_digit_odd();
}
