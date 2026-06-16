#include<stdio.h>
void disp_interchange()
{
    int n, t, first, last, p=1, middle;
    printf("Enter a number: ");
    scanf("%d", &n);
    last = n % 10;
    t = n;
    for(;t >= 10;)
    {
        p = p * 10;
        t = t / 10;
    }
    first = t;
    middle = (n % p) / 10;
    printf("%d", last * p + middle * 10 + first);
}
int main()
{
    disp_interchange();
}
