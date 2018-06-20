/*
    时间：2016年4月22日21:44:23
	目的：Mystring类 
*/
#include <iostream>

using namespace std; 

class Mystring
{
	private:
		int length;
		char * str;
		int getLength(char * p)//得到长度 
		{
			int count = 0;
			int i = 0;
			while (p[i] != '\0')
			{
				count++;
				i++;
			}
			return count;
		}
	public:
		Mystring()
		{
			length = 0;
			str = new char(1);
			str[0] = '\0';  //str*='\0'
		}
		Mystring(int number)  //实现  Mystring ms(123); 数字的形式 
		{
			str = new char[number+1];
			for (int i=0; i<number; i++)
			{
				str[i]='\0';
			}
			str[number]='\0';
			this->length = number;
		}
		Mystring(char * p)  //通过构造函数实现 得到字符串长度的功能 
		{
			length = getLength(p);
			str = new char(length+1);
			for (int i=0; i<length; i++)
			{
				str[i] = p[i];
		    }
			str[length] = '\0'; 
		}
		int Size()
		{
			return this->length;
		}
		~Mystring()
		{
		}
		char & operator[](int index)//实现[]数组   ()也相同 
		{
			if (index >= length)
			{
				cout<<"数组越界！"<<endl;
				return str[length-1];
			}
			else
			{
				return str[index];
			}
		}
		Mystring operator+(Mystring & s)//实现+的功能 
		{
			int sumLength = 0;
			sumLength = this->length+s.length+1;
			Mystring Temp(sumLength);//分配空间 
			
			int i, j;
			for (i=0; i<length; i++)
			{
				Temp[i] = str[i];
			}
			for (j=0; j<s.length; j++)
			{
				Temp[i] = s[j];
				i++;
			}
			Temp[sumLength-1] = '\0';
			return Temp;
		 } 
		 int bijiao(char *p1, char *p2)//实现比较两个字符串是否相等的功能 
		 {
		 	int i = 0;
		 	int count1 = 0;
		 	int count2 = 0;
		 	
		 	int result = 0;
		 	
		 	count1 = getLength(p1);
		 	count2 = getLength(p2);
		 	
		 	if (count1 == count2) //首先长度相等才比较 
		 	{
		 		while (p1[i]!='\0' && p2[i]!='\0') //两个都不为空时 
		 		{
		 			if (p1[i] == p2[i])
		 			{
		 				result++;  //如果其中对应的某个值相等时，result++ 
	 				}
	 				i++;
                }
                if (count1 == result)//如果两边对应的值都相等，result就等于count1和count2 
                {
                	return 0;
				}
				else
				{
					return 1;
				}
		    }
		    else
		    {
		    	return 1;
			}
		 }
		 bool operator==(Mystring &s2)
		 {
		 	if (bijiao(this->str, s2.str) == 0)//调用上面比较的方法 
		 	{
		 		return true;
	 		}
	 		else
	 		{
	 			return false;
	 		}
		 }
		 /*Mystring &operator=(char *p)//实现=功能  ms="sss"，若无此方法，也可以 
		 {
		 	if (this->str == p)
		 	{
		 		return *this;
	 		}
	 		delete[] str;
	 		length = getLength(p);
	 		str = new char[length+1];
	 		for (int i=0; i<length; i++)
	 		{
	 			str[i] = p[i];
	 		}
	 		str[length] = '\0';
	 		return *this;
		 }
		 Mystring &operator=(Mystring &ms)//实现=功能  ms1=ms2，若无此方法，也可以 
		 {
		 	if (this == &ms)
		 	{
		 		return *this;
	 		}
	 		delete[] str;
	 		length = ms.length;
	 		for (int i=0; i<length; i++)
	 		{
	 			str[i] = ms[i];
	 		}
	 		str[length] = '\0';
	 		return *this;
		 }*/
		 char *c_str()
		 {
		 	return this->str;
		 }
		int find(char c)//   实现找字符串中字母的位置的功能 
		{
			int i;
			for (i=0; i<length; i++)
			{
				if (c == str[i])
				{
					return i+1;
				}
			}
			return -1;
		}
		Mystring &clear()//清空字符串 
		{
			for (int i=0; i<length; i++)
			{
				this->str = '\0';
			}
		}
		bool empty()//判断是否为空 
		{
			bool b = true;
			for (int i=0; i<length; i++)
			{
				if (str[i] != '\0')
				{
					b = false;
				}
			}
			return b;
		}
		//append()方法   追加    与+基本相同 
		friend ostream & operator<<(ostream & os, Mystring & ms);//要定义为友元函数 
};

ostream & operator<<(ostream & os, Mystring & ms)//实现通过cout打印类的功能 
		  			               			     //因为该功能 能连续<<,所以要返回引用类型
{
	os<<ms.str<<endl;
	return os;
} 

int main(void)
{
	Mystring ms("mj");
	cout<<"字符串长度为："<<ms.Size()<<endl;
	
	cout<<ms<<endl;  //可以直接通过cout打印类的内容 
	
	ms[0] = 'j';    //可以修改其中任意一个字母 
	cout<<ms<<endl;
	
	Mystring ms0(2);
	
	Mystring ms1("mj");
	Mystring ms2("mj");
	Mystring ms3;
	ms3 = ms2 + ms1;
	cout<<"ms3="<<ms3<<endl; 
	
	if (ms1 == ms2)
	{
		cout<<"相等"<<endl;
	}
	else
	{
		cout<<"不相等"<<endl;
	}
	
	/*string s = "D:/games";
	ifstream fin(s.c_str());*/
	Mystring ms4("sadffwggbnbnyj");
	int position = 0;
	position = ms4.find('j');
	if (position == -1)
	{
		cout<<"没有找到"<<endl;
	}
	else
	{
		cout<<"第"<<position<<"个位置上"<<endl;
	}
	
	if (ms2.empty())
	{
		cout<<"字符串为空！"<<endl;
	} 
	else
	{
		cout<<"字符串非空！"<<endl;
	}
	
	cout<<"清空前：ms4="<<ms4<<endl;
	ms4.clear();
	cout<<"清空后：ms4="<<ms4<<endl;
	return 0;
}
/*
***************结果***************
字符串长度为：2
mj

jj

ms3=mjmj

相等
第14个位置上
字符串非空！
清空前：ms4=sadffwggbnbnyj

清空后：ms4= 
*/ 
