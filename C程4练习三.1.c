#include<stdio.h>
#include<math.h>
int main()

{
    float x,y,pi;
    printf("输入x的值:");
    scanf("%f",&x);
    if(x<-pi/2)
    {
        y=2*pow(x,3)+3*cos(x)+5;
        printf("y的值为%f",y);
    }
    else if(x>=-pi/2&&x<pi/2)
    {
        y=pow(((x-1)/(x-2)),3)+5*x;
        printf("y的值为:%f",y);
    }
    else if(x>=pi/2)
    {
        y=sqrt(x+2*sin(3*x));
        printf("y的值为:%f",y);
    }
    return 0;
}