/*
    时间：2016年2月29日12:49:35
	目的:
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
	stu st;//  栈对象
	st.setName("小明");
	st.setAge(20);
	st.setAddress("东罗");
	
	cout<<"姓名："<<st.getName()<<"  年龄："<<st.getAge()<<"  地址："<<st.getAddress()<<endl;    
	
	stu *p = NULL;
	p = new stu();//无名对象,指针接收堆对象  p = &st;// 指针接收栈对象 
	p->setName("小华");
	p->setAge(22);
	p->setAddress("东罗");
	
	cout<<"姓名："<<p->getName()<<"  年龄："<<p->getAge()<<"  地址："<<p->getAddress()<<endl;    
	
	system("pause");
	
	return 0;
}
/*
***************结果***************
姓名：小明  年龄：20  地址：东罗
姓名：小华  年龄：22  地址：东罗 
*/
