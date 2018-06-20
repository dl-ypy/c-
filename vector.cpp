/*
  	时间：2016年7月18日09:05:30
	目的：Vector 
*/
#include <iostream>
#include <vector>//要包含头文件 
using namespace std;

int main(void)
{
	vector<int> myvector;//int a[50]，相当于动态数组 
	myvector.push_back(1);
	cout<<myvector.size()<<endl;
	
	myvector.push_back(1);
	cout<<myvector.size()<<endl;
	
	myvector.push_back(1);
	cout<<myvector.size()<<endl;
	
	myvector.push_back(4);
	cout<<myvector.size()<<endl;
	
	myvector.push_back(5);
	cout<<myvector.size()<<endl;
	
	for (int i=0; i<myvector.size(); i++)//遍历 
	{
		cout<<myvector[i]<<"\t";
	}
	
	system("pause");
	return 0;
} 
/*
***************结果***************
1
2
3
4
5
1       1       1       4       5       请按任意键继续. . . 
*/
