/*
    ʱ�䣺2016��3��31��09:13:12
	Ŀ�ģ��������õ����塣 
*/
#include <iostream>
#include <string>

using  namespace std;

class stu
{
	private:
		string name;
		int age;
		string address;
		
	public:
		void setName(string name)
		{
			this->name = name;
		}
		void setAge(int age)
		{
			this->age = age;
		}
		void setAddress(string address)
		{
			this->address = address;
		}
		string getName()
		{
			return name;
		}
		int getAge()
		{
			return age;
		}
		string getAddress()
		{
			return address;
		}
		
		/*stu* show()//ָ��Ҳ��ʵ�ֶ༶�ġ�. �� �����ظ�����̫�˷��ڴ�ռ䣬����Ҫ�������� 
		{
			return this;//���صľ��ǵ�ǰ������ 
		}
		
		stu & show()//�������� 
		{
			return * this;//�൱��stu & st = * this; 
	    }*/ 
	    
	    stu & show()
		{
			cout<<"������"<<this->name<<"  ���䣺"<<this->age<<"  ��ַ��"<<this->address<<endl;
			return * this; 
	    }
};

int main(void)
{
	stu st1;
	st1.setName("С��");
	//stu st2;
	//st2 = st1.show();//��st1��ֵ��st2 
	//cout<<st2.getName()<<endl;
	//cout<<st1.show().getName()<<endl;//��ʵ�ֶ༶�ġ�. �� 
	st1.setAge(20);
	st1.setAddress("����");
	st1.show().show().show().show().show();//������ִ��  
	
	system("pause");
	
	return 0;
}
/*
***************���***************
С�� 

������С��  ���䣺20  ��ַ������
������С��  ���䣺20  ��ַ������
������С��  ���䣺20  ��ַ������
������С��  ���䣺20  ��ַ������
������С��  ���䣺20  ��ַ������
*/
