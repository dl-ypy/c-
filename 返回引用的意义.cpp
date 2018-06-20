/*
    时间：2016年3月31日09:13:12
	目的：返回引用的意义。 
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
		void setName(string name)
		{
			this->name = name;
		}
		void setAge(int age)
		{
			this->age = age;
		}
		void setAddress(string address)
		{
			this->address = address;
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
		
		/*stu* show()//指针也能实现多级的“. ” 但返回副本，太浪费内存空间，所以要返回引用 
		{
			return this;//返回的就是当前对象本身 
		}
		
		stu & show()//返回引用 
		{
			return * this;//相当于stu & st = * this; 
	    }*/ 
	    
	    stu & show()
		{
			cout<<"姓名："<<this->name<<"  年龄："<<this->age<<"  地址："<<this->address<<endl;
			return * this; 
	    }
};

int main(void)
{
	stu st1;
	st1.setName("小明");
	//stu st2;
	//st2 = st1.show();//将st1赋值给st2 
	//cout<<st2.getName()<<endl;
	//cout<<st1.show().getName()<<endl;//能实现多级的“. ” 
	st1.setAge(20);
	st1.setAddress("东罗");
	st1.show().show().show().show().show();//能无限执行  
	
	system("pause");
	
	return 0;
}
/*
***************结果***************
小明 

姓名：小明  年龄：20  地址：东罗
姓名：小明  年龄：20  地址：东罗
姓名：小明  年龄：20  地址：东罗
姓名：小明  年龄：20  地址：东罗
姓名：小明  年龄：20  地址：东罗
*/
