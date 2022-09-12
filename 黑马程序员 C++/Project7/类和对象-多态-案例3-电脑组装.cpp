//#include<iostream>
//#include<string>
//using namespace std;
//
////抽象CPU类
//class CPU
//{
//public:
//	virtual void calculator() = 0;
//};
//
//class VideoCard
//{
//public:
//	virtual void display() = 0;
//};
//
//class Memory
//{
//public:
//	virtual void storage() = 0;
//};
//
////电脑类
//class Computer
//{
//public:
//	Computer(CPU* cpu, VideoCard* vc, Memory* mem)
//	{
//		m_cpu = cpu;
//		m_vc = vc;
//		m_mem = mem;
//	}
//
//	//提供工作的函数
//	void work()
//	{
//		m_cpu->calculator();
//		m_vc->display();
//		m_mem->storage();
//	}
//
//	~Computer()
//	{
//		cout << "oyea!, 电脑零件被释放了..." << endl;
//		if (m_cpu != NULL)
//		{
//			delete m_cpu;
//			m_cpu = NULL;
//		}
//		if (m_vc != NULL)
//		{
//			delete m_vc;
//			m_vc = NULL;
//		}
//		if (m_mem != NULL)
//		{
//			delete m_mem;
//			m_mem = NULL;
//		}
//	}
//
//private:
//	CPU* m_cpu;  //CPU 的零件指针
//	VideoCard* m_vc;  //显卡零件指针
//	Memory* m_mem;  //内存条指针
//};
//
////Inter厂商
//class InterCPU :public CPU
//{
//public:
//	virtual void calculator()
//	{
//		cout << "Inter 的 CPU 开始计算了..." << endl;
//	}
//};
//
//class InterVideoCard :public VideoCard
//{
//	virtual void display()
//	{
//		cout << "Inter 的显卡开始显示了..." << endl;
//	}
//};
//
//class InterMemory :public Memory
//{
//	virtual void storage()
//	{
//		cout << "Inter 的内存条开始存东西了..." << endl;
//	}
//};
//
////Lenovo厂商
//class LenovoCPU :public CPU
//{
//public:
//	virtual void calculator()
//	{
//		cout << "Lenovo 的 CPU 开始计算了..." << endl;
//	}
//};
//
//class LenovoVideoCard :public VideoCard
//{
//	virtual void display()
//	{
//		cout << "Lenovo 的显卡开始显示了..." << endl;
//	}
//};
//
//class LenovoMemory :public Memory
//{
//	virtual void storage()
//	{
//		cout << "Lenovo 的内存条开始存东西了..." << endl;
//	}
//};
//
//void test01()
//{
//	CPU* intercpu = new InterCPU;
//	VideoCard* videocard = new InterVideoCard;
//	Memory* memory = new InterMemory;
//
//	cout << "创建第一台电脑" << endl;
//	Computer* computer1 = new Computer(intercpu, videocard, memory);
//	computer1->work();
//
//	cout << "-----------------" << endl;
//	cout << "创建第二台电脑" << endl;
//	Computer* computer2 = new Computer(new LenovoCPU, new InterVideoCard, new LenovoMemory);
//	computer2->work();
//
//	cout << "---  释放电脑1  ---" << endl;
//	delete computer1;
//	cout << "Done! delete computer1" << endl;
//
//	cout << "---  释放电脑2  ---" << endl;
//	delete computer2;
//	cout << "Done! delete computer2" << endl;
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}