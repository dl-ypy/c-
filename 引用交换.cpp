/*
    ʱ�䣺2016��1��15��21:56:35
	Ŀ�ģ�������ʵ�ֽ����� 
*/
#include <iostream>

using namespace std;

void jiaohuan(int & a, int & b);

int main()
{
	int a = 10;
	int b = 5;
	
	cout << "����ǰa = "<<a<< ", b = "<<b<< endl;//******ע���ʽ 
	
	jiaohuan(a, b);
	
	cout << "������a = "<<a<< ", b = "<<b<< endl;
	
	system("pause");
}

void jiaohuan(int & a, int & b)//������һ�ֻ��� 
{
	int i = 0;
	i = a;
	a = b;
	b = i;
	
}
/*
***************���***************
����ǰa = 10, b = 5
������a = 5, b = 10 
*/ 
