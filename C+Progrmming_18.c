#include<stdio.h>
void check_last2digit_prime()
{
    int n, x, i, count=0;
    printf("Enter a number: ");
    scanf("%d", &n);
    x = n % 100;
    for(i=1; i<=x; i++)
    {
        if(x % i == 0)
        {
            count = count + 1;
        }
    }
    if(count == 2)
    {
        printf("Prime");
    }
    else
    {
        printf("Not Prime");
    }
}
int main()
{
    check_last2digit_prime();
}
