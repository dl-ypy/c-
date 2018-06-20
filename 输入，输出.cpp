/*
    时间：2016年1月13日15:24:43
	目的：c++中的输入，输出 
*/
#include <iostream>

using namespace std; 

int main()
{
	int i = 0;
	
	cout << "请输入一个数："<< endl;
	cin >> i;//输入数据，相当于scanf("%d", &i); 
	
	cout << "hello world!" << endl;//endl是换行
	cout << "i = " <<i<< endl; 
	
	system("pause");//防闪退 
	
	return 0;
	
}
/*
***************结果***************
请输入一个数：
9
hello world!
i = 9

--------------------------------
Process exited after 2.203 seconds with return value 0
请按任意键继续. . .
 
*/
