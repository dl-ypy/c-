#include <iostream>
using namespace std;
class Rectangle   //   长方形 
{
	private:
		float length;
		float width;
	public:
		Rectangle(float length, float width)
		{
			this->length = length;
			this->width = width;
		}
		float s()
		{
			return length*width;
		}
};

class Rectangular:public Rectangle//长方体    公有继承Rectangle类 
{
	private:
		float height;
	public:
		Rectangular(float length, float width, float height):Rectangle(length, width)//构造方法 
		{
			this->height = height;
		}
		float v()
		{
			return s()*height;
		}
};

int main(void)
{
	Rectangle re1(3, 5);
	cout<<"长方形面积为："<<re1.s()<<endl;
	
	Rectangular re2(2, 8, 2);
	cout<<"长方体体积为："<<re2.v()<<endl;
	
	system("pause");
	
	return 0;
}
