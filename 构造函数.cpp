/*
    时间：2016年3月31日09:49:13
	目的：构造函数。 
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
		
	public:
		   stu(string name, int age, string address)//能够一下都赋值   方便 
		   {
 		       this->name = name;
 		       this->age = age;
 		       this->address = address;
		   }
		   void show()
		   {
		   	   cout<<"姓名:"<<name<<"  年龄："<<age<<"  地址："<<address<<endl;
		   }
};

int main(void)
{
	stu st("小明",20,"东罗");//构造函数是对象造好之后，第一个自动被调用的函数。  作用：初始化成员 
	stu * pst = new stu("mj",22,"东罗");//用指针调用 
	st.show();
	pst->show();
	
	system("pause");
	
	return 0;
}
/*
***************结果***************
姓名:小明  年龄：20  地址：东罗
姓名:mj  年龄：22  地址：东罗 
*/ 
