/*
  	ʱ�䣺2016��7��20��15:24:19
	Ŀ�ģ������� 
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
	
	for (myiterator=myvector.begin(); myiterator!=myvector.end(); myiterator++)//���������� 
	{
		cout<<*myiterator<<"\t";
	}
	
	system("pause");
	return 0;
}
/*
***************���***************
1       1       1       4       5 
*/ 
