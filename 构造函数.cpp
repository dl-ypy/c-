/*
    ʱ�䣺2016��3��31��09:49:13
	Ŀ�ģ����캯���� 
*/
#include <iostream>
#include <string>

using namespace std;

class stu
{
	private:
		string name;
		int age;
		string address;
		
	public:
		   stu(string name, int age, string address)//�ܹ�һ�¶���ֵ   ���� 
		   {
 		       this->name = name;
 		       this->age = age;
 		       this->address = address;
		   }
		   void show()
		   {
		   	   cout<<"����:"<<name<<"  ���䣺"<<age<<"  ��ַ��"<<address<<endl;
		   }
};

int main(void)
{
	stu st("С��",20,"����");//���캯���Ƕ������֮�󣬵�һ���Զ������õĺ�����  ���ã���ʼ����Ա 
	stu * pst = new stu("mj",22,"����");//��ָ����� 
	st.show();
	pst->show();
	
	system("pause");
	
	return 0;
}
/*
***************���***************
����:С��  ���䣺20  ��ַ������
����:mj  ���䣺22  ��ַ������ 
*/ 
