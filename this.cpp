/*
    ʱ�䣺2016��3��31��09:01:14
	Ŀ�ģ�֤��thisָ��ָ��ǰ���� 
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
	cout<<"&st1="<<&st1<<endl;//������ͬ��˵��thisָ��ǰ����
	cout<<"***************************************"<<endl; 
	
	stu st2;
	st2.show();
	cout<<"&st2="<<&st2<<endl;//��ͬ�����У�this��ֵ��ͬ 
	
	system("pause");
	
	return 0;
}
/*
***************���***************
this=0x9ffe4f
&st1=0x9ffe4f
***************************************
this=0x9ffe4e
&st2=0x9ffe4e 
*/ 
