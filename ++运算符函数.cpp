/*
  时间：2016年4月21日10:02:49
  目的：++运算符函数 
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
		void operator++() //++f1调用 
		{
	        this->real++;
	        this->image++;
		}
		Fushu & operator++(int i)//f1++调用
		{
			this->real++;
	        this->image++;
	        return *this;     //有此返回值的可以连续++ 
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
***************结果***************
2+5i
3+6i
5+8i 
*/ 
