/*
  	ʱ�䣺2016��7��3��10:20:45
	Ŀ�ģ���ʽ������ 
*/
#include <iostream>
#include <string>
using namespace std;

class MyGeShi{
	public:
		MyGeShi(int width, char zifu)
		{
			this->width = width;
			this->zifu = zifu;
		}
		friend ostream& operator<<(ostream& myos, MyGeShi& mgs)
		{
			myos.width(mgs.width);
			myos.fill(mgs.zifu);
			return myos;
		}
		
	private:
		int width;
		char zifu;
}; 

int main(void)
{
	MyGeShi mygs(50, '*');
	cout<<mygs<<"ypy"<<endl;  //Ϊʲô���������ַ����������������������������� 
	
	system("pause");
	return 0;
}
/*
***************���***************
***********************************************ypy 
*/ 
