/*
  	ʱ�䣺2016��5��27��21:15:26
	Ŀ�ģ��˽���Ա��
		  java�в�������Ա����Ϊjava��û�ж������� 
*/ 
#include <iostream>
#include <string>
using namespace std;

class Student
{
	private:
		string name;
		int age;
		string address;
	public:
		void show()
		{
			cout<<"������"<<name<<"----------���䣺"<<age<<"----------סַ��"<<address<<endl;
		}
		friend void change(Student& s, string name, int age, string address);
};

void change(Student& s, string name, int age, string address)
{
	s.name = name;
	s.age = age;
	s.address = address;
}

int main(void)
{
	Student s;
	change(s, "ypy", 22, "dl");
	s.show();
	
	system("pause");
	return 0;
}
/*
***************���***************
������ypy----------���䣺22----------סַ��dl 
*/ 
