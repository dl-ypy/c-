/*
    时间：2016年1月25日20:15:37
	目的：string的初步应用。
	      在c++中 string与int, char等类型  归为 内置类型 
*/
#include <iostream>

using namespace std;

void change(string s);

int main(void)
{
	string str1 = "ypy";
	string str2 = "ypy";
	string str3 = "";
	
	if (str1 == str2)//  能判断相等 
	    cout <<"字符串相等！"<< endl;
    else
	    cout <<"字符串不祥的！"<< endl; 
	    
    cout <<"str1的内容是："<<str1<< endl;
    cout <<"str2的内容是："<<str2<< endl;
    
    str3 = str1 + str2;// 能相加 
    
    cout <<"str3的内容是："<<str3<< endl;
    
    change(str1);
    
    cout <<"str3中字符的个数为："<<str3.size()<< endl;// 返回字符个数  因为此功能  所以称string为“号称”字符串类型 
	
	system("pause");
	
	return 0;
} 

void change(string s)// 能用函数传递    也能返回string类型 
{
	s = s + "，你好！";
	
	cout <<s<< endl;
}
/*
***************结果***************
字符串相等！
str1的内容是：ypy
str2的内容是：ypy
str3的内容是：ypyypy
ypy，你好！
str3中字符的个数为：6 
*/ 
