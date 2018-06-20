/*
  	时间：2016年5月30日20:36:08
	目的：多继承 
*/
#include <iostream>
#include <string>
using namespace std;

class AnimalLand
{
	public:
		void run()
		{
			cout<<"会跑。"<<endl;
		}
};

class AnimalWater
{
	public:
		void swim()
		{
			cout<<"会游泳。"<<endl;
		}
}; 

class LiangQi : public AnimalLand,public AnimalWater //继承了上面的两个类 
{
	
};

int main(void)
{
	LiangQi qingwa;
	qingwa.run();
	qingwa.swim(); 
	
	system("pause");
	return 0;
}
/*
***************结果***************
会跑。
会游泳。 
*/ 
