#include <iostream>
#include <string>
using namespace std;

class TPoint
{
    private:
        int X;
        int Y;
          
    public:
        TPoint(int x, int y)
        {
              X = x;
              Y = y;
        }
        
        TPoint(TPoint & p);//拷贝初始化构造函数 
        
        ~TPoint()//析构函数
        {
            cout<<"调用析构函数"<<endl;
        }
        
        int Xcoord()
        {
            return X;
        }
        
        int Ycoord()
        {
            return Y;
        }
};

TPoint::TPoint(TPoint & p)
{
    X = p.X;
    Y = p.Y;
    cout<<"调用拷贝初始化构造函数"<<endl;
}

int main(void)
{
    TPoint p1(5,7);//调用构造函数 
    TPoint p2(p1);//调用拷贝初始化函数 
    
    cout<<"p1="<<p1.Xcoord()<<","<<p1.Ycoord()<<endl;
    cout<<"p2="<<p2.Xcoord()<<","<<p2.Ycoord()<<endl;
    
    system("pause");
    
    return 0;
}
