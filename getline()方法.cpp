/*
  	时间：2016年6月15日20:14:07
	目的：getline()方法。
		  采集一行字符串（可以采集到空格，而cin不能采集到空格，因为cin默认以空格为结束符） 
*/ 
#include <iostream>
#include <fstream> //引入头文件 
#include <string>
using namespace std;

int main(void)
{
	string s;
	ifstream mycin("a/d.txt");
	getline(mycin, s);
	/*
        getline()的参数为： getline(iostream, string) 或  getline(fstream, string)
		还有第三个参数，能设置以什么为结束符  如以“; ”为结束符  getline(iostream, string, ';')   
		默认为以回车为结束符 
		这里是对文件的进行操作，如果是普通的则进行以下操作：
		cout<<"输入字符串，可以含空格："<<endl; 
		getline(cin, s);
	*/ 
	cout<<"文件内容为："<<s<<endl;
	
	cout<<"*****************************"<<endl;
	cout<<"采集多条sql命令！"<<endl;
	string s1;//但是这里得定义多个变量，十分不方便 
	string s2;
	string s3;
	char c;
	ifstream cin1("a/e.txt");
	getline(cin1, s1, ';');
	cin1.get(c);//为了去掉采集到的内容中的回车 
	getline(cin1, s2, ';');
	cin1.get(c);
	getline(cin1, s3, ';');
	cin1.get(c);
	cout<<"文件中的sql语句有："<<endl;
	cout<<s1<<endl;
	cout<<s2<<endl;
	cout<<s3<<endl;
	
	cout<<"*****************************"<<endl;
	cout<<"改进上面的："<<endl;
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
***************结果***************
文件内容为：有空格    有空格     ！！！！！！
*****************************
采集多条sql命令！
文件中的sql语句有：
select * from test
select * from test where id = 1
select name from test where id = 5
*****************************
改进上面的：
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
