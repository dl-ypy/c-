#include <iostream>
#include <string>
using namespace std;

class Date
{
	private:
		string year;
		string month;
		string day;
	public:
		/*Date(string year="", string month="", string day="")
		{
			this->year = year;
			this->month = month;
			this->day = day;
		}*/
		void SetYear(string year)
		{
             this->year = year;
        }
        void SetMonth(string month)
		{
             this->month = month;
        }
        void SetDay(string day)
		{
             this->day = day;
        }
		string GetYear()
		{
			return year;
		}
		string GetMonth()
		{
			return month;
		}
		string GetDay()
		{
			return day;
		}
};

class Employ
{
	private:
		int num;
		string date;
		string name;
		string sex;
		string post;
		Date d;
	public:
		/*Employ(int num=0, string namn="", string sex="", string post="", string year="", string month="", string day=""):d(year, month, day)
		{
			this->name = name;
			this->num = num;
			this->sex = sex;
			this->post = post;
			this->date = year+"年"+month+"月"+day+"日";
		}*/
		int GetNum()
		{
			return num;
		}
		
		string GetSex()
		{
			return sex;
		}
		string GetName()
		{
			return name;
		}
		string GetPost()
		{
			return post;
		}
		string GetDate()
		{
            return date;
        }
		void Enter(int num, string name, string sex, string post, string year, string month, string day)
		{
            d.SetYear(year);     //需要调用Date类中的set方法赋值 
            d.SetMonth(month);
            d.SetDay(day);
			this->num = num;
			this->name = name;
			this->sex = sex;
			this->post = post;
			this->date = d.GetYear()+"年"+d.GetMonth()+"月"+d.GetDay()+"日";
		}
		friend void Display(Employ epl[], int n);  //定义友元函数 
};

void Display(Employ epl[], int n)
{
     for (int i=0; i<n; i++)
     {
         cout<<"第"<<i+1<<"个员工的基本信息为；"<<endl;
         cout<<"编号："<<epl[i].num<<"  姓名"<<epl[i].name<<"   性别："<<epl[i].sex<<"  职位："<<epl[i].post<<"   出生日期："<<epl[i].date<<endl;
         cout<<"***************************************************************************"<<endl;
     }
} 

int main(void)
{
	Employ epl[3];   // = {Employ(1,"mj","男","董事长","1995","10","1"), Employ(2,"gf","男","后勤部部长","1996","4","5"), Employ(3,"af","女","财经部部长","1994","7","8")};
	epl[0].Enter(1,"mj","男","董事长","1995","10","1");
	epl[1].Enter(2,"gf","男","后勤部部长","1996","4","5");
	epl[2].Enter(3,"af","女","财经部部长","1994","7","8");
	Display(epl,3);

 	system("pause");	
	return 0;
} 
