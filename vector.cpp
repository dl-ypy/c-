/*
  	ʱ�䣺2016��7��18��09:05:30
	Ŀ�ģ�Vector 
*/
#include <iostream>
#include <vector>//Ҫ����ͷ�ļ� 
using namespace std;

int main(void)
{
	vector<int> myvector;//int a[50]���൱�ڶ�̬���� 
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
	
	for (int i=0; i<myvector.size(); i++)//���� 
	{
		cout<<myvector[i]<<"\t";
	}
	
	system("pause");
	return 0;
} 
/*
***************���***************
1
2
3
4
5
1       1       1       4       5       �밴���������. . . 
*/
