/*
  	ʱ�䣺2016��7��5��17:33:54
	Ŀ�ģ�����ģ�� 
 	      ����ģ����STL����׼ģ��⣩������㷨 
*/
#include <iostream>
#include <string>
using namespace std;

template <class T> void display(T* a, int n)//�����˺���ģ�壬ʹ�ø������͵Ķ���ֻͨ�����ģ��ʵ�� 
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
	
	string s[]={"����","����","����","����","��"};
	display(s, 5);
	
	system("pause");
	return 0;
} 
/*
***************���***************
1       2       3       4       5
a       b       c       d       e
����    ����    ����    ����    �� 
*/ 
