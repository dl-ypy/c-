/*
  	ʱ�䣺2016��4��10��08:42:18 
  	Ŀ�ģ����캯�������ء� 
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
			this->address = "����";
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
	stu st;//���յ���ʱ��ͬ�ĸ�ʽ���ò�ͬ�Ĺ��캯�� 
	stu st1("kb",24,"");
	
	return 0;
}
/*
***************���***************
mj + stu()
kb + stu(String name, int age, String address) 
*/
