/*
  	ʱ�䣺2016��7��20��16:08:54
	Ŀ�ģ������޼������� 
*/ 
#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	vector<int> myvector;
	vector<int>::iterator myiterator;
	
	cout<<"�������֣���-1����"<<endl;
	int i;
	cout<<"������->";
	cin>>i;
	
	while (i != -1)
	{
		myvector.push_back(i);
		cout<<"������->";
		cin>>i;
	}
	
	for (myiterator=myvector.begin(); myiterator!=myvector.end(); myiterator++)
	{
		cout<<*myiterator<<"\t";
	}
} 
/*
***************���*************** 
�������֣���-1����
������->1
������->2
������->5
������->7
������->9
������->6
������->5165
������->494
������->-1
1       2       5       7       9       6       5165    494
*/ 
