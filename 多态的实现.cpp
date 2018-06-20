/*
  	时间：2016年5月12日08:29:49
	目的：真正的多态实现 
	      多态实现的条件：
		  1.继承
		  2.覆盖（重写）
		  3.虚函数
		  4.父类指针指向子类对象 （p = &mydog） 
*/
#include <iostream>
using namespace std;

class Animal//抽象类 
{
	public:
		virtual void show() = 0;//纯虚函数 
};

class Bird : public Animal
{
	public:
		void show()
		{
			cout<<"鸟"<<endl;
		}
}; 

class Cat : public Animal
{
	public:
		void show()
		{
			cout<<"猫"<<endl;
		}
}; 

class Dog : public Animal
{
	public:
		void show()
		{
			cout<<"狗"<<endl;
		}
}; 

class Man
{
	public:
		void Love(Animal * p)  //使用指针实现多态 
		{
			p->show();
			cout<<"-----------------------------"<<endl;
		}
};

class Woman
{
	public:
		void Love(Animal & p)  //使用引用实现多态 
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
	
	cout<<"指针实现多态："<<endl;
	m.Love(&b);
	m.Love(&c);
	m.Love(&d);
	cout<<"引用实现多态："<<endl;
	w.Love(b);
	w.Love(c);
	w.Love(d);
	
	system("pause");
	return 0;
}
/*
***************结果***************
指针实现多态：
鸟
-----------------------------
猫
-----------------------------
狗
-----------------------------
引用实现多态：
鸟
-----------------------------
猫
-----------------------------
狗
----------------------------- 
*/ 
