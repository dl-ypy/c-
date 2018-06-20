/*
  	时间：2016年5月27日21:15:26
	目的：了解友员。
		  java中不存在友员，因为java中没有独立函数 
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
			cout<<"姓名："<<name<<"----------年龄："<<age<<"----------住址："<<address<<endl;
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
***************结果***************
姓名：ypy----------年龄：22----------住址：dl 
*/ 
