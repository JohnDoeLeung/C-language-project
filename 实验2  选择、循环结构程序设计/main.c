#include "stdio.h"
#include "math.h"
#define N 3
void prt(){
    printf("����2042-2001451125-��֮��\n" );
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
    printf("������Ӽ�������3��������\n");
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
    printf("���ɴ�С��˳��Ϊ��\n");
    for(i = 0;i < N;i++)
        printf("%d\t",a[i]);
}
//��2����һ��������5λ����������Ҫ��������Ǽ�λ���������������λ���֡�����ԭ����321��Ӧ���123��
void transfer() {
    int a,b=0;
    printf("�����һ����������λ����������\n");
    re_enter:
    scanf("%d", &a);
    if (a < 100000 && a > 0) {
        if (a > 10000)
            printf("���������λ��\n");
        if (a > 1000 && a < 10000)
            printf("���������λ��\n");
        if (a > 100 && a < 1000)
            printf("���������λ��\n");
        if (a > 10 && a < 100)
            printf("���������λ��\n");
        if (a > 0 && a < 10)
            printf("�������һλ��\n");
        }
    else {
        printf("��������������Ϲ���,�����°��չ�������(����һ����������λ��������)\n");
        goto re_enter;
    }
    do
    {
        b = b * 10 + a % 10;
        a/=10;
    }
    while (a !=0);
    printf("��������Ϊ��%d\n",b);
    printf("\n");
}

/*3�������û�����������ε������߳��ж��Ǻ������Σ��ȱߡ�������ֱ�ǣ�������Ч�����������������
��ʾ��������֮�ʹ��ڵ�����ʱΪ��Ч�����Σ������������Ϊ���������Σ��������Ϊ�ȱ������Σ�����ƽ���͵��ڵ����ߵ�ƽ��Ϊֱ�������Σ�����Ϊ��ͨ������
;�����߳��ֱ�Ϊa��b��c����s=��a+b+c��/2�����Ϊsqrt(s*(s-a)*(s-b)*(s-c))��
*/
void triangle(){
    float a,b,c,s,area;
    printf("��ֱ����������ε����߳�(�ö��Ÿ���)��\n");
    re_enter:
    scanf("%f,%f,%f",&a,&b,&c);
    if(a>0 && b>0 && c>0 && a+b>c && a+c>b && b+c>a)
    {
        if(a*a+b*b==c*c || a*a+c*c==b*c || b*b+c*c==a*a)
            printf("��������ֱ��������\n");
        else if(a==b && b==c &&a==c)
            printf("�������ǵȱ�������\n");
        else if(a==b || a==c || b==c)
            printf("�������ǵ���������\n");
        else
            printf("����������ͨ������\n");

        s = (a+b+c)/2;
        area = sqrt(s*(s-a)*(s-b)*(s-c));
        printf("�����ε����Ϊ��%.2f\n",area);
    }
    else
    {
        printf("����������߳����ܹ���һ����Ч�������Σ����������룺\n");
        goto re_enter;
    }

}
/*��4�� ��1000���ڵ�ˮ�ɻ�������νˮ�ɻ�����153=13+53+33*/
void narcissistic(){
    int n,i,k,j;
    printf("1000���ڵ�ˮ�ɻ����У�\n");
    for (n= 100; n <1000; n++ )
    {
        i = n/100;
        j = (n-i*100)/10;
        k = n-i*100-j*10;
        if(n == (i*i*i + k*k*k + j*j*j))
            printf("%d\t",n);
    }
}
//��1-1/2+1/3-1/4+����-1/100�Ľ��
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
    printf("1-1/2+1/3-1/4+����-1/100�Ľ��Ϊ��%f",sum);
}
int main() {
    prt();
    result();
}

