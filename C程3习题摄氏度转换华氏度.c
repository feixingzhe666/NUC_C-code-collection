//摄氏度转换华氏度
#include<stdio.h>
int main()
{
    float f,c;
    printf("请输入摄氏温度:\n");
    scanf("%f",&c);
    f=c*1.8+32;
    printf("%.1f对应的华氏度为:%.1f",c,f);
    return 0;

}