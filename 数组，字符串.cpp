/*
    ʱ�䣺2016��1��24��19:43:30
	Ŀ�ģ�����,�ַ��� 
*/
#include <iostream>
#include <string>//string��ͷ�ļ� 

using namespace std;

int main(void)
{
	int a[5];
	int i;
	string s = "MJ";//�ų��ַ������� 
	char b[] = {"Michael"};//�ַ����� 
	char * p = "jordan";//�ַ���ָ�� 
	
	p = "Jordan";//�ܹ��޸� 
	
	for (i=0; i<5; i++)
	{
		a[i] = i;
		cout << "a["<<i<<"] = " <<a[i] <<endl;
	}
	
	cout<<b;//ֱ������ַ����� 
	cout<<p<<endl;
	cout<<s;
	
	system("pause");
	
	return 0;
}
/*
***************���***************
a[0] = 0
a[1] = 1
a[2] = 2
a[3] = 3
a[4] = 4
MichaelJordan
MJ
*/
