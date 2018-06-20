/*
  	时间：2016年5月12日09:06:55
	目的：父类指针强制转换为子类 
*/
#include <iostream>
using namespace std;

class Animal
{
	public:
		virtual void show()
		{
			cout<<"动物"<<endl;
		}
};

class Dog : public Animal
{
	public:
		void show()
		{
			cout<<"狗"<<endl;
		}
		void display()
		{
			cout<<"狗仔队"<<endl;
		}
};

class Man
{
	public:
		void love(Animal * p)
		{
			p->show();
			Dog * d;
			d = (Dog*)p;//父类对象强制转换为子类，但没有此句也可以？？？？？？？？？？？？ 
			d->display();//使得该方法也能调用子类特有的方法 
		}
};

int main(void)
{
	Man m;
	Dog d;
	
	m.love(&d);
	
	system("pause");
	return 0;
}
/*
***************结果***************
狗
狗仔队 
*/ 
