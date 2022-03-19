#include <stdio.h>

int main() {
   int a, b;

   a = 11;
   b = 99;

   // 也可以通过以下代码实现让用户在终端输入两个数
   // printf("输入第一个值:");
   // scanf("%d", &a);
   // printf("输入第二个值:");
   // scanf("%d", &b);

   if(a > b)
      printf("a 大于 b");
   else
      printf("a 小于等于 b");

   return 0;
}