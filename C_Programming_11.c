#include<stdio.h>
void count_total_digits()
{
    int n, count=0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(;n > 0;)
    {
        count = count + 1;
        n = n / 10;
    }
    printf("Total digits = %d", count);
}
int main()
{
    count_total_digits();
}
