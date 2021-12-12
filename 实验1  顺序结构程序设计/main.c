#include "stdio.h"
void prt(){
    printf("计算2042-2001451125-梁之栋\n" );
    printf("-----------------------------------------\n");
    printf("                                         \n");
}
void studentGrade(){
    float a,b,c,sum,aver;

        printf("请分别输入学生的三名课程成绩：（用逗号隔开）\n");
        scanf("%f,%f,%f",&a,&b,&c);
        sum = a + b +c;
        aver = sum/3;
        printf("该学生的总成绩为：%.2f\n",sum);
        printf("该学生的平均成绩为：%.2f\n",aver);
    }
void entry(){
    int a,b,c,d,e,sum;
    printf("请输入一个任意4位的正整数\n");
    scanf("%d",&a);
    b = a/1000;
    c = (a-b*1000)/100;
    d = (a-b*1000-c*100)/10;
    e = (a-b*1000-c*100-d*10);
    sum = b + c + d + e;
    printf("这个四位数的各位数字和为：%d\n", sum);
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
    printf("计算2042-2001451125-梁之栋\n" );
    printf("-----------------------------------------\n");
    printf("请分别输入三门课程的成绩\n");
    scanf("%f,%f,%f",&summ);
}

//
// Created by Liang on 2021/10/22.
//
#include "stdio.h"
int main(){
    printf("计算2042-2001451125-梁之栋\n" );
    printf("-----------------------------------------\n");
    printf("                                         \n");
    float a,b,c,sum,aver;
    printf("请分别输入学生的三名课程成绩：（用逗号隔开）\n");
    scanf("%.2f,%.2f,%.2f",&a,&b,&c);
    sum = a + b +c;
    aver = sum/3;
    printf("该学生的总成绩为：",sum);
    printf("该学生的平均成绩为：",aver);
}

 * */
