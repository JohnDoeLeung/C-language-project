#include "stdio.h"
int fmax(int x,int y);
int fmin(int x,int y);
void prt(){
    printf("计算2042-2001451125-梁之栋\n" );
    printf("-----------------------------------------\n");
    printf("                                         \n");
}
void main(){
    prt();
    int num1,num2,GCD,LCM;
    printf("请分别输入两个正整数：\n");
    scanf("%d%d",&num1,&num2);
    GCD = fmax(num1,num2);
    LCM = fmin(num1,num2);
    printf("%d和%d的\n最大公约数是：%d\n最小公倍数是：%d\n",num1,num2,GCD,LCM);
}
int fmax(int x,int y){
    if (x ==y)
        return x;
    while (1){
    if (x > y)
        x -= y;
    else if(y > x)
        y -=x;
    else
        return x;
    }
}
int fmin(int x,int y){
    int past;
    past =(x*y)/fmax(x,y);
    return past;
}
