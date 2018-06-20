#include <iostream>
#include <string>
#include <math.h>
using namespace std;

class Shape
{
	public:
		virtual void GetArea() = 0;
		virtual void show() = 0;		
};

class Circle : public Shape
{
	private:
		float x;
		float y;
		float r;
	public:
		Circle()
		{
			cout<<"Circle�޲ι��캯��"<<endl;
		}
		Circle(float x, float y, float r)
		{
			cout<<"Circle�вι��캯��"<<endl;
			this->x = x;
			this->y = y;
			this->r = r;
		}
		void GetArea()
		{
			cout<<"Բ�����Ϊ��"<<r*r*3.14<<endl;
		}
		void show()
		{
			cout<<"Բ������Ϊ("<<x<<","<<y<<")   ���Ϊ��"<<r*r*3.14<<endl;
		}
};

class Rectangle : public Shape
{
	private:
		float width;
		float length;
	public:
        Rectangle()
		{
			cout<<"Rectangle�޲ι��캯��"<<endl;
		}
		Rectangle(float width, float length)
		{
			cout<<"Rectangle�вι��캯��"<<endl;
			this->width = width;
			this->length = length;
		}
		void GetArea()
		{
			cout<<"�����ε����Ϊ��"<<width*length<<endl;
		}
		void show()
		{
			cout<<"�����εĳ�Ϊ��"<<length<<",  ��Ϊ��"<<width<<"���Ϊ��"<<width*length<<endl;
		}
};

class Triangle : public Shape
{
	private:
		float x1;
		float y1;
		float x2;
		float y2;
		float x3;
		float y3;
		float s;
		float s1;
	public:
		Triangle()
		{
			cout<<"Triangle�޲ι��캯��"<<endl;
		}
		Triangle(float x1, float y1, float x2, float y2, float x3, float y3)
		{
			cout<<"Triangle�вι��캯��"<<endl;
			this->x1 = x1;
			this->y1 = y1;
			this->x2 = x2;
			this->y2 = y2;
			this->x3 = x3;
			this->y3 = y3;
		}
		void GetArea()
		{
			s = (x1*y2-x2*y1)+(x2*y3-x3*y2)+(x3*y1-x1*y3);
			s1 = fabs(s);
			cout<<"�����ε����Ϊ��"<<s1*(1.0/2)<<endl;
		}
		void show()
		{
			cout<<"�����ε���������Ϊ��("<<x1<<","<<y1<<")   "<<"("<<x2<<","<<y2<<")   "<<"("<<x3<<","<<y3<<")     "<<"���Ϊ��"<<s1*(1.0/2)<<endl;
		}
};

int main(void)
{
	Shape * s;
	Circle c(2,2,2);
	s = &c;
	s->GetArea();
	s->show();
	cout<<"----------------------------------"<<endl;
	Rectangle r(5,8);
	s = &r;
	s->GetArea();
	s->show();
	cout<<"----------------------------------"<<endl;
	Triangle t(0,0,0,2,2,0);         
	s = &t;
	s->GetArea();
	s->show();
	
	system("pause");
	return 0;
}
