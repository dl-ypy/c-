/*
    ʱ�䣺2016��4��22��21:44:23
	Ŀ�ģ�Mystring�� 
*/
#include <iostream>

using namespace std; 

class Mystring
{
	private:
		int length;
		char * str;
		int getLength(char * p)//�õ����� 
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
		Mystring(int number)  //ʵ��  Mystring ms(123); ���ֵ���ʽ 
		{
			str = new char[number+1];
			for (int i=0; i<number; i++)
			{
				str[i]='\0';
			}
			str[number]='\0';
			this->length = number;
		}
		Mystring(char * p)  //ͨ�����캯��ʵ�� �õ��ַ������ȵĹ��� 
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
		char & operator[](int index)//ʵ��[]����   ()Ҳ��ͬ 
		{
			if (index >= length)
			{
				cout<<"����Խ�磡"<<endl;
				return str[length-1];
			}
			else
			{
				return str[index];
			}
		}
		Mystring operator+(Mystring & s)//ʵ��+�Ĺ��� 
		{
			int sumLength = 0;
			sumLength = this->length+s.length+1;
			Mystring Temp(sumLength);//����ռ� 
			
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
		 int bijiao(char *p1, char *p2)//ʵ�ֱȽ������ַ����Ƿ���ȵĹ��� 
		 {
		 	int i = 0;
		 	int count1 = 0;
		 	int count2 = 0;
		 	
		 	int result = 0;
		 	
		 	count1 = getLength(p1);
		 	count2 = getLength(p2);
		 	
		 	if (count1 == count2) //���ȳ�����ȲűȽ� 
		 	{
		 		while (p1[i]!='\0' && p2[i]!='\0') //��������Ϊ��ʱ 
		 		{
		 			if (p1[i] == p2[i])
		 			{
		 				result++;  //������ж�Ӧ��ĳ��ֵ���ʱ��result++ 
	 				}
	 				i++;
                }
                if (count1 == result)//������߶�Ӧ��ֵ����ȣ�result�͵���count1��count2 
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
		 	if (bijiao(this->str, s2.str) == 0)//��������Ƚϵķ��� 
		 	{
		 		return true;
	 		}
	 		else
	 		{
	 			return false;
	 		}
		 }
		 /*Mystring &operator=(char *p)//ʵ��=����  ms="sss"�����޴˷�����Ҳ���� 
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
		 Mystring &operator=(Mystring &ms)//ʵ��=����  ms1=ms2�����޴˷�����Ҳ���� 
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
		int find(char c)//   ʵ�����ַ�������ĸ��λ�õĹ��� 
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
		Mystring &clear()//����ַ��� 
		{
			for (int i=0; i<length; i++)
			{
				this->str = '\0';
			}
		}
		bool empty()//�ж��Ƿ�Ϊ�� 
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
		//append()����   ׷��    ��+������ͬ 
		friend ostream & operator<<(ostream & os, Mystring & ms);//Ҫ����Ϊ��Ԫ���� 
};

ostream & operator<<(ostream & os, Mystring & ms)//ʵ��ͨ��cout��ӡ��Ĺ��� 
		  			               			     //��Ϊ�ù��� ������<<,����Ҫ������������
{
	os<<ms.str<<endl;
	return os;
} 

int main(void)
{
	Mystring ms("mj");
	cout<<"�ַ�������Ϊ��"<<ms.Size()<<endl;
	
	cout<<ms<<endl;  //����ֱ��ͨ��cout��ӡ������� 
	
	ms[0] = 'j';    //�����޸���������һ����ĸ 
	cout<<ms<<endl;
	
	Mystring ms0(2);
	
	Mystring ms1("mj");
	Mystring ms2("mj");
	Mystring ms3;
	ms3 = ms2 + ms1;
	cout<<"ms3="<<ms3<<endl; 
	
	if (ms1 == ms2)
	{
		cout<<"���"<<endl;
	}
	else
	{
		cout<<"�����"<<endl;
	}
	
	/*string s = "D:/games";
	ifstream fin(s.c_str());*/
	Mystring ms4("sadffwggbnbnyj");
	int position = 0;
	position = ms4.find('j');
	if (position == -1)
	{
		cout<<"û���ҵ�"<<endl;
	}
	else
	{
		cout<<"��"<<position<<"��λ����"<<endl;
	}
	
	if (ms2.empty())
	{
		cout<<"�ַ���Ϊ�գ�"<<endl;
	} 
	else
	{
		cout<<"�ַ����ǿգ�"<<endl;
	}
	
	cout<<"���ǰ��ms4="<<ms4<<endl;
	ms4.clear();
	cout<<"��պ�ms4="<<ms4<<endl;
	return 0;
}
/*
***************���***************
�ַ�������Ϊ��2
mj

jj

ms3=mjmj

���
��14��λ����
�ַ����ǿգ�
���ǰ��ms4=sadffwggbnbnyj

��պ�ms4= 
*/ 
