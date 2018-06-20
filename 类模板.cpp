/*
  	时间：2016年7月5日18:03:34
	目的：类模板 
 	      类模板是STL（标准模板库）里面的容器 
*/
#include <iostream>
#include <string>
using namespace std;

template <class T> class A{
	public:
		A(T name)
		{
			this->name = name;
		}
		void show()
		{
			cout<<this->name<<endl;
		}
	private:
		T name;//用T定义类型 
};

int main(void)
{
	A<int> a(5);//栈里面创建 
	a.show();
	A<string>* s = new A<string>("张三");//堆里面创建
	s->show(); 
	
	system("pause");
	return 0;
} 
/*
***************结果***************
5
张三 
*/ 
