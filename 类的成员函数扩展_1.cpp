/*
    时间：2016年1月31日18:25:56
	目的：类的成员函数扩展。 
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
	
	st.setName("小明");
	st.setAge(22);
	st.setAddress("东罗");
	
	cout <<st.getName()<<"--------"<<st.getAge()<<"--------"<<st.getAddress()<< endl;
	
	system("pause");
	
	return 0;
}
/*
***************结果***************
小明--------22--------东罗 
*/ 
