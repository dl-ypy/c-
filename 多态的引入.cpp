/*
  	时间：2016年5月10日20:11:44
	目的：多态的引入 
*/
#include <iostream>
#include <string>
using namespace std;

class Animal
{
	private:
		string name;
	public:
		virtual void myname()//虚函数实现多态 
		{
			cout<<"动物"<<endl;
		}
};

class Bird : public Animal
{
	public:
		void myname()
		{
			cout<<"鸟"<<endl;
		}
};

class Cat : public Animal
{
	public:
		void myname()
		{
			cout<<"猫"<<endl;
		}
}; 

class Dog : public Animal
{
	public:
		void myname()
		{
			cout<<"狗"<<endl;
		}
}; 

class Man
{
	public:
		void mylove(Animal& a)
		{
			cout<<"人们喜欢";
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
	
	Animal * p;//通过指针实现多态
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
	
	Animal & q = mydog;//通过引用实现多态 
	q.myname();
	Animal & q1 = mycat;
	q1.myname();
	Animal & q2 = mybird;
	q2.myname();
	
	system("pause");
	return 0;
}
/*
***************结果***************
人们喜欢狗

人们喜欢鸟

人们喜欢猫

----------------------------------
狗
鸟
猫
----------------------------------
狗
猫
鸟
*/ 
