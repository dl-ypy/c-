/*
  ʱ�䣺2016��4��21��10:02:49
  Ŀ�ģ�++��������� 
*/
#include <iostream>

using namespace std;

class Fushu
{
	private:
		int real;
		int image;
	public:
		Fushu(int real=0, int image=0)
		{
			this->image = image;
			this->real = real;
		}
		void operator++() //++f1���� 
		{
	        this->real++;
	        this->image++;
		}
		Fushu & operator++(int i)//f1++����
		{
			this->real++;
	        this->image++;
	        return *this;     //�д˷���ֵ�Ŀ�������++ 
	    } 
		void show()
		{
			cout<<real<<"+"<<image<<"i"<<endl;
	    } 
}; 

int main(void)
{
	Fushu f1(2, 5);
	f1.show();
	
	++f1;
	f1.show();
	
	(f1++)++;
	f1.show();
	
	system("pause");
	return 0;
}
/*
***************���***************
2+5i
3+6i
5+8i 
*/ 
