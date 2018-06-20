/*
  	时间：2016年6月13日20:50:49
	目的：fstream 
*/
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(void)
{
	cout<<"用户不能自己输入的情况："<<endl;
	ofstream fout("a/a.txt");//在文件夹a中新建并打开文件a.txt，fout是变量名，随便取
	/*
	    常写为：
	 string filePath = "a/a.txt"; 
	 ofstream fout(filePath.c_str());因为构造函数的参数类型不是string 
	*/ 
	string s1 = "哈哈哈";
	
	fout<<s1<<endl;//将s1写到文件中 
	fout.close();//关闭文件 
	
	cout<<"*******************************************"<<endl;
	cout<<"用户能自己输入的情况："<<endl;
	
	string s2;
	cout<<"请输入文件内容（不能有空格！！！）->";
	cin>>s2;
	
	string fileName;
	cout<<"请输入保存到的文件的名称->";
	cin>>fileName;
	fileName = "a/"+fileName;
	
	ofstream fout1(fileName.c_str());
	fout1<<s2<<endl;
	fout1.close();
	
	cout<<"*******************************************"<<endl;
	cout<<"从文件中读取内容（string类型）："<<endl;
	ifstream fin("a/c.txt");
	string sa, sb;
	fin>>sa;
	fin>>sb;
	cout<<"从文件中读取的结果是："<<endl;
	cout<<"sa="<<sa<<endl;
	cout<<"sb="<<sb<<endl;
	cout<<"sa+sb="<<(sa+sb)<<endl;
	cout<<"若都为数字，则相加的结果表明此类型都为string，而非int，想要相加正确，类型变为int即可"<<endl;
	
	cout<<"*******************************************"<<endl;
	cout<<"从文件中读取内容（int类型）："<<endl;
	ifstream fin1("a/c.txt");
	int sa1, sb1;
	fin1>>sa1;
	fin1>>sb1;
	cout<<"从文件中读取的结果是："<<endl;
	cout<<"sa1="<<sa1<<endl;
	cout<<"sb1="<<sb1<<endl;
	cout<<"sa1+sb1="<<(sa1+sb1)<<endl;
	
	system("pause");
	return 0;
} 
/*
***************结果***************
用户不能自己输入的情况：
*******************************************
用户能自己输入的情况：
请输入文件内容（不能有空格！！！）->发个人体会
请输入保存到的文件的名称->b.txt
*******************************************
从文件中读取内容（string类型）：
从文件中读取的结果是：
sa=15
sb=20
sa+sb=1520
若都为数字，则相加的结果表明此类型都为string，而非int，想要相加正确，类型变为int即可
*******************************************
从文件中读取内容（int类型）：
从文件中读取的结果是：
sa1=15
sb1=20
sa1+sb1=35 
*/
