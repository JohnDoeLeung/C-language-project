#include "stdio.h"
int fmax(int x,int y);
int fmin(int x,int y);
void prt(){
    printf("����2042-2001451125-��֮��\n" );
    printf("-----------------------------------------\n");
    printf("                                         \n");
}
void main(){
    prt();
    int num1,num2,GCD,LCM;
    printf("��ֱ�����������������\n");
    scanf("%d%d",&num1,&num2);
    GCD = fmax(num1,num2);
    LCM = fmin(num1,num2);
    printf("%d��%d��\n���Լ���ǣ�%d\n��С�������ǣ�%d\n",num1,num2,GCD,LCM);
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
