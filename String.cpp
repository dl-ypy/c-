/*
    ʱ�䣺2016��1��25��20:15:37
	Ŀ�ģ�string�ĳ���Ӧ�á�
	      ��c++�� string��int, char������  ��Ϊ �������� 
*/
#include <iostream>

using namespace std;

void change(string s);

int main(void)
{
	string str1 = "ypy";
	string str2 = "ypy";
	string str3 = "";
	
	if (str1 == str2)//  ���ж���� 
	    cout <<"�ַ�����ȣ�"<< endl;
    else
	    cout <<"�ַ�������ģ�"<< endl; 
	    
    cout <<"str1�������ǣ�"<<str1<< endl;
    cout <<"str2�������ǣ�"<<str2<< endl;
    
    str3 = str1 + str2;// ����� 
    
    cout <<"str3�������ǣ�"<<str3<< endl;
    
    change(str1);
    
    cout <<"str3���ַ��ĸ���Ϊ��"<<str3.size()<< endl;// �����ַ�����  ��Ϊ�˹���  ���Գ�stringΪ���ųơ��ַ������� 
	
	system("pause");
	
	return 0;
} 

void change(string s)// ���ú�������    Ҳ�ܷ���string���� 
{
	s = s + "����ã�";
	
	cout <<s<< endl;
}
/*
***************���***************
�ַ�����ȣ�
str1�������ǣ�ypy
str2�������ǣ�ypy
str3�������ǣ�ypyypy
ypy����ã�
str3���ַ��ĸ���Ϊ��6 
*/ 
