/*
  	ʱ�䣺2016��5��30��21:03:01 
	Ŀ�ģ���̳н����̳�ȱ�ݡ� 
*/
#include <iostream>
#include <string>
using namespace std;

class Animal
{
	public:
 	    virtual void nengli()
 	    {
 	    	cout<<"ͨ����̳е�����ԭʼ����ķ��������������������в�������д�˸����еķ������ƺ�û�г��׽�����⣬���ǲ����ף�����"<<endl;
 		}
};

class AnimalLand : virtual public Animal
{
	/*public:
		void nengli()
		{
			cout<<"���ܡ�"<<endl;
		}*/
};

class AnimalWater : virtual public Animal
{
	/*public:
		void nengli()
		{
			cout<<"����Ӿ��"<<endl;
		}*/
}; 

class LiangQi : public AnimalLand,public AnimalWater 
{
	
};

int main(void)
{
	LiangQi qingwa;
	qingwa.nengli();
	
	system("pause");
	return 0;
}
/*
***************���***************
ͨ����̳е�����ԭʼ����ķ��������������������в�������д�˸����еķ������ƺ�û�г��׽�����⣬���ǲ����ף����� 
*/ 
