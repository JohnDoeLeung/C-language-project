#include "stdio.h"
#include "math.h"
#define N 3
void prt(){
    printf("计算2042-2001451125-梁之栋\n" );
    printf("-----------------------------------------\n");
    printf("                                         \n");
}
void verify1() {
    int k =2;
    if(k++ %2 == 0)
        if(k++ %3 == 0)
            if(k++ %5 ==0)
                printf("%d\n",k);
            else
                printf("%d\n",++k);
            printf("\n");
}
void verify2(){
    int a=0,b=3,c=2;
    switch (a)
    {
        case 0:switch (b == 3) {
                case 1:
                    printf("*");
                    break;
                case 2:
                    printf("%%");
                    break;
                }
                case 1:switch (c) {
                        case 1:
                            printf("&");
                            break;
                        case 2:
                            printf("#");
                        default:
                            printf("$");
                }
    }
}
void verify3(){
    int i,j,x =0;
    for(i=0;i<2;i++)
    {
        x++;
        for(j=0;j<=3;j++)
        {
            if(j%2)continue;
            x++;
        }
        x++;
    }
    printf("x=%d\n",x);
}
void verify4(){
    int a=0,i;
    for(i=1;i<5;i++)
    {
        switch(i)
        {
            case 0:
            case 3: a+=2;
            case 1:
            case 2: a+=3;
            default: a+=5;
        }
    }
    printf("%d\n",a);
}
void compare() {
    int a[N];
    int i,j,k;
    printf("请任意从键盘输入3个整数：\n");
    for(i = 0; i< N; i++)
        scanf("%d",&a[i]);
    for(i = 0; i< N; i++)
        for(j=i+1;j<N;j++)
            if(a[i]<a[j])
            {
                k=a[j];
                a[j]=a[i];
                a[i]=k;
            }
    printf("按由大到小的顺序为：\n");
    for(i = 0;i < N;i++)
        printf("%d\t",a[i]);
}
//（2）给一个不多于5位的正整数，要求：求出它是几位数；按逆序输出各位数字。例如原数是321，应输出123。
void transfer() {
    int a,b=0;
    printf("请给出一个不多于五位的正整数：\n");
    re_enter:
    scanf("%d", &a);
    if (a < 100000 && a > 0) {
        if (a > 10000)
            printf("这个数是五位数\n");
        if (a > 1000 && a < 10000)
            printf("这个数是四位数\n");
        if (a > 100 && a < 1000)
            printf("这个数是三位数\n");
        if (a > 10 && a < 100)
            printf("这个数是两位数\n");
        if (a > 0 && a < 10)
            printf("这个数是一位数\n");
        }
    else {
        printf("您输入的数不符合规则,请重新按照规则输入(给出一个不多于五位的正整数)\n");
        goto re_enter;
    }
    do
    {
        b = b * 10 + a % 10;
        a/=10;
    }
    while (a !=0);
    printf("逆序后的数为：%d\n",b);
    printf("\n");
}

/*3）根据用户输入的三角形的三条边长判定是何三角形（等边、等腰、直角），对有效的三角形求其面积。
提示：当两边之和大于第三边时为有效三角形，若有两边相等为等腰三角形，三边相等为等边三角形，两边平方和等于第三边的平方为直角三角形，否则为普通三角形
;设三边长分别为a，b，c，令s=（a+b+c）/2，面积为sqrt(s*(s-a)*(s-b)*(s-c))。
*/
void triangle(){
    float a,b,c,s,area;
    printf("请分别输入三角形的三边长(用逗号隔开)：\n");
    re_enter:
    scanf("%f,%f,%f",&a,&b,&c);
    if(a>0 && b>0 && c>0 && a+b>c && a+c>b && b+c>a)
    {
        if(a*a+b*b==c*c || a*a+c*c==b*c || b*b+c*c==a*a)
            printf("三角形是直角三角形\n");
        else if(a==b && b==c &&a==c)
            printf("三角形是等边三角形\n");
        else if(a==b || a==c || b==c)
            printf("三角形是等腰三角形\n");
        else
            printf("三角形是普通三角形\n");

        s = (a+b+c)/2;
        area = sqrt(s*(s-a)*(s-b)*(s-c));
        printf("三角形的面积为：%.2f\n",area);
    }
    else
    {
        printf("您输入的三边长不能构成一个有效的三角形，请重新输入：\n");
        goto re_enter;
    }

}
/*（4） 求1000以内的水仙花数。所谓水仙花数：153=13+53+33*/
void narcissistic(){
    int n,i,k,j;
    printf("1000以内的水仙花数有：\n");
    for (n= 100; n <1000; n++ )
    {
        i = n/100;
        j = (n-i*100)/10;
        k = n-i*100-j*10;
        if(n == (i*i*i + k*k*k + j*j*j))
            printf("%d\t",n);
    }
}
//求1-1/2+1/3-1/4+……-1/100的结果
void result(){
    int i,j;
    float sum=0;
    for (i = 1; i <= 100; i++) {
        if (i%2==0)
            j=-1;
        else
            j=1;
        sum =sum + 1.0 / (i * j);
    }
    printf("1-1/2+1/3-1/4+……-1/100的结果为：%f",sum);
}
int main() {
    prt();
    result();
}

