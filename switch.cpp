/*
    ʱ�䣺2016��1��21��20:54:45
	Ŀ�ģ�switch�� 
*/
#include <iostream>

using namespace std;

int main(void)
{
	int a;
	
	cout << "������һ������"<<endl;
	cin >>a;
	
	switch (a)//������String���� 
	{
		case 1: cout << "yes" <<endl;break;
		case 2: cout << "no" <<endl;break;
		default: cout << "sb" <<endl;break;
	}
	
	system("pause");
	
	return 0;
}
/*
***************���**************
������һ������
1
yes

--------------------------------
Process exited after 10.15 seconds with return value 0
�밴���������. . . 
*/
