#include<stdio.h>
void disp_lcm()
{
    int a, b, i, lcm;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    for(i=1; ; i++)
    {
        if(i%a==0 && i%b==0)
        {
            lcm = i;
            break;
        }
    }
    printf("LCM = %d", lcm);
}
int main()
{
    disp_lcm();
}
