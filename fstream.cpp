/*
  	ʱ�䣺2016��6��13��20:50:49
	Ŀ�ģ�fstream 
*/
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(void)
{
	cout<<"�û������Լ�����������"<<endl;
	ofstream fout("a/a.txt");//���ļ���a���½������ļ�a.txt��fout�Ǳ����������ȡ
	/*
	    ��дΪ��
	 string filePath = "a/a.txt"; 
	 ofstream fout(filePath.c_str());��Ϊ���캯���Ĳ������Ͳ���string 
	*/ 
	string s1 = "������";
	
	fout<<s1<<endl;//��s1д���ļ��� 
	fout.close();//�ر��ļ� 
	
	cout<<"*******************************************"<<endl;
	cout<<"�û����Լ�����������"<<endl;
	
	string s2;
	cout<<"�������ļ����ݣ������пո񣡣�����->";
	cin>>s2;
	
	string fileName;
	cout<<"�����뱣�浽���ļ�������->";
	cin>>fileName;
	fileName = "a/"+fileName;
	
	ofstream fout1(fileName.c_str());
	fout1<<s2<<endl;
	fout1.close();
	
	cout<<"*******************************************"<<endl;
	cout<<"���ļ��ж�ȡ���ݣ�string���ͣ���"<<endl;
	ifstream fin("a/c.txt");
	string sa, sb;
	fin>>sa;
	fin>>sb;
	cout<<"���ļ��ж�ȡ�Ľ���ǣ�"<<endl;
	cout<<"sa="<<sa<<endl;
	cout<<"sb="<<sb<<endl;
	cout<<"sa+sb="<<(sa+sb)<<endl;
	cout<<"����Ϊ���֣�����ӵĽ�����������Ͷ�Ϊstring������int����Ҫ�����ȷ�����ͱ�Ϊint����"<<endl;
	
	cout<<"*******************************************"<<endl;
	cout<<"���ļ��ж�ȡ���ݣ�int���ͣ���"<<endl;
	ifstream fin1("a/c.txt");
	int sa1, sb1;
	fin1>>sa1;
	fin1>>sb1;
	cout<<"���ļ��ж�ȡ�Ľ���ǣ�"<<endl;
	cout<<"sa1="<<sa1<<endl;
	cout<<"sb1="<<sb1<<endl;
	cout<<"sa1+sb1="<<(sa1+sb1)<<endl;
	
	system("pause");
	return 0;
} 
/*
***************���***************
�û������Լ�����������
*******************************************
�û����Լ�����������
�������ļ����ݣ������пո񣡣�����->���������
�����뱣�浽���ļ�������->b.txt
*******************************************
���ļ��ж�ȡ���ݣ�string���ͣ���
���ļ��ж�ȡ�Ľ���ǣ�
sa=15
sb=20
sa+sb=1520
����Ϊ���֣�����ӵĽ�����������Ͷ�Ϊstring������int����Ҫ�����ȷ�����ͱ�Ϊint����
*******************************************
���ļ��ж�ȡ���ݣ�int���ͣ���
���ļ��ж�ȡ�Ľ���ǣ�
sa1=15
sb1=20
sa1+sb1=35 
*/
