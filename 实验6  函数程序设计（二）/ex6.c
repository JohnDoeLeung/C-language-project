#include "stdio.h"
int GCD;
void prt(){
    printf("����2042-2001451125-��֮��\n" );
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
    printf("����������������\n");
    scanf("%d%d",&num1,&num2);
    LCM = fMaxMin(num1,num2);
    printf("����%d��%d��\n���Լ���ǣ�%d\n��С�������ǣ�%d",num1,num2,GCD,LCM);
}