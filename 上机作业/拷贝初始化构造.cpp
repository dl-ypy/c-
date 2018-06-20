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
        
        TPoint(TPoint & p);//������ʼ�����캯�� 
        
        ~TPoint()//��������
        {
            cout<<"������������"<<endl;
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
    cout<<"���ÿ�����ʼ�����캯��"<<endl;
}

int main(void)
{
    TPoint p1(5,7);//���ù��캯�� 
    TPoint p2(p1);//���ÿ�����ʼ������ 
    
    cout<<"p1="<<p1.Xcoord()<<","<<p1.Ycoord()<<endl;
    cout<<"p2="<<p2.Xcoord()<<","<<p2.Ycoord()<<endl;
    
    system("pause");
    
    return 0;
}
