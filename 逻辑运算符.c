#include <stdio.h>

int main()
{
   int a = 5;
   int b = 20;
   int c ;

   if ( a && b )
   {
      printf("Line 1 - ����Ϊ��\n" );
   }
   if ( a || b )
   {
      printf("Line 2 - ����Ϊ��\n" );
   }
   /* �ı� a �� b ��ֵ */
   a = 0;
   b = 10;
   if ( a && b )
   {
      printf("Line 3 - ����Ϊ��\n" );
   }
   else
   {
      printf("Line 3 - ������Ϊ��\n" );
   }
   if ( !(a && b) )
   {
      printf("Line 4 - ����Ϊ��\n" );
   }
}
