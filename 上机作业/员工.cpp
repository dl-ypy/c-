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
			this->date = year+"��"+month+"��"+day+"��";
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
            d.SetYear(year);     //��Ҫ����Date���е�set������ֵ 
            d.SetMonth(month);
            d.SetDay(day);
			this->num = num;
			this->name = name;
			this->sex = sex;
			this->post = post;
			this->date = d.GetYear()+"��"+d.GetMonth()+"��"+d.GetDay()+"��";
		}
		friend void Display(Employ epl[], int n);  //������Ԫ���� 
};

void Display(Employ epl[], int n)
{
     for (int i=0; i<n; i++)
     {
         cout<<"��"<<i+1<<"��Ա���Ļ�����ϢΪ��"<<endl;
         cout<<"��ţ�"<<epl[i].num<<"  ����"<<epl[i].name<<"   �Ա�"<<epl[i].sex<<"  ְλ��"<<epl[i].post<<"   �������ڣ�"<<epl[i].date<<endl;
         cout<<"***************************************************************************"<<endl;
     }
} 

int main(void)
{
	Employ epl[3];   // = {Employ(1,"mj","��","���³�","1995","10","1"), Employ(2,"gf","��","���ڲ�����","1996","4","5"), Employ(3,"af","Ů","�ƾ�������","1994","7","8")};
	epl[0].Enter(1,"mj","��","���³�","1995","10","1");
	epl[1].Enter(2,"gf","��","���ڲ�����","1996","4","5");
	epl[2].Enter(3,"af","Ů","�ƾ�������","1994","7","8");
	Display(epl,3);

 	system("pause");	
	return 0;
} 
