#include <stdio.h>
#include <math.h>

int main()
{
        float a,b,c,x1,x2,d;
        printf("输入方程的三个系数:");
        scanf("%f %f %f",&a,&b,&c);
        d=sqrt(b*b-4*a*c);
        if(a!=0)
        {
         if(d>0)
            {
                
                x1=(-b+d)/(2*a);
                x2=(-b-d)/(2*a);
                if(x1<x2) 
                    printf("%0.2f %0.2f\n",x2,x1); 
                else
                    printf("%0.2f %0.2f\n",x1,x2);
            
            }
    else if(d==0)
            
                printf("该方程不是二院一次方程");
            
        
        
        
        }
        else if(d==0)
        {
            x1=(-b)/(2*a);
            printf("该方程有两个相同的解%0.2f\n",x1);
        }
        else
        {
            printf("该方程无解");
        }


        return 0;
}