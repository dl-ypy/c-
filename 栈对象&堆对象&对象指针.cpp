/*
    ʱ�䣺2016��2��29��12:49:35
	Ŀ��:
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
		void setName(string s)
		{
			name = s;
		}
		
		void setAge(int a)
		{
			age = a;
		}
		
		void setAddress(string s)
		{
			address = s;
		}
		
		string getName()
		{
			return name;
		}
		
		int getAge()
		{
			return age;
		}
		
		string getAddress()
		{
			return address;
		}
};

int main(void)
{
	stu st;//  ջ����
	st.setName("С��");
	st.setAge(20);
	st.setAddress("����");
	
	cout<<"������"<<st.getName()<<"  ���䣺"<<st.getAge()<<"  ��ַ��"<<st.getAddress()<<endl;    
	
	stu *p = NULL;
	p = new stu();//��������,ָ����նѶ���  p = &st;// ָ�����ջ���� 
	p->setName("С��");
	p->setAge(22);
	p->setAddress("����");
	
	cout<<"������"<<p->getName()<<"  ���䣺"<<p->getAge()<<"  ��ַ��"<<p->getAddress()<<endl;    
	
	system("pause");
	
	return 0;
}
/*
***************���***************
������С��  ���䣺20  ��ַ������
������С��  ���䣺22  ��ַ������ 
*/
