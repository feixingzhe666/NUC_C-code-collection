//ת����ţ���� 

#include <stdio.h>

int main()
{
   int a = 4;
   short b;
   double c;
   int* ptr;

   /* sizeof �����ʵ�� */
   printf("Line 1 - ���� a �Ĵ�С = %lu\n", sizeof(a) );
   printf("Line 2 - ���� b �Ĵ�С = %lu\n", sizeof(b) );
   printf("Line 3 - ���� c �Ĵ�С = %lu\n", sizeof(c) );

   /* & �� * �����ʵ�� */
   ptr = &a;    /* 'ptr' ���ڰ��� 'a' �ĵ�ַ */
   printf("a ��ֵ�� %d\n", a);
   printf("*ptr �� %d\n", *ptr);

   /* ��Ԫ�����ʵ�� */
   a = 10;
   b = (a == 1) ? 20: 30;
   printf( "b ��ֵ�� %d\n", b );

   b = (a == 10) ? 20: 30;
   printf( "b ��ֵ�� %d\n", b );
}

