/*
    ʱ�䣺2016��4��16��09:47:27
	Ŀ�ģ����������������ʵ�� ��������������أ�
		  ��������������У���c�������� 
*/ 
#include <iostream>

using namespace std;

class Fushu
{
	private:
		int real;//ʵ��
		int image;//�鲿
	public:
		Fushu(int real=0, int image=0)//������븳��ֵ 
		{
			this->real = real;
			this->image = image;
		}
		Fushu operator+(Fushu & f)//���������  ʵ�� + �Ĺ���    ϵͳĬ��Ϊoperator(int i),������Ĭ��ʵ�� int+int, ������д���������
			  				  	  //�˺�����ʵ�ֶ�������������������飺 �������� operator[](��������){} 
		{
			Fushu fok;     //����һ�����֮��Ķ��� 
			fok.real = this->real+f.real;   //��Ӻ�����ʵ�� = ���ô˺����ĵ�ǰ�����ʵ�� + �����Ĳ��������ʵ�� 
			fok.image = this->image+f.image;//�鲿ͬ�� 
			return fok;
	    }  
	    void show()
	    {
	    	cout<<this->real<<"+"<<this->image<<"i"<<endl;
		}
		
		//friend Fushu operator+(Fushu & f1, Fushu & f2);  ��Ԫ���� 
};

/*
Fushu operator+(Fushu & f1, Fushu & f2)   д�ɶ��������Ͳ��ܵ���˽�г�Ա������ͨ����Ԫ����˾Ͳ�����thisָ�룬����Ҫ���������� 
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
	f3 = f1+f2;//����ʱֱ����� 
	f3.show();
	
	system("pause");
	return 0;
}
/*
***************���***************
1+2i
2+3i
3+5i 
*/ 
