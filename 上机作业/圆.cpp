#include<iostream>
using namespace std;
class Circle
{
      private:
          float r;
          float x;
          float y;
      public:
          Circle(float r, float x, float y)
          {
              this->r = r;
              this->x = x;
              this->y = y;
          }   
          ~Circle()
          {
          	  cout<<"�������"<<endl;
		  }
          float GetArea()
          {
               return r*r*3.14;
          }
          void set(float r, float x, float y)
          {
               this->r = r;
               this->x = x;
               this->y = y;
          }
          void show()
          {
               cout<<"Բ�ģ�("<<x<<","<<y<<")"<<endl;
               cout<<"�뾶��"<<r<<"   ֱ����"<<2*r<<"   �ܳ���"<<2*r*3.14<<"    �����"<<r*r*3.14<<endl;
          }
          
};
int main(void)
{
    Circle c(3, 0, 0);
    cout<<"��ֵǰ��"<<endl;
    cout<<"ͨ��GetArea�����õ�Բ�����Ϊ��"<<c.GetArea()<<endl;
    c.show();
    c.set(5, 4, 3);
    cout<<"******************************************"<<endl;
    cout<<"��ֵ��"<<endl;
    cout<<"ͨ��GetArea�����õ�Բ�����Ϊ��"<<c.GetArea()<<endl;
    c.show();
    
    system("pause");
    
    return 0;
}
