/*
  	ʱ�䣺2016��7��5��16:58:54
	Ŀ�ģ��ڲ��� 
 	      �ڲ���ֻ��һ����������� 
*/
#include <iostream>
using namespace std;

class A{
	public:
		void show()
		{
			cout<<"A�෽�������ã�"<<endl;
		}
	
	public:  //���������publicȨ�޲��ܱ����� 
		class B{  //�ڲ��� 
			public:
				void show()
				{
					cout<<"B�෽�������ã�"<<endl;
				}
		};
};

int main(void)
{
	A a;
	a.show();//��ʱ���õ���A��show����
	
	A::B b;//ֻ����ô�����ڲ���ķ��� 
	b.show(); 
	system("pause");
	return 0;
}
/*
***************���***************
A�෽�������ã�
B�෽�������ã� 
*/ 
