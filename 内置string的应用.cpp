/*
    ʱ�䣺2016��4��28��20:31:51
	Ŀ�ģ�����string��Ӧ�� 
*/ 
#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	string mys1 = "mj";
	string mys2 = "kb";
	
	cout<<mys1.c_str()<<endl;//�൱��ֱ����� 
	cout<<mys1<<endl;
	
	mys1.insert(1,mys2,0,2); //���ַ����в���  ��һ�����������ĸ�λ��  �ڶ����ǲ����ĸ�  �������ĸ��� �������ַ�������ʼλ�� 
	cout<<mys1<<endl;
	
	return 0;
}
/*
***************���*************** 
mj
mj
mkbj
*/ 
