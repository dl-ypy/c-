/*
    时间：2016年1月30日13:00:55
	目的：c++结构体。 
*/ 
#include <iostream>

using namespace std;

struct stu
{
	string name;
	int age;
	string address;
};

int main(void)
{
	stu st;//C语言中必须写成  “struct stu st;” 这里不用 
	st.name = "小明";
	st.age = 22;
	st.address = "东罗";
	
 	cout << st.name << endl;
    cout << st.age << endl;
	cout << st.address << endl;	
	
	stu * st1;//指针类型的 
	st1 = new stu();//相当于动态分配内存 
	
	st1->name = "小明";
	st1->age = 22;
	st1->address = "东罗";
	
 	cout << st1->name << endl;
    cout << st1->age << endl;
	cout << st1->address << endl; 
	
	system("pause");
	
	return 0;
}
/*
***************结果*************** 
小明
22
东罗
小明
22
东罗
*/ 
