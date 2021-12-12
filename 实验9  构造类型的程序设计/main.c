#include "stdio.h"
#define N 5
typedef struct ss
{
    char num [10];
    int s;
}STU;
void fun(STU a[],STU *s) {
    int flag = 0;
    int MinRecord = a[0].s;
    for (int i = 1; i < N; i++) {
        if (a[i].s < MinRecord) {
            MinRecord = a[i].s;
            flag = i;
        }
    }
    *s =a[flag];
}
void main()
{
    void prt();
    prt();
    STU record[N],min;
    for (int i =0; i < N;i++)
    {
        printf("请分别输入第%d名学生的学号和成绩：\n",i+1);
        scanf("%s%d",&record[i].num,&record[i].s);
    }
    fun(record,&min);
    printf("成绩最低的学生\n学号是:%s\n成绩是:%d\n",min.num,min.s);
}
void prt(){
        printf("计算2042-2001451125-梁之栋\n" );
        printf("-----------------------------------------\n");
        printf("                                         \n");
    }
//输入成绩时不能用逗号隔开