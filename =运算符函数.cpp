/*
  时间：2016年4月21日09:54:09 
  目的：=运算符函数 
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
***************结果***************
2+5i
3+8i
*/ 
