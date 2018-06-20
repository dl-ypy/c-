/*
  	时间：2016年5月28日16:17:01
	目的：无名对象及其应用 
          用于对象只用一次的时候 
*/ 
#include <iostream>
using namespace std;
class A
{
	public:
		void show()
		{
			cout<<"aaaaaaaa"<<endl;
		}
};

int main(void)
{
	(new A)->show();
	
	system("pause");
	return 0;
}
/*
***************结果***************
aaaaaaaa 
*/ 
