/*
  	ʱ�䣺2016��5��9��11:09:10
	Ŀ�ģ����캯���ļ̳� 
*/ 
#include <iostream>
#include <string>
using namespace std;

class A
{
	private:
		string name;
	public:
		A(string name)
		{
			this->name = name;
		}
		string getName()
		{
			return this->name;
		}
		~A()           //�����������������࣬���������� 
		{
			cout<<"��������"<<endl;
		}
};

class B : public A
{
	private:
		int age;
	public:
		B(string name, int age) : A(name)//��ʼ���б� 
		{
			this->age = age;
		}
		void show()
		{
			cout<<this->getName()<<"-----------"<<this->age<<endl;
			//��Ϊname�ڸ�������˽�еģ����Բ���ֱ�ӵ��ã�Ҫͨ�����еķ������� 
		}
		~B()
		{
			cout<<"��������"<<endl;
		}
};

int main(void)
{
	B b("mj", 23);
	b.show();
	
	return 0;
}
/*
***************���*************** 
mj-----------23
��������
��������
*/ 
