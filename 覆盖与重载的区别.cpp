/*
    时间：2016年5月7日20:16:03
	目的：覆盖（重写）与重载的区别 
	总结：覆盖是子类与父类之间，必须有继承
		  重载是自己类中函数的关系 
*/
#include <iostream>
using namespace std;

class A
{
	private:
		int a;
		int b;
	public:
		void show()
		{
			cout<<"AAAAAAAAAAAA"<<endl;
		}
}; 

class B:public A
{
	private:
		int c;
	public:
		void show()
		{
			cout<<"BBBBBBBBB覆盖了AAAAAAAAAAA"<<endl;
		}
		void show2()
		{
			cout<<"无参数"<<endl;
		}
		void show2(int i)
		{
			cout<<"有参数"<<endl;
		}
};

int main(void)
{
	B b;
	b.A::show();//调用覆盖后父类中的方法 
	b.show();
	
	b.show2();
	b.show2(1);
	
	system("pause");
	return 0;
}
/*
***************结果***************
AAAAAAAAAAAA
BBBBBBBBB覆盖了AAAAAAAAAAA
无参数
有参数 
*/ 
