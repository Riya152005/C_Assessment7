#include<stdio.h>
void check_prime()
{
    int n, i, count=0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        if(n % i == 0)
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
    check_prime();
}
