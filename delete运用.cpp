/*
  	ʱ�䣺2016��4��10��09:24:17 
  	Ŀ�ģ�������췽��Ϊ˽�У�����ε��á� 
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
		
		stu(string name, int age, string address)//���캯��Ϊ˽�е� 
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
		static stu* getObject()//static�ĵõ�����ĺ��� 
		{
			stu * st = new stu("mj",23,"����");
			return st;
		 } 
};

int main(void)
{
	stu * st = stu::getObject();//û�ж��󣬵���Ϊ��static�ģ�����ͨ��::���� 
	delete st;
	
	system("pause"); 
	
	return 0;
}
/*
***************���***************
mj + stu(String name, int age, String address)
~stu() 
*/
