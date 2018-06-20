/*
    时间：2016年3月2日21:19:09
	目的：引用的使用。 
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

void change(stu& st, string s, int a, string s1)//使用引用,使操作简单，而且能够起作用 
{
	st.setName(s);
	st.setAge(a);
	st.setAddress(s1);
}

void print(stu& st)//用引用简化输出函数 
{
	cout<<st.getName()<<"*************"<<st.getAge()<<"*************"<<st.getAddress()<<endl;
}

int main(void)
{
	stu st;
	change(st, "小明", 22, "东罗");//此时，stu& st = st; 
	cout<<st.getName()<<"----------"<<st.getAge()<<"----------"<<st.getAddress()<<endl;
	
	stu& ss = st;//引用是“ss ” 而不是" & ss"  必须有“= ...”
	ss.setName("小红");//  可以通过操作引用来操作对象，用"." 
	ss.setAge(23);
	ss.setAddress("东罗");
	cout<<st.getName()<<"----------"<<st.getAge()<<"----------"<<st.getAddress()<<endl;
	
	print(ss);
	    
	system("pause");
	
	return 0;
}
/*
***************结果***************
小明----------22----------东罗
小红----------23----------东罗
小红*************23*************东罗 
*/
