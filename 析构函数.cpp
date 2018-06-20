/*
    时间：2016年4月8日21:06:54
	目的：析构函数。 
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
		   }
        ~stu()//析构函数，在栈中，程序结束时会自动调用，在堆中不会自动调用，要用delete申请 
        {
        	cout<<"消灭对象。"<<endl;
		}
		
}; 

int main(void)
{
	stu st("小明",20,"东罗");
	
	stu * pst = new stu("小明",20,"东罗");
	delete pst;//在堆中要用delete申请消灭指针对象 
	
	system("pause"); 
	
	return 0;
}
/*
***************结果***************
消灭对象。
消灭对象。 
*/ 
