//输出一个3位整数的逆序数
#include<stdio.h>
int main()
{
    int a;
    printf("输入一个三位整数:");
    scanf("%d",&a);
    printf("输出的逆序数为：%d%d%d",a%10,a/10%10,a/100);
    return 0;
}