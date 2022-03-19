#include<stdio.h>
int main(){
    float a,b;
    printf("输入第一个数字:\n");
    scanf("%f",&a);
    printf("输入第二个数字:\n");
    scanf("%f",&b);
    if(a>=b)
        printf("最大值是%f",a);
    else
        printf("最大值是%f",b);
    return 0;
}