/*
  ʱ�䣺2016��4��21��09:19:03
  Ŀ�ģ�==��������� 
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
	        bool b = false;   //Ĭ�ϲ���� 
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
		cout<<"���"<<endl;
	}
	else
	{
		cout<<"�����"<<endl;
	}
	
	system("pause");
	return 0;
}
/*
***************���***************
2+5i
3+5i
����� 
*/ 
