/*
  	时间：2016年7月20日15:24:19
	目的：迭代器 
*/ 
#include <iostream>
#include <vector> 
using namespace std;

int main(void)
{
	vector<int> myvector;
	vector<int>::iterator myiterator;
	
	myvector.push_back(1);	
	myvector.push_back(1);
	myvector.push_back(1);
	myvector.push_back(4);
	myvector.push_back(5);
	
	for (myiterator=myvector.begin(); myiterator!=myvector.end(); myiterator++)//迭代器遍历 
	{
		cout<<*myiterator<<"\t";
	}
	
	system("pause");
	return 0;
}
/*
***************结果***************
1       1       1       4       5 
*/ 
