#include "stdio.h"
void prt(){
    printf("����2042-2001451125-��֮��\n" );
    printf("-----------------------------------------\n");
    printf("                                         \n");
}
/*��һ�������е�ֵ���������´�ţ�����Ԫ�ظ���������100��
 ���磬ԭ��˳��Ϊ��8��6��5��4��1��Ҫ���Ϊ��1��4��5��6��8����ʾ��a[0]��a[n-1]������ a[1]��a[n-1-1]������.
*/
void reverse() {
    int array[]={9,8,7,6,5,4,3,2,1,0};
    int i,n;
    for (i =0;i < 10;i++)
    {
        n = array[i];
        array[i+1] = array[i];
        array[i]=n;
    }
    for (i=9;i>=0;--i)
    printf("%d",array[i]);
}

int main(){
    prt();
    reverse();
}