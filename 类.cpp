/*
    时间：2016年1月30日14:19:39
	目的：类的基础。 
*/
#include <iostream>
#include <string>

using namespace std;

class stu//类 弥补的缺陷是：安全性高，并且实现捆绑。 
{
	private://私有的，只有类的内部能访问这些成员变量，安全性高。 
		string name;
		int age;
		string address;
		
	public://公有的,  以下都是成员方法 
	    void initSTU()
		{
			name = "小明";
			age = 22;
			address = "东罗";
		 } 
		 
		 void printSTU()
		 {
		 	cout <<name<<"--------"<<age<<"岁--------"<<address<< endl;
		 }
};

int main()
{	
    stu st;

	st.initSTU();
	st.printSTU();   
	
	system("pause");
	
	return 0;
}
/*
***************结果***************
小明--------22岁--------东罗
*/ 
