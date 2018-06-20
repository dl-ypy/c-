/*
  	时间：2016年5月9日11:09:10
	目的：构造函数的继承 
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
		~A()           //析构函数先析构子类，再析构父类 
		{
			cout<<"父类析构"<<endl;
		}
};

class B : public A
{
	private:
		int age;
	public:
		B(string name, int age) : A(name)//初始化列表 
		{
			this->age = age;
		}
		void show()
		{
			cout<<this->getName()<<"-----------"<<this->age<<endl;
			//因为name在父类中是私有的，所以不能直接调用，要通过公有的方法调用 
		}
		~B()
		{
			cout<<"子类析构"<<endl;
		}
};

int main(void)
{
	B b("mj", 23);
	b.show();
	
	return 0;
}
/*
***************结果*************** 
mj-----------23
子类析构
父类析构
*/ 
