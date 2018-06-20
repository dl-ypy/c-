/*
  	时间：2016年7月5日16:58:54
	目的：内部类 
 	      内部类只在一个类里面服务 
*/
#include <iostream>
using namespace std;

class A{
	public:
		void show()
		{
			cout<<"A类方法被调用！"<<endl;
		}
	
	public:  //这里必须是public权限才能被调用 
		class B{  //内部类 
			public:
				void show()
				{
					cout<<"B类方法被调用！"<<endl;
				}
		};
};

int main(void)
{
	A a;
	a.show();//此时调用的是A的show方法
	
	A::B b;//只能这么调用内部类的方法 
	b.show(); 
	system("pause");
	return 0;
}
/*
***************结果***************
A类方法被调用！
B类方法被调用！ 
*/ 
