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
			cout<<"学号："<<num<<"   名字"<<name<<"   数学成绩："<<score<<endl;
		}
		
		friend int main(void);  //友元函数 
};

int main(void)
{
	Student st;
	st.num = 123;
	st.name = "小明";
	st.score = 88.8;
	st.display();
	
	system("pause");
}
