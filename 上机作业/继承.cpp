#include <iostream>
using namespace std;
class Rectangle   //   ������ 
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

class Rectangular:public Rectangle//������    ���м̳�Rectangle�� 
{
	private:
		float height;
	public:
		Rectangular(float length, float width, float height):Rectangle(length, width)//���췽�� 
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
	cout<<"���������Ϊ��"<<re1.s()<<endl;
	
	Rectangular re2(2, 8, 2);
	cout<<"���������Ϊ��"<<re2.v()<<endl;
	
	system("pause");
	
	return 0;
}
