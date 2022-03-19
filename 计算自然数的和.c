#include<stdio.h>
int main()
{
    int n,i,sum=0;

    printf("输入一个正整数:");
    scanf("%d",&n);

    for(i=1;i<=n;++i)   //i=i+1
    {
        sum+=i; //sum=sum+i
    }
    printf("结果为:%d",sum);
    return 0;
}