#include <stdio.h>

int main()
{
   int a = 21;
   int b = 10;
   int c ;

   if( a == b )
   {
      printf("Line 1 - a ���� b\n" );
   }
   else
   {
      printf("Line 1 - a ������ b\n" );
   }
   if ( a < b )
   {
      printf("Line 2 - a С�� b\n" );
   }
   else
   {
      printf("Line 2 - a ��С�� b\n" );
   }
   if ( a > b )
   {
      printf("Line 3 - a ���� b\n" );
   }
   else
   {
      printf("Line 3 - a ������ b\n" );
   }
   /* �ı� a �� b ��ֵ */
   a = 5;
   b = 20;
   if ( a <= b )
   {
      printf("Line 4 - a С�ڻ���� b\n" );
   }
   if ( b >= a )
   {
      printf("Line 5 - b ���ڻ���� a\n" );
   }
}
