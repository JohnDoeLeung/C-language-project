#include "stdio.h"
#include "string.h"
#define N 21
void prt(){
    printf("����2042-2001451125-��֮��\n" );
    printf("-----------------------------------------\n");
    printf("                                         \n");
}
void statistics(){
    char a[] ="abcdefg",b[10]="abcdefg";
    printf("%d    %d\n",sizeof(a), sizeof(b));
    printf("%d    %d\n", strlen(a), strlen(b));
}

 /*
 * sizeof()���� ���� '/0'    strlen()����  ������'/0'
 * */
void link(){
    char s1[80],s2[40];
    int i = 0,j = 0;
     printf("\nInput the first string:");
     gets(s1);
     printf("\nInput the second string:");
     gets(s2);
     while (s1[i] !='\0')
         i++;
     while(s2[j] !='\0')
         s1[i++] = s2[j++];
     s1[i] = '\0';
     printf("\nNew string:%s",s1);
}
void output(){
    int m[][3]={1,4,7,2,5,8,3,6,9};
    int i,k =2;
    for (i =0;i<3;i++)
        printf("%2d",m[k][i]);
}
void matrix() {
    int array[4][4];
    int i, j,result1,result2,sum=0;
    for (int i = 0; i < 4; i++) {
        printf("�������%d�е�Ԫ��\n", i + 1);
        for (int j = 0; j < 4; j++) {
            scanf("%d", &array[i][j]);
            if(i ==j)
                result1 += array[i][j];
            else if(i + j == 3 && i!=j)
                result2 += array[i][j];
        }
    }
    sum = result1 + result1;
    printf("һ����ά����a[4][4]�ĶԽ���֮���ǣ�%d",sum);
}
void biggest(){
    int array[N];
    printf("��ֱ�����һά�����10��Ԫ�أ�\n");
    int i;
    for ( i = 0; i < N; i++)
        scanf("%d",&array[i]);
    int max;
    max = array[0];
    for (i = 1; i < N;i++)
    {
        if (max < array[i] && max != array[i])
            max = array[i];
    }
    printf("һά��������ֵΪ��%d\n",max);
    printf("���±�Ϊ��\n");
    for (int i = 0; i < N; i++) {
        if (max == array[i])
            printf("%d\t",i);
    }
}
/*
 * ��һ�������е�ֵ���������´�ţ�����Ԫ�ظ���������100��
 * �����磬ԭ��˳��Ϊ��8��6��5��4��1��Ҫ���Ϊ��1��4��5��6��8��
 * ��ʾ��a[0]��a[n-1]������ a[1]��a[n-1-1]������.
 * */
void reverse() {
    int a[N];
    int i = 0;
    printf("�����������е�Ԫ�أ���ʾ������һ����%d��Ԫ�أ���\n", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < N; i++) {
        printf("a[%d]=%d\t\n", i, a[i]);
    }
    int temp;
    for (int i = 0; i < N/2; ++i) {
        temp = a[i];
        a[i] = a[N-1-i];
        a[N-1-i] = temp;
    }
    printf("�����е�ֵ���������´�ź��µ�����Ϊ��\n");
    for (int i = 0; i < N; i++) {
        printf("a[%d]=%d\n", i, a[i]);
    }
}
void YHtriangle(){
    int a[5][5];
    int i,j;
    for(i=0;i<5;i++) {
        a[i][0] = a[i][i] = 1;
        for (int j = 1; j < i; j++)
            a[i][j] = a[i-1][j-1] + a[i-1][j];
    }
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < i+1; j++)
            printf("%4d",a[i][j]);
        printf("\n");
    }
}
//��һ���ַ������в���һ��ָ�����ַ����������к��и��ַ���������ַ��������е�һ�γ��ֵ�λ�ã��±�ֵ�����������-1��
void search(){
    char string[N];
    printf("������һ���ַ�\n");
    gets(string);
    printf("��������ַ����ǣ�%s\t\n",string);
    printf("��������Ҫ���ҵ��ַ�:");
    char target[1];
    scanf("%c",&target[1]);
    int i;
    int count =0;
    for (int i = 1; i < strlen(string); i++) {
        if (string[i] == target[1]){
            printf("Ҫ���ҵ��ַ���ԭ�����е�һ�γ��ֵ�λ�ã��±�ֵ��Ϊ��%d\n", i);
            count++;
            if(count == 1)
                break;
        }
        else if (i == strlen(string)-1)
            printf("-1 (û���ҵ���������ַ�)");
        }
}
void main(){
    prt();
    search();
}