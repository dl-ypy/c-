#include <iostream>
#include <string>
using namespace std;
class Student
{
	private:
		int num;
		string name;
		float score;
	public:
		void display()
		{
			cout<<"ѧ�ţ�"<<num<<"   ����"<<name<<"   ��ѧ�ɼ���"<<score<<endl;
		}
		
		friend int main(void);  //��Ԫ���� 
};

int main(void)
{
	Student st;
	st.num = 123;
	st.name = "С��";
	st.score = 88.8;
	st.display();
	
	system("pause");
}
