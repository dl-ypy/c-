/*
  	ʱ�䣺2016��5��12��09:06:55
	Ŀ�ģ�����ָ��ǿ��ת��Ϊ���� 
*/
#include <iostream>
using namespace std;

class Animal
{
	public:
		virtual void show()
		{
			cout<<"����"<<endl;
		}
};

class Dog : public Animal
{
	public:
		void show()
		{
			cout<<"��"<<endl;
		}
		void display()
		{
			cout<<"���ж�"<<endl;
		}
};

class Man
{
	public:
		void love(Animal * p)
		{
			p->show();
			Dog * d;
			d = (Dog*)p;//�������ǿ��ת��Ϊ���࣬��û�д˾�Ҳ���ԣ����������������������� 
			d->display();//ʹ�ø÷���Ҳ�ܵ����������еķ��� 
		}
};

int main(void)
{
	Man m;
	Dog d;
	
	m.love(&d);
	
	system("pause");
	return 0;
}
/*
***************���***************
��
���ж� 
*/ 
