/*
  时间：2016年4月15日08:21:14
  目的：拷贝构造函数。 
*/
#include <iostream>
#include <string>

using namespace std;

class stu{
	private:
		string name;
		int age;
		string address;
	public:
		stu(string name="", int age=0, string address="")
		{
			this->name = name;
			this->age = age;
			this->address = address;
		}
		stu(stu & st)//拷贝构造函数  可以不写，因为是默认的 
	 			     //成员属性在类里/对象里是全局变量
  					 //成员方法里：形参是同类型对象，可直接访问私有成员 
		{
			this->name = st.name;
			this->age = st.age;
			this->address = st.address;
		}
		void show()
		{
			cout<<this->name<<"*****"<<this->age<<"*****"<<this->address<<endl;
		}
}; 

int main(void)
{
	stu st("mj",23,"东罗");
	st.show();
	
	stu st1(st);//此处调用了拷贝构造函数 
	st1.show();
	
	system("pause"); 
	
	return 0;
}
/*
***************结果***************
mj*****23*****东罗
mj*****23*****东罗 
*/ 
