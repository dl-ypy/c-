/*
  	时间：2016年7月3日10:20:45
	目的：格式控制类 
*/
#include <iostream>
#include <string>
using namespace std;

class MyGeShi{
	public:
		MyGeShi(int width, char zifu)
		{
			this->width = width;
			this->zifu = zifu;
		}
		friend ostream& operator<<(ostream& myos, MyGeShi& mgs)
		{
			myos.width(mgs.width);
			myos.fill(mgs.zifu);
			return myos;
		}
		
	private:
		int width;
		char zifu;
}; 

int main(void)
{
	MyGeShi mygs(50, '*');
	cout<<mygs<<"ypy"<<endl;  //为什么后面必须跟字符串？？？？？？？？？？？？？ 
	
	system("pause");
	return 0;
}
/*
***************结果***************
***********************************************ypy 
*/ 
