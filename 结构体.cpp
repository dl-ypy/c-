/*
    ʱ�䣺2016��1��30��13:00:55
	Ŀ�ģ�c++�ṹ�塣 
*/ 
#include <iostream>

using namespace std;

struct stu
{
	string name;
	int age;
	string address;
};

int main(void)
{
	stu st;//C�����б���д��  ��struct stu st;�� ���ﲻ�� 
	st.name = "С��";
	st.age = 22;
	st.address = "����";
	
 	cout << st.name << endl;
    cout << st.age << endl;
	cout << st.address << endl;	
	
	stu * st1;//ָ�����͵� 
	st1 = new stu();//�൱�ڶ�̬�����ڴ� 
	
	st1->name = "С��";
	st1->age = 22;
	st1->address = "����";
	
 	cout << st1->name << endl;
    cout << st1->age << endl;
	cout << st1->address << endl; 
	
	system("pause");
	
	return 0;
}
/*
***************���*************** 
С��
22
����
С��
22
����
*/ 
