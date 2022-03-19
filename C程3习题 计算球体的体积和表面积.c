//计算球体的体积和表面积

#include<math.h>
#include<stdio.h>
int main()
{
    float r,S,V,pi=3.1415926;
    printf("请输入球体的半径:");
    scanf("%f",&r);
    V=4/3*pi*pow(r,3);
    S=4*pi*pow(r,2);
    printf("球的体积为:%f\n",V);
    printf("球的表面积为:%f",S);
    return 0;
}