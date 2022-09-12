//#include<iostream>
//#include<string>
//using namespace std;
//
//class Cube
//{
//
//public:
//	void setL(int L)
//	{
//		m_L = L;
//	}
//
//	int getL()
//	{
//		return m_L;
//	}
//
//	void setW(int W)
//	{
//		m_W = W;
//	}
//
//	int getW()
//	{
//		return m_W;
//	}
//
//	void setH(int H)
//	{
//		m_H = H;
//	}
//
//	int getH()
//	{
//		return m_H;
//	}
//
//	int calculateS()
//	{
//		return 2 * (m_L * m_W + m_L * m_H + m_H * m_W);
//	}
//
//	int calculateV()
//	{
//		return m_L * m_H * m_W;
//	}
//
//	bool isSame(Cube& c2)
//	{
//		if (m_L == c2.getL() && m_H == c2.getH() && m_W == c2.getW())
//		{
//			return true;
//		}
//		return false;
//	}
//private:
//	int m_L;
//	int m_W;
//	int m_H;
//};
//
//bool isSame(Cube& c1, Cube& c2)
//{
//	if (c1.getL() == c2.getL() && c1.getH() == c2.getH() && c1.getW() == c2.getW())
//	{
//		return true;
//	}
//	return false;
//}
//
//int main()
//{
//	Cube c1;
//	Cube c2;
//	c1.setL(2);
//	c1.setW(3);
//	c1.setH(4);
//	c2.setL(2);
//	c2.setW(3);
//	c2.setH(4);
//	//cout << "立方体的体积是：" << c1.calculateV() << endl;
//	//cout << "立方体的面积是：" << c1.calculateS() << endl;
//	bool ret1 = c1.isSame(c2);
//	if (ret1)
//	{
//		cout << "c1 和 c2 是相等的！" << endl;;
//	}
//	else
//	{
//		cout << "c1 和 c2 不是相等的！" << endl;
//	}
//
//	bool ret = isSame(c1, c2);
//	if (ret)
//	{
//		cout << "c1 和 c2 是相等的！" << endl;;
//	}
//	else
//	{
//		cout << "c1 和 c2 不是相等的！" << endl;
//	}
//	system("pause");
//	return 0;
//}