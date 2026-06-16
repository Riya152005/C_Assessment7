#include<stdio.h>
void disp_reverse()
{
    int n, digit, rev=0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(;n> 0;)
    {
        digit = n % 10;
        rev = rev * 10 + digit;
        n = n / 10;
    }
    printf("Reverse = %d", rev);
}
int main()
{
    disp_reverse();
}
