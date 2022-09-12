//#include<iostream>
//#include<string>
//using namespace std;
//
////����CPU��
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
////������
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
//	//�ṩ�����ĺ���
//	void work()
//	{
//		m_cpu->calculator();
//		m_vc->display();
//		m_mem->storage();
//	}
//
//	~Computer()
//	{
//		cout << "oyea!, ����������ͷ���..." << endl;
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
//	CPU* m_cpu;  //CPU �����ָ��
//	VideoCard* m_vc;  //�Կ����ָ��
//	Memory* m_mem;  //�ڴ���ָ��
//};
//
////Inter����
//class InterCPU :public CPU
//{
//public:
//	virtual void calculator()
//	{
//		cout << "Inter �� CPU ��ʼ������..." << endl;
//	}
//};
//
//class InterVideoCard :public VideoCard
//{
//	virtual void display()
//	{
//		cout << "Inter ���Կ���ʼ��ʾ��..." << endl;
//	}
//};
//
//class InterMemory :public Memory
//{
//	virtual void storage()
//	{
//		cout << "Inter ���ڴ�����ʼ�涫����..." << endl;
//	}
//};
//
////Lenovo����
//class LenovoCPU :public CPU
//{
//public:
//	virtual void calculator()
//	{
//		cout << "Lenovo �� CPU ��ʼ������..." << endl;
//	}
//};
//
//class LenovoVideoCard :public VideoCard
//{
//	virtual void display()
//	{
//		cout << "Lenovo ���Կ���ʼ��ʾ��..." << endl;
//	}
//};
//
//class LenovoMemory :public Memory
//{
//	virtual void storage()
//	{
//		cout << "Lenovo ���ڴ�����ʼ�涫����..." << endl;
//	}
//};
//
//void test01()
//{
//	CPU* intercpu = new InterCPU;
//	VideoCard* videocard = new InterVideoCard;
//	Memory* memory = new InterMemory;
//
//	cout << "������һ̨����" << endl;
//	Computer* computer1 = new Computer(intercpu, videocard, memory);
//	computer1->work();
//
//	cout << "-----------------" << endl;
//	cout << "�����ڶ�̨����" << endl;
//	Computer* computer2 = new Computer(new LenovoCPU, new InterVideoCard, new LenovoMemory);
//	computer2->work();
//
//	cout << "---  �ͷŵ���1  ---" << endl;
//	delete computer1;
//	cout << "Done! delete computer1" << endl;
//
//	cout << "---  �ͷŵ���2  ---" << endl;
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