//#include<iostream>
//#include<string>
//using namespace std;
//
////点类
//class Point
//{
//public:
//	void setX(int x)
//	{
//		m_x = x;
//	}
//	void setY(int y)
//	{
//		m_y = y;
//	}
//	int getX()
//	{
//		return m_x;
//	}
//	int getY()
//	{
//		return m_y;
//	}
//
//private:
//	int m_x;
//	int m_y;
//};
//
////圆类
//class Circle
//{
//public:
//	void setCenter(Point center)
//	{
//		m_center = center;
//	}
//	Point getCenter()
//	{
//		return m_center;
//	}
//
//	void setR(int r)
//	{
//		m_r = r;
//	}
//	int getR()
//	{
//		return m_r;
//	}
//
//private:
//	//在一个类中，可以让另一个类称为此类中的一名成员
//	Point m_center;  //圆心
//	int m_r;  //半径
//};
//
////判断圆和点的关系
//void isInCircle(Circle& c, Point& p)
//{
//	//计算两点之间距离平方
//	int distance =
//		(c.getCenter().getX() - p.getX()) * (c.getCenter().getX() - p.getX()) +
//		(c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY());
//
//	//计算半径的平方
//	int r_d = c.getR() * c.getR();
//
//	//判断上面两者的关系
//	if (distance == r_d)
//	{
//		cout << "点在圆上！" << endl;
//	}
//	else if (distance < r_d)
//	{
//		cout << "点在圆内！" << endl;
//	}
//	else
//	{
//		cout << "点在圆外！" << endl;
//	}
//}
//
//int main()
//{
//	Point p;
//	Circle c;
//	p.setX(10);
//	p.setY(0);
//	c.setR(10);
//	c.setCenter(p);
//
//	Point p1;
//	p1.setX(10);
//	p1.setY(9);
//
//	isInCircle(c, p1);  //点在圆内
//	system("pause");
//	return 0;
//}