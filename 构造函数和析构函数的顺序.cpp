/*
  	时间：2016年4月8日21:32:15
	目的：构造函数和析构函数的顺序。
		  栈中：先构造的后析构
		  堆中：与delete的顺序一致。 
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
		stu(string name, int age, string address)
		   {
		       this->name = name;
		       this->age = age;
		       this->address = address;
 		       cout<<this->name<<" * 的构造函数。"<<endl; 
		   }
        ~stu()
        {
        	cout<<this->name<<" * 的析构函数。"<<endl;
		}
		
}; 
int main(void)
{
	stu st1("mj",23,"东罗");
	stu st2("kb",24,"东罗");
	
	stu * pst1 = new stu("lj",6,"东罗");
	stu * pst2 = new stu("cr",30,"东罗");
	delete pst1;
	delete pst2;
	

	return 0;
}
/*
***************结果***************
mj * 的构造函数。
kb * 的构造函数。
lj * 的构造函数。
cr * 的构造函数。
lj * 的析构函数。
cr * 的析构函数。
kb * 的析构函数。
mj * 的析构函数。 
*/
