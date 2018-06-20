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
        	cout<<"消灭对象！"<<endl;
		}
        void display()
        {
             cout<<"学号："<<num<<endl;
             cout<<"姓名："<<name<<endl;
             cout<<"c++成绩："<<score<<"分"<<endl;
             cout<<"*******************************"<<endl;
        }
        float ave(Student st[], int n)//数组 和 数组长度 作参数 
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
    Student stu[5] = {Student(1,"a",61), Student(2,"b",70), Student(3,"c",80), Student(4,"d",90), Student(5,"e",100)}; //对象数组 
    for (int i=0; i<5; i++)
    {
        cout<<"第"<<i+1<<"个学生的基本信息为："<<endl;
        stu[i].display(); 
    }
    
    float ave = stu[5].ave(stu, 5);
    cout<<"该班c++平均成绩为："<<ave<<"分"<<endl;
    system("pause");
    return 0;
}
