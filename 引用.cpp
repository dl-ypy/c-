/*
    ʱ�䣺2016��3��2��21:19:09
	Ŀ�ģ����õ�ʹ�á� 
*/
#include <iostream>
#include <string>

using  namespace std;

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

void change(stu& st, string s, int a, string s1)//ʹ������,ʹ�����򵥣������ܹ������� 
{
	st.setName(s);
	st.setAge(a);
	st.setAddress(s1);
}

void print(stu& st)//�����ü�������� 
{
	cout<<st.getName()<<"*************"<<st.getAge()<<"*************"<<st.getAddress()<<endl;
}

int main(void)
{
	stu st;
	change(st, "С��", 22, "����");//��ʱ��stu& st = st; 
	cout<<st.getName()<<"----------"<<st.getAge()<<"----------"<<st.getAddress()<<endl;
	
	stu& ss = st;//�����ǡ�ss �� ������" & ss"  �����С�= ...��
	ss.setName("С��");//  ����ͨ����������������������"." 
	ss.setAge(23);
	ss.setAddress("����");
	cout<<st.getName()<<"----------"<<st.getAge()<<"----------"<<st.getAddress()<<endl;
	
	print(ss);
	    
	system("pause");
	
	return 0;
}
/*
***************���***************
С��----------22----------����
С��----------23----------����
С��*************23*************���� 
*/
