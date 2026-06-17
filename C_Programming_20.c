#include<stdio.h>
void disp_prime_count()
{
    int count=0, i;
    for(i=1; i<=9; i++)
    {
        if(i==2 || i==3 || i==5 || i==7)
        {
            count = count + 1;
        }
    }
    printf("%d", count);
}
int main()
{
    disp_prime_count();
}
