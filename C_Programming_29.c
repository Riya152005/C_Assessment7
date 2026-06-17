#include<stdio.h>
void disp_lcm()
{
    int a, b, c, i, lcm;
    printf("Enter three numbers: ");
    scanf("%d%d%d", &a, &b, &c);
    for(i=1; ; i++)
    {
        if(i%a==0 && i%b==0 && i%c==0)
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
