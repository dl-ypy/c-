/*
  	ʱ�䣺2016��5��30��20:36:08
	Ŀ�ģ���̳� 
*/
#include <iostream>
#include <string>
using namespace std;

class AnimalLand
{
	public:
		void run()
		{
			cout<<"���ܡ�"<<endl;
		}
};

class AnimalWater
{
	public:
		void swim()
		{
			cout<<"����Ӿ��"<<endl;
		}
}; 

class LiangQi : public AnimalLand,public AnimalWater //�̳�������������� 
{
	
};

int main(void)
{
	LiangQi qingwa;
	qingwa.run();
	qingwa.swim(); 
	
	system("pause");
	return 0;
}
/*
***************���***************
���ܡ�
����Ӿ�� 
*/ 
