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
        printf("��ֱ������%d��ѧ����ѧ�źͳɼ���\n",i+1);
        scanf("%s%d",&record[i].num,&record[i].s);
    }
    fun(record,&min);
    printf("�ɼ���͵�ѧ��\nѧ����:%s\n�ɼ���:%d\n",min.num,min.s);
}
void prt(){
        printf("����2042-2001451125-��֮��\n" );
        printf("-----------------------------------------\n");
        printf("                                         \n");
    }
//����ɼ�ʱ�����ö��Ÿ���