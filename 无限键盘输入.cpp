/*
  	时间：2016年7月20日16:08:54
	目的：键盘无极限输入 
*/ 
#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	vector<int> myvector;
	vector<int>::iterator myiterator;
	
	cout<<"输入数字，以-1结束"<<endl;
	int i;
	cout<<"输入数->";
	cin>>i;
	
	while (i != -1)
	{
		myvector.push_back(i);
		cout<<"输入数->";
		cin>>i;
	}
	
	for (myiterator=myvector.begin(); myiterator!=myvector.end(); myiterator++)
	{
		cout<<*myiterator<<"\t";
	}
} 
/*
***************结果*************** 
输入数字，以-1结束
输入数->1
输入数->2
输入数->5
输入数->7
输入数->9
输入数->6
输入数->5165
输入数->494
输入数->-1
1       2       5       7       9       6       5165    494
*/ 
