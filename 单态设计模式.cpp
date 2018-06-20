/*
  时间：2016年4月14日21:05:13
  目的：单态设计模式（只产生一个对象） 
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
		
		stu(string name="mj", int age=23, string address="东罗")//构造函数为私有的 
		{
			this->name = name;
			this->age = age;
			this->address = address;
		}
		
	public:
		~stu()
		{
		}
		static stu* getObject()//static的得到对象的函数 
		{
			if (biaozhi == 0)//********************** 
			{
				mm = new stu("mj",23,"东罗");
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
	stu * st1 = stu::getObject();//没有对象，但因为是static的，可以通过::调用 
	stu * st2 = stu::getObject();
	st1->show();
	st2->show();
	cout<<"**************************************"<<endl;
	st1->setName("kb");        //改了其中一个对象，但实际两个对象都被改了 
	st1->show();  
	st2->show();
	delete st1;
	
	system("pause"); 
	
	return 0;
}
/*
***************结果***************
mj*****23*****东罗
mj*****23*****东罗
**************************************
kb*****23*****东罗
kb*****23*****东罗 
*/ 
