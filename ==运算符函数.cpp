/*
  时间：2016年4月21日09:19:03
  目的：==运算符函数 
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
		bool operator==(Fushu & f)
		{
	        bool b = false;   //默认不相等 
			if ((real==f.real) && (image==f.image))
			{
		 	    b = true;
		    }
			return b; 
		}
		void show()
		{
			cout<<real<<"+"<<image<<"i"<<endl;
	    } 
}; 

int main(void)
{
	Fushu f1(2, 5);
	Fushu f2(3, 5);
	f1.show();
	f2.show();
	
	if (f1 == f2)
	{
		cout<<"相等"<<endl;
	}
	else
	{
		cout<<"不相等"<<endl;
	}
	
	system("pause");
	return 0;
}
/*
***************结果***************
2+5i
3+5i
不相等 
*/ 
