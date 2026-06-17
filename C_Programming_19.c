#include<stdio.h>
void check_mid2digit_prime()
{
    int n, mid, i, count=0;
    printf("Enter a 4 digit number: ");
    scanf("%d", &n);
    mid = (n / 10) % 100;
    for(i=1; i<=mid; i++)
    {
        if(mid % i == 0)
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
    check_mid2digit_prime();
}
