//#include<iostream>
//#include<string>
//using namespace std;
//
////����
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
////Բ��
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
//	//��һ�����У���������һ�����Ϊ�����е�һ����Ա
//	Point m_center;  //Բ��
//	int m_r;  //�뾶
//};
//
////�ж�Բ�͵�Ĺ�ϵ
//void isInCircle(Circle& c, Point& p)
//{
//	//��������֮�����ƽ��
//	int distance =
//		(c.getCenter().getX() - p.getX()) * (c.getCenter().getX() - p.getX()) +
//		(c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY());
//
//	//����뾶��ƽ��
//	int r_d = c.getR() * c.getR();
//
//	//�ж��������ߵĹ�ϵ
//	if (distance == r_d)
//	{
//		cout << "����Բ�ϣ�" << endl;
//	}
//	else if (distance < r_d)
//	{
//		cout << "����Բ�ڣ�" << endl;
//	}
//	else
//	{
//		cout << "����Բ�⣡" << endl;
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
//	isInCircle(c, p1);  //����Բ��
//	system("pause");
//	return 0;
//}