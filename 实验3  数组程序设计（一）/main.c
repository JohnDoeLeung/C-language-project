#include "stdio.h"
void prt(){
    printf("计算2042-2001451125-梁之栋\n" );
    printf("-----------------------------------------\n");
    printf("                                         \n");
}
/*将一个数组中的值按逆序重新存放（数组元素个数不超过100）
 例如，原来顺序为：8，6，5，4，1。要求改为：1，4，5，6，8。提示：a[0]和a[n-1]交换， a[1]和a[n-1-1]交换….
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