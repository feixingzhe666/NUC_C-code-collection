#include <stdio.h>

int main()
{
   int c;
   int a = 10;
   c = a++; 
   printf("�ȸ�ֵ�����㣺\n");
   printf("Line 1 - c ��ֵ�� %d\n", c );
   printf("Line 2 - a ��ֵ�� %d\n", a );
   a = 10;
   c = a--; 
   printf("Line 3 - c ��ֵ�� %d\n", c );
   printf("Line 4 - a ��ֵ�� %d\n", a );

   printf("�������ֵ��\n");
   a = 10;
   c = ++a; 
   printf("Line 5 - c ��ֵ�� %d\n", c );
   printf("Line 6 - a ��ֵ�� %d\n", a );
   a = 10;
   c = --a; 
   printf("Line 7 - c ��ֵ�� %d\n", c );
   printf("Line 8 - a ��ֵ�� %d\n", a );

}
