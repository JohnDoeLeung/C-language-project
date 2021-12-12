#include <stdio.h>
#include <string.h>
#define N 80
int fun(char *str)
{
    int length = strlen(str);
    int flag =0;
    for (int i = 0; i < length/2; i++)
    {
        if(*(str+i) != *(str+length-1-i))
        {
            flag =0;
            break;
        }
        else
            flag =1;
    }
    return flag;
}
void main()
{
    void prt();
    prt();
    char s[N];
    printf("Please enter a string:");
    gets(s);
    if (fun(s))
        printf("YES\n");
    else
    printf("NO\n");
}
void prt(){
    printf("¼ÆËã2042-2001451125-ÁºÖ®¶°\n" );
    printf("-----------------------------------------\n");
    printf("                                         \n");
}
