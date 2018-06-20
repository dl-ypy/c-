/*
  	时间：2016年5月30日21:03:01 
	目的：虚继承解决多继承缺陷。 
*/
#include <iostream>
#include <string>
using namespace std;

class Animal
{
	public:
 	    virtual void nengli()
 	    {
 	    	cout<<"通过虚继承调用了原始父类的方法，但是下面两个类中并不能重写此父类中的方法，似乎没有彻底解决问题，还是不明白！！！"<<endl;
 		}
};

class AnimalLand : virtual public Animal
{
	/*public:
		void nengli()
		{
			cout<<"会跑。"<<endl;
		}*/
};

class AnimalWater : virtual public Animal
{
	/*public:
		void nengli()
		{
			cout<<"会游泳。"<<endl;
		}*/
}; 

class LiangQi : public AnimalLand,public AnimalWater 
{
	
};

int main(void)
{
	LiangQi qingwa;
	qingwa.nengli();
	
	system("pause");
	return 0;
}
/*
***************结果***************
通过虚继承调用了原始父类的方法，但是下面两个类中并不能重写此父类中的方法，似乎没有彻底解决问题，还是不明白！！！ 
*/ 
