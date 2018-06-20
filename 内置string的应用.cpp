/*
    时间：2016年4月28日20:31:51
	目的：内置string的应用 
*/ 
#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	string mys1 = "mj";
	string mys2 = "kb";
	
	cout<<mys1.c_str()<<endl;//相当于直接输出 
	cout<<mys1<<endl;
	
	mys1.insert(1,mys2,0,2); //在字符串中插入  第一个参数是在哪个位置  第二个是插入哪个  第三，四个是 所插入字符串的起始位置 
	cout<<mys1<<endl;
	
	return 0;
}
/*
***************结果*************** 
mj
mj
mkbj
*/ 
