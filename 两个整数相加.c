#include<stdio.h>
int main()
{
    int a,b,c;
    print("输入两个数（以空格分隔）：");
    scanf("%d %d",&a,&b);
    c=a+b;
    printf("%d + %d = %d",a,b,c);
    return 0;
}
