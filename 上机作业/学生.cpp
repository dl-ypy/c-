#include<iostream>
#include<string>
using namespace std;

class Student
{
    private:
        int num;
        string name;
        float score;
    public:
        Student(int num=0, string name="", float score=0.0)
        {
            this->num = num;
            this->name = name;
            this->score = score;
        }
        ~Student()
        {
        	cout<<"�������"<<endl;
		}
        void display()
        {
             cout<<"ѧ�ţ�"<<num<<endl;
             cout<<"������"<<name<<endl;
             cout<<"c++�ɼ���"<<score<<"��"<<endl;
             cout<<"*******************************"<<endl;
        }
        float ave(Student st[], int n)//���� �� ���鳤�� ������ 
        {
        	float sum = 0;
        	for (int i=0; i<n; i++)
        	{
        		sum = sum+st[i].score;
			}
			return sum/5;
        } 
};

int main(void)
{
    Student stu[5] = {Student(1,"a",61), Student(2,"b",70), Student(3,"c",80), Student(4,"d",90), Student(5,"e",100)}; //�������� 
    for (int i=0; i<5; i++)
    {
        cout<<"��"<<i+1<<"��ѧ���Ļ�����ϢΪ��"<<endl;
        stu[i].display(); 
    }
    
    float ave = stu[5].ave(stu, 5);
    cout<<"�ð�c++ƽ���ɼ�Ϊ��"<<ave<<"��"<<endl;
    system("pause");
    return 0;
}
