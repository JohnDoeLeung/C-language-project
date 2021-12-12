#include "stdio.h"
#define N 16
void prt();
int total(char *,char *);
void main(){
    prt();
    int count;
    char string[N],target[1];
    char *p,*q;
    p = string;
    q = target;
    printf("请输入一串字符；\n");
    gets(string);
    printf("请输入一个您要统计出现次数的字符：\n");
    scanf("%c",&target[0]);
    printf("您输入的字符串是：\t%s\n",string);
    printf("您输入的要统计出现次数的字符是：\t%c\n",target[0]);
    printf("-----------------------------------------\n");
    count = total(p,q);
    printf("字符 %c 在您输入的字符串 %s 出现的次数是：%d",target[0],string,count);
}
int total(char *x,char *y){
    int count=0;
    while (*x)
    {
        if (*x == *y)
            count++;
        x++;
    }
    return count;
}
void prt(){
    printf("计算2042-2001451125-梁之栋\n" );
    printf("-----------------------------------------\n");
    printf("                                         \n");
}