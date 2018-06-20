#include <iostream>
#include <string>
using namespace std;
class person
{
	private:
		int num;
		string name;
		string sex;
		int age;
	public:
		void Enter(int num, string name, string sex, int age)
		{
			this->num = num;
			this->name = name;
			this->sex = sex;
			this->age = age;
		}
		void display()
		{
			cout<<"编号："<<num<<endl;
			cout<<"姓名："<<name<<endl;
			cout<<"性别："<<sex<<endl;
			cout<<"年龄："<<age<<endl;
		}
};

class Teacher:public person
{
	private:
		string post;
		string bumen;
	public:
		void Entert(int num, string name, string sex, int age, string post, string bumen)
		{
			Enter(num, name, sex, age);
			this->post = post;
			this->bumen = bumen;
		}
		void disolayt()
		{
			display(); 
			cout<<"职位："<<post<<endl;
			cout<<"部门："<<bumen<<endl;
		}
};

class Student:public person
{
	private:
		string banhao;
		float score;
	public:
		void EnterS(int num, string name, string sex, int age, string banhao, float score)
		{
			Enter(num, name, sex, age);
			this->banhao = banhao;
			this->score = score;
		}
		void disolayS()
		{
			display(); 
			cout<<"班号："<<banhao<<endl;
			cout<<"c++成绩："<<score<<endl;
		}
};

int main(void)
{
	Teacher ter[3];
	ter[0].Entert(1, "孔祥艳", "女", 40, "班主任", "jsp");
	ter[1].Entert(2, "刘忠宝", "男", 38, "博士", "软件工程");
	ter[2].Entert(3, "董晓丽", "女", 40, "教师", "数据库");
	for (int i=0; i<3; i++)
	{
		cout<<"第"<<i+1<<"位教师的基本信息为："<<endl;
		ter[i].disolayt();
		cout<<"********************************************"<<endl;
	}
	
	Student stu[3];
	stu[0].EnterS(1, "mj", "男", 23, "x04", 100);
	stu[1].EnterS(2, "kb", "男", 24, "x04", 90);
	stu[2].EnterS(3, "lj", "男", 6, "x04", 80);
	cout<<"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"<<endl;
	cout<<"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"<<endl;
	cout<<"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"<<endl;
	cout<<"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"<<endl;
	cout<<"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"<<endl;
	for (int i=0; i<3; i++)
	{
		cout<<"第"<<i+1<<"位学生的基本信息为："<<endl;
		stu[i].disolayS();
		cout<<"********************************************"<<endl;
	}
	system("pause");	
	return 0;
} 
