/*
  ʱ�䣺2016��4��21��09:54:09 
  Ŀ�ģ�=��������� 
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
		void operator=(Fushu & f)
		{
	        real = f.real;
	        image = f.image;
		}
		void show()
		{
			cout<<real<<"+"<<image<<"i"<<endl;
	    } 
}; 

int main(void)
{
	Fushu f1(2, 5);
	Fushu f2(3, 8);
	f1.show();
	
	f1 = f2;
	f1.show();
	
	system("pause");
	return 0;
}
/*
***************���***************
2+5i
3+8i
*/ 
