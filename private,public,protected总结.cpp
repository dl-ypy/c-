/*
  	时间：2016年5月8日21:10:48
	目的：private,public,protected总结 
	1.本类中通过对象访问： public:ok  private,protected:no
	2.继承后子类中访问父类（不是通过对象）：public,protected:ok  private:no
	3.技巧：
		在父类中为private的：能得到，但不能（直接）使用，只能通过public或protected方法间接使用
		 在父类中为非private的：
		 a.如果通过public继承:权限不变 
		 b.如果通过protected继承:public变为protected，private的不变
		 c.如果通过private继承：一律变为private  
*/

