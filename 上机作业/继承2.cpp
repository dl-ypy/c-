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
			cout<<"��ţ�"<<num<<endl;
			cout<<"������"<<name<<endl;
			cout<<"�Ա�"<<sex<<endl;
			cout<<"���䣺"<<age<<endl;
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
			cout<<"ְλ��"<<post<<endl;
			cout<<"���ţ�"<<bumen<<endl;
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
			cout<<"��ţ�"<<banhao<<endl;
			cout<<"c++�ɼ���"<<score<<endl;
		}
};

int main(void)
{
	Teacher ter[3];
	ter[0].Entert(1, "������", "Ů", 40, "������", "jsp");
	ter[1].Entert(2, "���ұ�", "��", 38, "��ʿ", "�������");
	ter[2].Entert(3, "������", "Ů", 40, "��ʦ", "���ݿ�");
	for (int i=0; i<3; i++)
	{
		cout<<"��"<<i+1<<"λ��ʦ�Ļ�����ϢΪ��"<<endl;
		ter[i].disolayt();
		cout<<"********************************************"<<endl;
	}
	
	Student stu[3];
	stu[0].EnterS(1, "mj", "��", 23, "x04", 100);
	stu[1].EnterS(2, "kb", "��", 24, "x04", 90);
	stu[2].EnterS(3, "lj", "��", 6, "x04", 80);
	cout<<"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"<<endl;
	cout<<"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"<<endl;
	cout<<"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"<<endl;
	cout<<"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"<<endl;
	cout<<"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"<<endl;
	for (int i=0; i<3; i++)
	{
		cout<<"��"<<i+1<<"λѧ���Ļ�����ϢΪ��"<<endl;
		stu[i].disolayS();
		cout<<"********************************************"<<endl;
	}
	system("pause");	
	return 0;
} 
