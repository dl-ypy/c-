/*
  	ʱ�䣺2016��5��12��08:29:49
	Ŀ�ģ������Ķ�̬ʵ�� 
	      ��̬ʵ�ֵ�������
		  1.�̳�
		  2.���ǣ���д��
		  3.�麯��
		  4.����ָ��ָ��������� ��p = &mydog�� 
*/
#include <iostream>
using namespace std;

class Animal//������ 
{
	public:
		virtual void show() = 0;//���麯�� 
};

class Bird : public Animal
{
	public:
		void show()
		{
			cout<<"��"<<endl;
		}
}; 

class Cat : public Animal
{
	public:
		void show()
		{
			cout<<"è"<<endl;
		}
}; 

class Dog : public Animal
{
	public:
		void show()
		{
			cout<<"��"<<endl;
		}
}; 

class Man
{
	public:
		void Love(Animal * p)  //ʹ��ָ��ʵ�ֶ�̬ 
		{
			p->show();
			cout<<"-----------------------------"<<endl;
		}
};

class Woman
{
	public:
		void Love(Animal & p)  //ʹ������ʵ�ֶ�̬ 
		{
			p.show();
			cout<<"-----------------------------"<<endl;
		}
};

int main(void)
{
	Man m;
	Woman w;
	Bird b;
	Cat c;
	Dog d;
	
	cout<<"ָ��ʵ�ֶ�̬��"<<endl;
	m.Love(&b);
	m.Love(&c);
	m.Love(&d);
	cout<<"����ʵ�ֶ�̬��"<<endl;
	w.Love(b);
	w.Love(c);
	w.Love(d);
	
	system("pause");
	return 0;
}
/*
***************���***************
ָ��ʵ�ֶ�̬��
��
-----------------------------
è
-----------------------------
��
-----------------------------
����ʵ�ֶ�̬��
��
-----------------------------
è
-----------------------------
��
----------------------------- 
*/ 
