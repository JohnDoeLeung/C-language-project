#include "stdio.h"
void prt(){
    printf("����2042-2001451125-��֮��\n" );
    printf("-----------------------------------------\n");
    printf("                                         \n");
}
void studentGrade(){
    float a,b,c,sum,aver;

        printf("��ֱ�����ѧ���������γ̳ɼ������ö��Ÿ�����\n");
        scanf("%f,%f,%f",&a,&b,&c);
        sum = a + b +c;
        aver = sum/3;
        printf("��ѧ�����ܳɼ�Ϊ��%.2f\n",sum);
        printf("��ѧ����ƽ���ɼ�Ϊ��%.2f\n",aver);
    }
void entry(){
    int a,b,c,d,e,sum;
    printf("������һ������4λ��������\n");
    scanf("%d",&a);
    b = a/1000;
    c = (a-b*1000)/100;
    d = (a-b*1000-c*100)/10;
    e = (a-b*1000-c*100-d*10);
    sum = b + c + d + e;
    printf("�����λ���ĸ�λ���ֺ�Ϊ��%d\n", sum);
}
int main(){
    prt();
    entry();
}
/*
 #include "stdio.h"
float summ(float sum,float a,float b,float c) {
    sum = a + b + c;
    return sum;
}
float average(float aver){
    aver = summ(aver/3);
    return aver;
}
void main(){
    printf("����2042-2001451125-��֮��\n" );
    printf("-----------------------------------------\n");
    printf("��ֱ��������ſγ̵ĳɼ�\n");
    scanf("%f,%f,%f",&summ);
}

//
// Created by Liang on 2021/10/22.
//
#include "stdio.h"
int main(){
    printf("����2042-2001451125-��֮��\n" );
    printf("-----------------------------------------\n");
    printf("                                         \n");
    float a,b,c,sum,aver;
    printf("��ֱ�����ѧ���������γ̳ɼ������ö��Ÿ�����\n");
    scanf("%.2f,%.2f,%.2f",&a,&b,&c);
    sum = a + b +c;
    aver = sum/3;
    printf("��ѧ�����ܳɼ�Ϊ��",sum);
    printf("��ѧ����ƽ���ɼ�Ϊ��",aver);
}

 * */
