/*
    ʱ�䣺2016��1��31��18:25:56
	Ŀ�ģ���ĳ�Ա������չ�� 
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
		void setName(string a)
		{
			name = a;
		}
		void setAge(int a)
		{
			age = a;
		}
		void setAddress(string a)
		{
			address = a;
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
	st.setAge(22);
	st.setAddress("����");
	
	cout <<st.getName()<<"--------"<<st.getAge()<<"--------"<<st.getAddress()<< endl;
	
	system("pause");
	
	return 0;
}
/*
***************���***************
С��--------22--------���� 
*/ 
