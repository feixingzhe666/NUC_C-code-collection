#include<stdio.h>
int main()
{
    double a;
    printf("请输入一个数字:");
    scanf("%lf",&a);
    if(a<0)
        printf("这是个负数");
    else if(a=0)
        printf("你能指望0的符号吗?");
    else if(a>0)
        printf("这是个正数");
    return 0;
}