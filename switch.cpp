/*
    时间：2016年1月21日20:54:45
	目的：switch。 
*/
#include <iostream>

using namespace std;

int main(void)
{
	int a;
	
	cout << "请输入一个数："<<endl;
	cin >>a;
	
	switch (a)//不能是String类型 
	{
		case 1: cout << "yes" <<endl;break;
		case 2: cout << "no" <<endl;break;
		default: cout << "sb" <<endl;break;
	}
	
	system("pause");
	
	return 0;
}
/*
***************结果**************
请输入一个数：
1
yes

--------------------------------
Process exited after 10.15 seconds with return value 0
请按任意键继续. . . 
*/
