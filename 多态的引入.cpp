/*
  	ʱ�䣺2016��5��10��20:11:44
	Ŀ�ģ���̬������ 
*/
#include <iostream>
#include <string>
using namespace std;

class Animal
{
	private:
		string name;
	public:
		virtual void myname()//�麯��ʵ�ֶ�̬ 
		{
			cout<<"����"<<endl;
		}
};

class Bird : public Animal
{
	public:
		void myname()
		{
			cout<<"��"<<endl;
		}
};

class Cat : public Animal
{
	public:
		void myname()
		{
			cout<<"è"<<endl;
		}
}; 

class Dog : public Animal
{
	public:
		void myname()
		{
			cout<<"��"<<endl;
		}
}; 

class Man
{
	public:
		void mylove(Animal& a)
		{
			cout<<"����ϲ��";
			a.myname();
			cout<<endl;
		}
}; 

int main(void)
{
	Man m;
	Dog d;
	Bird b;
	Cat c;
	
	m.mylove(d);
	m.mylove(b);
	m.mylove(c);
	
	cout<<"----------------------------------"<<endl;
	
	Animal * p;//ͨ��ָ��ʵ�ֶ�̬
	Dog mydog; 
	Bird mybird;
	Cat mycat;
	
	p = &mydog;
	p->myname();
	p = &mybird;
	p->myname();
	p = &mycat;
	p->myname();
	
	cout<<"----------------------------------"<<endl;
	
	Animal & q = mydog;//ͨ������ʵ�ֶ�̬ 
	q.myname();
	Animal & q1 = mycat;
	q1.myname();
	Animal & q2 = mybird;
	q2.myname();
	
	system("pause");
	return 0;
}
/*
***************���***************
����ϲ����

����ϲ����

����ϲ��è

----------------------------------
��
��
è
----------------------------------
��
è
��
*/ 
