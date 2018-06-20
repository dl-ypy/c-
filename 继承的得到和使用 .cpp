/*
    时间：2016年5月4日17:42:44
	目的：继承的得到和使用 
	结论：子类会得到父类的全部，但不一定都能使用 
           private:子类不能使用，更不能通过对象调用
		   protected:子类中能直接使用，但不能通过对象调用
		   public:都可以使用 
*/
#include <iostream>
using namespace std;

class A
{
	private:
		int a;
		int b;
		int c;
	public:
		void show()
		{
			cout<<"sssss"<<endl;
		}
};

class B:public A  //B继承了A
{
}; 

int main(void)
{
	cout<<"A类所占空间为："<<sizeof(A)<<endl;
	cout<<"B类所占空间为："<<sizeof(B)<<endl;
}
/*
***************结果***************
A类所占空间为：12
B类所占空间为：12 
*/ 
