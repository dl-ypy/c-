/*
    ʱ�䣺2016��5��7��20:16:03
	Ŀ�ģ����ǣ���д�������ص����� 
	�ܽ᣺�����������븸��֮�䣬�����м̳�
		  �������Լ����к����Ĺ�ϵ 
*/
#include <iostream>
using namespace std;

class A
{
	private:
		int a;
		int b;
	public:
		void show()
		{
			cout<<"AAAAAAAAAAAA"<<endl;
		}
}; 

class B:public A
{
	private:
		int c;
	public:
		void show()
		{
			cout<<"BBBBBBBBB������AAAAAAAAAAA"<<endl;
		}
		void show2()
		{
			cout<<"�޲���"<<endl;
		}
		void show2(int i)
		{
			cout<<"�в���"<<endl;
		}
};

int main(void)
{
	B b;
	b.A::show();//���ø��Ǻ����еķ��� 
	b.show();
	
	b.show2();
	b.show2(1);
	
	system("pause");
	return 0;
}
/*
***************���***************
AAAAAAAAAAAA
BBBBBBBBB������AAAAAAAAAAA
�޲���
�в��� 
*/ 
