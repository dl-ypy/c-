/*
    ʱ�䣺2016��3��31��08:41:44
	Ŀ�ģ�֤�������ܸı�ԭ������ 
*/
#include <iostream>
#include <string>> 

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
	stu st;
	st.setName("С��");
	st.setAge(20);
	st.setAddress("����");
	cout<<"������"<<st.getName()<<"  ���䣺"<<st.getAge()<<"  ��ַ��"<<st.getAddress()<<endl;  
	cout<<"************************************************"<<endl;
	stu & ST = st;//��������ST
	ST.setName("mj");
	ST.setAge(22);
	ST.setAddress("����");
	cout<<"������"<<ST.getName()<<"  ���䣺"<<ST.getAge()<<"  ��ַ��"<<ST.getAddress()<<endl; 
	cout<<"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$"<<endl;  
	cout<<"������"<<st.getName()<<"  ���䣺"<<st.getAge()<<"  ��ַ��"<<st.getAddress()<<endl;//��ʱ��st�������Ϣ�Ѿ��ı� 
	
	system("pause");
}
/*
***************���*************** 
������С��  ���䣺20  ��ַ������
************************************************
������mj  ���䣺22  ��ַ������
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
������mj  ���䣺22  ��ַ������
*/ 
