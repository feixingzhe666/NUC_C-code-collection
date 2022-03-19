#include<stdio.h>
int main()
{
    char a;
    printf("输入一个字母:");
    scanf("%c",&a);
    if((a>'a'&&a<'z')||(a<'A'&&a<'Z'))
        printf("这是个字母");
    else
        printf("这不是个字母");
    return 0;
}