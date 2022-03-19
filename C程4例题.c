#include<stdio.h>
int main()
{
    float a,b;
    printf("请输入第一个数(完成后请回车):");
    scanf("%f",&a);
    printf("请输入第二个数(完成后请回车):");
    scanf("%f",&b);
    if(a!=b)
        a=a+b;
    else
        a=b;
    printf("%f %f",a,b);
}