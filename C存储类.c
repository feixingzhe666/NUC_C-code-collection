//C�洢��
#include<stdio.h>
int main()
{
	auto int a;//�൱��int a;	ֻ�ں����������� 
	//auto�洢�������оֲ�����Ĭ�ϵĴ洢�� 
	
	
	
	register int b;//���崢������ڼĴ����ж�����RAM�еľֲ�����
	/*�����ȡ�洢����RAM���ȿ���ָ����Ԫ������Ϣ�ֿɴ�ָ����Ԫ������Ϣ��
	������ &����*/ 
	
	
	static int GPA=4.0;//�ں�������֮�䱣�־ֲ�������ֵ 
	// 
	



#include <stdio.h>

/* �������� */
void func1(void);

static int count=10;        /* ȫ�ֱ��� - static ��Ĭ�ϵ� */



  while (count--) {
      func1();
	}
  return 0;
} 

void func1(void)
{
/* 'thingy' �� 'func1' �ľֲ����� - ֻ��ʼ��һ��
 * ÿ�ε��ú��� 'func1' 'thingy' ֵ���ᱻ���á�
 */                
  static int thingy=5;
  thingy++;
  printf(" thingy Ϊ %d �� count Ϊ %d\n", thingy, count);
}
