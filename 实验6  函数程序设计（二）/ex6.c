#include "stdio.h"
int GCD;
void prt(){
    printf("计算2042-2001451125-梁之栋\n" );
    printf("-----------------------------------------\n");
    printf("                                         \n");
}
int fMaxMin(int x,int y)
{
    int mid;
    mid = x*y;
    if (x ==y)
        GCD = x;
    while(x*y)
    {
        if(x>y)
            x %=y;
        else if(x < y)
            y %=x;
    }
    if(x > y)
        GCD =x;
    else
        GCD =y;
    mid = mid/GCD;
    return mid;
}
void main(){
    prt();
    int num1,num2,LCM;
    printf("请输入两个整数：\n");
    scanf("%d%d",&num1,&num2);
    LCM = fMaxMin(num1,num2);
    printf("整数%d和%d的\n最大公约数是：%d\n最小公倍数是：%d",num1,num2,GCD,LCM);
}