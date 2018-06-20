/*
  	时间：2016年7月5日17:33:54
	目的：函数模板 
 	      函数模板是STL（标准模板库）里面的算法 
*/
#include <iostream>
#include <string>
using namespace std;

template <class T> void display(T* a, int n)//定义了函数模板，使得各种类型的都能只通过这个模板实现 
{
	for(int i=0; i<n; i++)
	{
		cout<<a[i]<<"\t";
	}
	cout<<endl;
}

int main(void)
{
	int a[]={1,2,3,4,5};
	display(a, 5);
	
	char b[]={'a','b','c','d','e'};
	display(b, 5); 
	
	string s[]={"张三","李四","王五","赵六","娃"};
	display(s, 5);
	
	system("pause");
	return 0;
} 
/*
***************结果***************
1       2       3       4       5
a       b       c       d       e
张三    李四    王五    赵六    娃 
*/ 
