/*
    ʱ�䣺2016��5��4��17:42:44
	Ŀ�ģ��̳еĵõ���ʹ�� 
	���ۣ������õ������ȫ��������һ������ʹ�� 
           private:���಻��ʹ�ã�������ͨ���������
		   protected:��������ֱ��ʹ�ã�������ͨ���������
		   public:������ʹ�� 
*/
#include <iostream>
using namespace std;

class A
{
	private:
		int a;
		int b;
		int c;
	public:
		void show()
		{
			cout<<"sssss"<<endl;
		}
};

class B:public A  //B�̳���A
{
}; 

int main(void)
{
	cout<<"A����ռ�ռ�Ϊ��"<<sizeof(A)<<endl;
	cout<<"B����ռ�ռ�Ϊ��"<<sizeof(B)<<endl;
}
/*
***************���***************
A����ռ�ռ�Ϊ��12
B����ռ�ռ�Ϊ��12 
*/ 
