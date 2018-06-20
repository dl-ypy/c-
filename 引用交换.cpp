/*
    时间：2016年1月15日21:56:35
	目的：用引用实现交换。 
*/
#include <iostream>

using namespace std;

void jiaohuan(int & a, int & b);

int main()
{
	int a = 10;
	int b = 5;
	
	cout << "交换前a = "<<a<< ", b = "<<b<< endl;//******注意格式 
	
	jiaohuan(a, b);
	
	cout << "交换后a = "<<a<< ", b = "<<b<< endl;
	
	system("pause");
}

void jiaohuan(int & a, int & b)//引用是一种机制 
{
	int i = 0;
	i = a;
	a = b;
	b = i;
	
}
/*
***************结果***************
交换前a = 10, b = 5
交换后a = 5, b = 10 
*/ 
