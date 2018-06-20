/*
    时间：2016年4月16日09:47:27
	目的：复数运算面向对象实现 （运算符函数重载）
		  面向对象语言中有，而c语言中无 
*/ 
#include <iostream>

using namespace std;

class Fushu
{
	private:
		int real;//实部
		int image;//虚部
	public:
		Fushu(int real=0, int image=0)//这里必须赋初值 
		{
			this->real = real;
			this->image = image;
		}
		Fushu operator+(Fushu & f)//运算符函数  实现 + 的功能    系统默认为operator(int i),所以能默认实现 int+int, 这里重写了这个函数
			  				  	  //此函数能实现多种运算操作，包括数组： 函数类型 operator[](参数类型){} 
		{
			Fushu fok;     //定义一个相加之后的对象 
			fok.real = this->real+f.real;   //相加后对象的实部 = 调用此函数的当前对象的实部 + 传来的参数对象的实部 
			fok.image = this->image+f.image;//虚部同理 
			return fok;
	    }  
	    void show()
	    {
	    	cout<<this->real<<"+"<<this->image<<"i"<<endl;
		}
		
		//friend Fushu operator+(Fushu & f1, Fushu & f2);  友元函数 
};

/*
Fushu operator+(Fushu & f1, Fushu & f2)   写成独立函数就不能调用私有成员，必须通过友元，因此就不存在this指针，所以要有两个参数 
{
    Fushu fok;
    fok.real = f1.real+f2.real;
	fok.image = f1.image+f2.image; 
	return fok; 
} 
*/ 

int main(void)
{
	Fushu f1(1, 2);
	f1.show();
	
	Fushu f2(2, 3);
	f2.show();
	
	Fushu f3;
	f3 = f1+f2;//调用时直接相加 
	f3.show();
	
	system("pause");
	return 0;
}
/*
***************结果***************
1+2i
2+3i
3+5i 
*/ 
