#include<stdio.h>
int main()
{
    double a,b,c;
    printf("输入两个浮点数：");
    scanf("%lf %lf",&a,&b);
    c=a*b;
    printf("结果=%.2lf",c);   //保留两个小数点
    return 0;
}