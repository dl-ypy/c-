/*
  	ʱ�䣺2016��7��5��18:03:34
	Ŀ�ģ���ģ�� 
 	      ��ģ����STL����׼ģ��⣩��������� 
*/
#include <iostream>
#include <string>
using namespace std;

template <class T> class A{
	public:
		A(T name)
		{
			this->name = name;
		}
		void show()
		{
			cout<<this->name<<endl;
		}
	private:
		T name;//��T�������� 
};

int main(void)
{
	A<int> a(5);//ջ���洴�� 
	a.show();
	A<string>* s = new A<string>("����");//�����洴��
	s->show(); 
	
	system("pause");
	return 0;
} 
/*
***************���***************
5
���� 
*/ 
