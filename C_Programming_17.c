#include<stdio.h>
void check_prime_and_sum14()
{
    int n, i, count=0;
    int t, digit, sum=0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        if(n % i == 0)
        {
            count = count + 1;
        }
    }
    t = n;
    for(;t > 0;)
    {
        digit = t % 10;
        sum = sum + digit;
        t = t / 10;
    }
    if(count == 2)
    {
        printf("Prime");
    }
    else
    {
        printf("Not Prime");
    }
    if(sum == 14)
    {
        printf(" & sum of digits is 14");
    }
    else
    {
        printf(" & sum of digits is not 14");
    }
}
int main()
{
    check_prime_and_sum14();
}
