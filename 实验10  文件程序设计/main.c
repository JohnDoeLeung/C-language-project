#include "stdio.h"
#include "stdlib.h"
#define N 5
typedef struct
{
    char sno[20];
    char sname[9];
    char ssex[2];
    int sage;
}Student;
void prt();
void main(){
    prt();
    Student stu[N],ss[N];
    char filename[20];
    printf("��ֱ�����%d��ѧ������Ϣ(ѧ�š��������Ա�����)\n",N);
    for(int i=0;i <N;i++)
    {
        printf("�������%d��ѧ������Ϣ\n",i+1);
        scanf("%s%s%s%d",&stu[i].sno,&stu[i].sname,&stu[i].ssex,&stu[i].sage);
    }
    FILE *fp;
    fp = fopen("StuInformation.dat","wb");
    if(fp ==NULL)
    {
        printf("cannot open this file\n");
        exit(0);
    }
    for (int j = 0; j < N; j++) {
        fwrite(&stu[j], sizeof(Student),1,fp);
    }
    fclose(fp);
    printf("ѧ����Ϣ�Ѿ������ļ�������\n");
    fp = fopen("StuInformation.dat","rb");
    if(fp ==NULL)
    {
        printf("cannot open this file\n");
        exit(0);
    }
    for (int k = 0; k < N; k++) {
        fread(&ss[k], sizeof(Student),1,fp);
    }
    fclose(fp);
    printf("%d��ѧ������Ϣ����\n",N);
    for (int s = 0; s < N; s++) {
        printf("ѧ��:%s\t����:%s\t�Ա�%s\t���䣺%d\t\n",ss[s].sno,ss[s].sname,ss[s].ssex,ss[s].sage);
    }
}
void prt(){
    printf("����2042-2001451125-��֮��\n" );
    printf("-----------------------------------------\n");
    printf("                                         \n");
}
