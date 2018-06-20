/*
    时间：2016年2月29日13:07:10 
	目的： 
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
		void setName(string a);//纯虚函数 
		void setAge(int a);
		void setAddress(string a);
		string getName();
		int getAge();
		string getAddress();
};

void stu::setName(string a)//必须加stu:: 
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
