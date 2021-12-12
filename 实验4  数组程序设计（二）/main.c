#include "stdio.h"
#include "string.h"
#define N 21
void prt(){
    printf("计算2042-2001451125-梁之栋\n" );
    printf("-----------------------------------------\n");
    printf("                                         \n");
}
void statistics(){
    char a[] ="abcdefg",b[10]="abcdefg";
    printf("%d    %d\n",sizeof(a), sizeof(b));
    printf("%d    %d\n", strlen(a), strlen(b));
}

 /*
 * sizeof()函数 计算 '/0'    strlen()函数  不计算'/0'
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
        printf("请输入第%d行的元素\n", i + 1);
        for (int j = 0; j < 4; j++) {
            scanf("%d", &array[i][j]);
            if(i ==j)
                result1 += array[i][j];
            else if(i + j == 3 && i!=j)
                result2 += array[i][j];
        }
    }
    sum = result1 + result1;
    printf("一个二维数组a[4][4]的对角线之和是：%d",sum);
}
void biggest(){
    int array[N];
    printf("请分别输入一维数组的10个元素：\n");
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
    printf("一维数组的最大值为：%d\n",max);
    printf("其下标为：\n");
    for (int i = 0; i < N; i++) {
        if (max == array[i])
            printf("%d\t",i);
    }
}
/*
 * 将一个数组中的值按逆序重新存放（数组元素个数不超过100）
 * ，例如，原来顺序为：8，6，5，4，1。要求改为：1，4，5，6，8。
 * 提示：a[0]和a[n-1]交换， a[1]和a[n-1-1]交换….
 * */
void reverse() {
    int a[N];
    int i = 0;
    printf("请输入数组中的元素（提示数组中一共有%d个元素）：\n", N);
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
    printf("数组中的值按逆序重新存放后新的数组为：\n");
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
//在一个字符数组中查找一个指定的字符，若数组中含有该字符则输出该字符在数组中第一次出现的位置（下标值）；否则输出-1。
void search(){
    char string[N];
    printf("请输入一串字符\n");
    gets(string);
    printf("您输入的字符串是：%s\t\n",string);
    printf("请输入您要查找的字符:");
    char target[1];
    scanf("%c",&target[1]);
    int i;
    int count =0;
    for (int i = 1; i < strlen(string); i++) {
        if (string[i] == target[1]){
            printf("要查找的字符在原数组中第一次出现的位置（下标值）为：%d\n", i);
            count++;
            if(count == 1)
                break;
        }
        else if (i == strlen(string)-1)
            printf("-1 (没有找到您输入的字符)");
        }
}
void main(){
    prt();
    search();
}