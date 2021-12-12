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
    printf("请分别输入%d名学生的信息(学号、姓名、性别、年龄)\n",N);
    for(int i=0;i <N;i++)
    {
        printf("请输入第%d个学生的信息\n",i+1);
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
    printf("学生信息已经存入文件！！！\n");
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
    printf("%d个学生的信息如下\n",N);
    for (int s = 0; s < N; s++) {
        printf("学号:%s\t姓名:%s\t性别：%s\t年龄：%d\t\n",ss[s].sno,ss[s].sname,ss[s].ssex,ss[s].sage);
    }
}
void prt(){
    printf("计算2042-2001451125-梁之栋\n" );
    printf("-----------------------------------------\n");
    printf("                                         \n");
}
