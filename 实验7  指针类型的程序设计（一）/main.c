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
    printf("������һ���ַ���\n");
    gets(string);
    printf("������һ����Ҫͳ�Ƴ��ִ������ַ���\n");
    scanf("%c",&target[0]);
    printf("��������ַ����ǣ�\t%s\n",string);
    printf("�������Ҫͳ�Ƴ��ִ������ַ��ǣ�\t%c\n",target[0]);
    printf("-----------------------------------------\n");
    count = total(p,q);
    printf("�ַ� %c ����������ַ��� %s ���ֵĴ����ǣ�%d",target[0],string,count);
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
    printf("����2042-2001451125-��֮��\n" );
    printf("-----------------------------------------\n");
    printf("                                         \n");
}