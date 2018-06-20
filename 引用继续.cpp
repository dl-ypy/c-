/*
    时间：2016年3月31日08:41:44
	目的：证明引用能改变原件内容 
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
	st.setName("小明");
	st.setAge(20);
	st.setAddress("东罗");
	cout<<"姓名："<<st.getName()<<"  年龄："<<st.getAge()<<"  地址："<<st.getAddress()<<endl;  
	cout<<"************************************************"<<endl;
	stu & ST = st;//定义引用ST
	ST.setName("mj");
	ST.setAge(22);
	ST.setAddress("东罗");
	cout<<"姓名："<<ST.getName()<<"  年龄："<<ST.getAge()<<"  地址："<<ST.getAddress()<<endl; 
	cout<<"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$"<<endl;  
	cout<<"姓名："<<st.getName()<<"  年龄："<<st.getAge()<<"  地址："<<st.getAddress()<<endl;//此时用st输出的信息已经改变 
	
	system("pause");
}
/*
***************结果*************** 
姓名：小明  年龄：20  地址：东罗
************************************************
姓名：mj  年龄：22  地址：东罗
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
姓名：mj  年龄：22  地址：东罗
*/ 
