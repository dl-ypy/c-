/*
  ʱ�䣺2016��4��15��08:04:20
  Ŀ�ģ��Ƕ������������ء� 
*/ 
#include <iostream>
#include <string>

using namespace std;

class stu{
	public:   //���캯���������� 
		void show()
		{
			cout<<"62"<<endl;
		}
		void show(int i)
		{
			cout<<"157"<<endl;
		}
		void show(string i, int b)
		{
			cout<<"415"<<endl;
	    }
		//void show(int i=1, string a)  //������� ������Ϊһ��int��ʱ  ���������һ���ظ�  ���Դ��� 
		//{
		//	cout<<"414"<<endl;
	    //} 
	    
	    //void show(int i=0, string="")   ���������ȫ������ 
		//{
		//	cout<<"13"<<endl;
	    //} 
};

int main(void)
{
	stu st;
	st.show();//���ݲ������� �� �������Ͳ�ͬ�����ò�ͬ�ĺ��� 
	st.show(1);
	st.show("a",1);
	
	system("pause");
	return 0;
}
/*
***************���***************
62
157
415 
*/ 
