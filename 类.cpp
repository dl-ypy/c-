/*
    ʱ�䣺2016��1��30��14:19:39
	Ŀ�ģ���Ļ����� 
*/
#include <iostream>
#include <string>

using namespace std;

class stu//�� �ֲ���ȱ���ǣ���ȫ�Ըߣ�����ʵ������ 
{
	private://˽�еģ�ֻ������ڲ��ܷ�����Щ��Ա��������ȫ�Ըߡ� 
		string name;
		int age;
		string address;
		
	public://���е�,  ���¶��ǳ�Ա���� 
	    void initSTU()
		{
			name = "С��";
			age = 22;
			address = "����";
		 } 
		 
		 void printSTU()
		 {
		 	cout <<name<<"--------"<<age<<"��--------"<<address<< endl;
		 }
};

int main()
{	
    stu st;

	st.initSTU();
	st.printSTU();   
	
	system("pause");
	
	return 0;
}
/*
***************���***************
С��--------22��--------����
*/ 
