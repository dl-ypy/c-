/*
  时间：2016年4月15日08:04:20
  目的：非独立函数的重载。 
*/ 
#include <iostream>
#include <string>

using namespace std;

class stu{
	public:   //构造函数重载类似 
		void show()
		{
			cout<<"62"<<endl;
		}
		void show(int i)
		{
			cout<<"157"<<endl;
		}
		void show(string i, int b)
		{
			cout<<"415"<<endl;
	    }
		//void show(int i=1, string a)  //这种情况 当参数为一个int型时  会与上面的一个重复  所以错误 
		//{
		//	cout<<"414"<<endl;
	    //} 
	    
	    //void show(int i=0, string="")   此种情况能全部包括 
		//{
		//	cout<<"13"<<endl;
	    //} 
};

int main(void)
{
	stu st;
	st.show();//根据参数个数 或 参数类型不同，调用不同的函数 
	st.show(1);
	st.show("a",1);
	
	system("pause");
	return 0;
}
/*
***************结果***************
62
157
415 
*/ 
