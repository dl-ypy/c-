/*
  	时间：2016年4月10日08:42:18 
  	目的：构造函数的重载。 
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
		stu()
		{
			this->name = "mj";
			this->age = 23;
			this->address = "东罗";
			cout<<this->name<<" + stu()"<<endl;
		}
		stu(string name, int age, string address)
		{
			this->name = name;
			this->age = age;
			this->address = address;
			cout<<this->name<<" + stu(String name, int age, String address)"<<endl;
		}
};

int main(void)
{
	stu st;//按照调用时不同的格式调用不同的构造函数 
	stu st1("kb",24,"");
	
	return 0;
}
/*
***************结果***************
mj + stu()
kb + stu(String name, int age, String address) 
*/
