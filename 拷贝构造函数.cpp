/*
  ʱ�䣺2016��4��15��08:21:14
  Ŀ�ģ��������캯���� 
*/
#include <iostream>
#include <string>

using namespace std;

class stu{
	private:
		string name;
		int age;
		string address;
	public:
		stu(string name="", int age=0, string address="")
		{
			this->name = name;
			this->age = age;
			this->address = address;
		}
		stu(stu & st)//�������캯��  ���Բ�д����Ϊ��Ĭ�ϵ� 
	 			     //��Ա����������/��������ȫ�ֱ���
  					 //��Ա������β���ͬ���Ͷ��󣬿�ֱ�ӷ���˽�г�Ա 
		{
			this->name = st.name;
			this->age = st.age;
			this->address = st.address;
		}
		void show()
		{
			cout<<this->name<<"*****"<<this->age<<"*****"<<this->address<<endl;
		}
}; 

int main(void)
{
	stu st("mj",23,"����");
	st.show();
	
	stu st1(st);//�˴������˿������캯�� 
	st1.show();
	
	system("pause"); 
	
	return 0;
}
/*
***************���***************
mj*****23*****����
mj*****23*****���� 
*/ 
