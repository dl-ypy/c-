/*
    时间：2016年3月31日09:01:14
	目的：证明this指针指向当前对象 
*/
#include <iostream>

using namespace std;

class stu
{
	public:
	   void show()
	   {
	   	  cout<<"this="<<this<<endl;
       }
};

int main(void)
{
	stu st1;
	st1.show();
	cout<<"&st1="<<&st1<<endl;//内容相同，说明this指向当前对象
	cout<<"***************************************"<<endl; 
	
	stu st2;
	st2.show();
	cout<<"&st2="<<&st2<<endl;//不同对象中，this的值不同 
	
	system("pause");
	
	return 0;
}
/*
***************结果***************
this=0x9ffe4f
&st1=0x9ffe4f
***************************************
this=0x9ffe4e
&st2=0x9ffe4e 
*/ 
