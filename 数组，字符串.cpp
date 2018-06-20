/*
    时间：2016年1月24日19:43:30
	目的：数组,字符串 
*/
#include <iostream>
#include <string>//string的头文件 

using namespace std;

int main(void)
{
	int a[5];
	int i;
	string s = "MJ";//号称字符串类型 
	char b[] = {"Michael"};//字符数组 
	char * p = "jordan";//字符串指针 
	
	p = "Jordan";//能够修改 
	
	for (i=0; i<5; i++)
	{
		a[i] = i;
		cout << "a["<<i<<"] = " <<a[i] <<endl;
	}
	
	cout<<b;//直接输出字符串。 
	cout<<p<<endl;
	cout<<s;
	
	system("pause");
	
	return 0;
}
/*
***************结果***************
a[0] = 0
a[1] = 1
a[2] = 2
a[3] = 3
a[4] = 4
MichaelJordan
MJ
*/
