/*
  ʱ�䣺2016��4��14��21:05:13
  Ŀ�ģ���̬���ģʽ��ֻ����һ������ 
*/ 
#include <iostream>
#include <string>

using namespace std;

class stu
{
	private:
		string name;
		int age; 
		string address;
		
		static int biaozhi;//************* 
		static stu * mm;//****************** 
		
		stu(string name="mj", int age=23, string address="����")//���캯��Ϊ˽�е� 
		{
			this->name = name;
			this->age = age;
			this->address = address;
		}
		
	public:
		~stu()
		{
		}
		static stu* getObject()//static�ĵõ�����ĺ��� 
		{
			if (biaozhi == 0)//********************** 
			{
				mm = new stu("mj",23,"����");
				biaozhi++;
			}
			return mm;
		 } 
		 void setName(string name)
		 {
		 	this->name = name;
	     } 
	     void setAge(int age)
		 {
		 	this->age = age;
	     }
	     void setAddress(string address)
		 {
		 	this->address = address;
	     }
		 void show()
		 {
		 	cout<<this->name<<"*****"<<this->age<<"*****"<<this->address<<endl;
		 }
};

int stu::biaozhi = 0;//******************* 
stu * stu::mm = new stu(); //******************** 

int main(void)
{
	stu * st1 = stu::getObject();//û�ж��󣬵���Ϊ��static�ģ�����ͨ��::���� 
	stu * st2 = stu::getObject();
	st1->show();
	st2->show();
	cout<<"**************************************"<<endl;
	st1->setName("kb");        //��������һ�����󣬵�ʵ���������󶼱����� 
	st1->show();  
	st2->show();
	delete st1;
	
	system("pause"); 
	
	return 0;
}
/*
***************���***************
mj*****23*****����
mj*****23*****����
**************************************
kb*****23*****����
kb*****23*****���� 
*/ 
