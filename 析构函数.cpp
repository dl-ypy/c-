/*
    ʱ�䣺2016��4��8��21:06:54
	Ŀ�ģ����������� 
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
        ~stu()//������������ջ�У��������ʱ���Զ����ã��ڶ��в����Զ����ã�Ҫ��delete���� 
        {
        	cout<<"�������"<<endl;
		}
		
}; 

int main(void)
{
	stu st("С��",20,"����");
	
	stu * pst = new stu("С��",20,"����");
	delete pst;//�ڶ���Ҫ��delete��������ָ����� 
	
	system("pause"); 
	
	return 0;
}
/*
***************���***************
�������
������� 
*/ 
