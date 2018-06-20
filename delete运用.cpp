/*
  	时间：2016年4月10日09:24:17 
  	目的：如果构造方法为私有，该如何调用。 
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
		
		stu(string name, int age, string address)//构造函数为私有的 
		{
			this->name = name;
			this->age = age;
			this->address = address;
			cout<<this->name<<" + stu(String name, int age, String address)"<<endl;
		}
		
	public:
		~stu()
		{
			cout<<"~stu()"<<endl;
		}
		static stu* getObject()//static的得到对象的函数 
		{
			stu * st = new stu("mj",23,"东罗");
			return st;
		 } 
};

int main(void)
{
	stu * st = stu::getObject();//没有对象，但因为是static的，可以通过::调用 
	delete st;
	
	system("pause"); 
	
	return 0;
}
/*
***************结果***************
mj + stu(String name, int age, String address)
~stu() 
*/
