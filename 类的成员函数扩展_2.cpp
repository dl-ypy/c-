/*
    ʱ�䣺2016��2��29��13:07:10 
	Ŀ�ģ� 
*/ 
#include <iostream>

using namespace std;

class stu
{
	private:
		string name;
		int age;
		string address;
	
	public:
		void setName(string a);//���麯�� 
		void setAge(int a);
		void setAddress(string a);
		string getName();
		int getAge();
		string getAddress();
};

void stu::setName(string a)//�����stu:: 
{
    name = a;
}
		
void stu::setAge(int a)
{
    age = a;
}
		
void stu::setAddress(string a)
{
    address = a;
}

string stu::getName()
{
    return name;
}

int stu::getAge()
{
    return age;
}
		
string stu::getAddress()
{
    return address;
}

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
