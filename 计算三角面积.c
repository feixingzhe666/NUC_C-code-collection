#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c;
    float t,s;
    printf("输入三角形第一条边长:\n");
    scanf("%f",&a);
    printf("输入三角形第二条边长:\n");
    scanf("%f",&b);
    printf("输入三角形第三条边长:\n");
    scanf("%f",&c);
    if(a+b>c&&b+c>a&&a+c>b)
    {
        t=(a+b+c)/2;
        s=sqrt(t*(t-a)*(t-b)*(t-c));
        printf("s=%.3f\n",s);
    }
    else
        printf("数据错误！");
}