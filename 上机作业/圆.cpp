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
          	  cout<<"消灭对象！"<<endl;
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
               cout<<"圆心：("<<x<<","<<y<<")"<<endl;
               cout<<"半径："<<r<<"   直径："<<2*r<<"   周长："<<2*r*3.14<<"    面积："<<r*r*3.14<<endl;
          }
          
};
int main(void)
{
    Circle c(3, 0, 0);
    cout<<"赋值前："<<endl;
    cout<<"通过GetArea函数得到圆的面积为："<<c.GetArea()<<endl;
    c.show();
    c.set(5, 4, 3);
    cout<<"******************************************"<<endl;
    cout<<"赋值后："<<endl;
    cout<<"通过GetArea函数得到圆的面积为："<<c.GetArea()<<endl;
    c.show();
    
    system("pause");
    
    return 0;
}
