/*
  	ʱ�䣺2016��4��8��21:32:15
	Ŀ�ģ����캯��������������˳��
		  ջ�У��ȹ���ĺ�����
		  ���У���delete��˳��һ�¡� 
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
 		       cout<<this->name<<" * �Ĺ��캯����"<<endl; 
		   }
        ~stu()
        {
        	cout<<this->name<<" * ������������"<<endl;
		}
		
}; 
int main(void)
{
	stu st1("mj",23,"����");
	stu st2("kb",24,"����");
	
	stu * pst1 = new stu("lj",6,"����");
	stu * pst2 = new stu("cr",30,"����");
	delete pst1;
	delete pst2;
	

	return 0;
}
/*
***************���***************
mj * �Ĺ��캯����
kb * �Ĺ��캯����
lj * �Ĺ��캯����
cr * �Ĺ��캯����
lj * ������������
cr * ������������
kb * ������������
mj * ������������ 
*/
