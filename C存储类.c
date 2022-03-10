//C存储类
#include<stdio.h>
int main()
{
	auto int a;//相当于int a;	只在函数内起作用 
	//auto存储类是所有局部变量默认的存储类 
	
	
	
	register int b;//定义储存可能在寄存器中而不是RAM中的局部变量
	/*随机存取存储器（RAM）既可向指定单元存入信息又可从指定单元读出信息。
	不可用 &储存*/ 
	
	
	static int GPA=4.0;//在函数调用之间保持局部变量的值 
	// 
	



#include <stdio.h>

/* 函数声明 */
void func1(void);

static int count=10;        /* 全局变量 - static 是默认的 */



  while (count--) {
      func1();
	}
  return 0;
} 

void func1(void)
{
/* 'thingy' 是 'func1' 的局部变量 - 只初始化一次
 * 每次调用函数 'func1' 'thingy' 值不会被重置。
 */                
  static int thingy=5;
  thingy++;
  printf(" thingy 为 %d ， count 为 %d\n", thingy, count);
}
