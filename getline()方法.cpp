/*
  	ʱ�䣺2016��6��15��20:14:07
	Ŀ�ģ�getline()������
		  �ɼ�һ���ַ��������Բɼ����ո񣬶�cin���ܲɼ����ո���ΪcinĬ���Կո�Ϊ�������� 
*/ 
#include <iostream>
#include <fstream> //����ͷ�ļ� 
#include <string>
using namespace std;

int main(void)
{
	string s;
	ifstream mycin("a/d.txt");
	getline(mycin, s);
	/*
        getline()�Ĳ���Ϊ�� getline(iostream, string) ��  getline(fstream, string)
		���е�������������������ʲôΪ������  ���ԡ�; ��Ϊ������  getline(iostream, string, ';')   
		Ĭ��Ϊ�Իس�Ϊ������ 
		�����Ƕ��ļ��Ľ��в������������ͨ����������²�����
		cout<<"�����ַ��������Ժ��ո�"<<endl; 
		getline(cin, s);
	*/ 
	cout<<"�ļ�����Ϊ��"<<s<<endl;
	
	cout<<"*****************************"<<endl;
	cout<<"�ɼ�����sql���"<<endl;
	string s1;//��������ö�����������ʮ�ֲ����� 
	string s2;
	string s3;
	char c;
	ifstream cin1("a/e.txt");
	getline(cin1, s1, ';');
	cin1.get(c);//Ϊ��ȥ���ɼ����������еĻس� 
	getline(cin1, s2, ';');
	cin1.get(c);
	getline(cin1, s3, ';');
	cin1.get(c);
	cout<<"�ļ��е�sql����У�"<<endl;
	cout<<s1<<endl;
	cout<<s2<<endl;
	cout<<s3<<endl;
	
	cout<<"*****************************"<<endl;
	cout<<"�Ľ�����ģ�"<<endl;
	string sa;
	
	do{
		getline(cin1, sa, ';');
		cin1.get(c);
		if (sa != "end")
		{
			cout<<sa<<endl;
		}
		else
		{
			break;
		}
	}while(sa != "end");
	
	system("pause");
	return 0;
}
/*
***************���***************
�ļ�����Ϊ���пո�    �пո�     ������������
*****************************
�ɼ�����sql���
�ļ��е�sql����У�
select * from test
select * from test where id = 1
select name from test where id = 5
*****************************
�Ľ�����ģ�
select * from test
select * from test where id = 1
select name from test where id = 5
select * from test
select * from test where id = 1
select name from test where id = 5
select * from test
select * from test where id = 1
select name from test where id = 5
select * from test
select * from test where id = 1
select name from test where id = 5 
*/ 
