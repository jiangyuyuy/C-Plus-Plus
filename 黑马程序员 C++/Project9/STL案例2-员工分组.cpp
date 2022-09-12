#include<iostream>
#include<map>
#include<string>
#include<vector>
#include<map>
#include<ctime>
using namespace std;

//定义宏
#define CEHUA  0
#define MEISHU 1
#define YANFA  2

class Worker
{
public:
	string m_name;
	int m_salary;
};

void createWorker(vector<Worker>& v)
{
	string nameSeed = "ABCDEFGHIJ";
	for (int i = 0; i < 10; i++)
	{
		Worker worker;
		worker.m_name = "员工";
		worker.m_name += nameSeed[i];

		worker.m_salary = rand() % 10000 + 10000;  //10000~19999

		//将员工放到容器中
		v.push_back(worker);
	}
}

void setGroup(vector<Worker>& v, multimap<int, Worker>& m)
{
	for (vector<Worker>::iterator it = v.begin(); it != v.end(); it++)
	{
		int deptId = rand() % 3;  //0 1 2

		//将员工插入到分组中
		m.insert(make_pair(deptId, *it));
	}
}

void showWorkerByGroup(multimap<int, Worker>& m)
{
	cout << "策划部门：" << endl;

	multimap<int, Worker>::iterator pos = m.find(CEHUA);
	int count = m.count(CEHUA);

	int index = 0;
	for (; pos != m.end() && index < count; pos++, index++)
	{
		cout << "姓名：" << pos->second.m_name << " 薪水: " << pos->second.m_salary << endl;
	}
	cout << "--------------------------" << endl;

	cout << "美术部门：" << endl;

	multimap<int, Worker>::iterator pos1 = m.find(MEISHU);
	int count1 = m.count(MEISHU);

	int index1 = 0;
	for (; pos1 != m.end() && index1 < count1; pos1++, index1++)
	{
		cout << "姓名：" << pos1->second.m_name << " 薪水: " << pos1->second.m_salary << endl;
	}
	cout << "--------------------------" << endl;

	cout << "研发部门：" << endl;

	multimap<int, Worker>::iterator pos2 = m.find(YANFA);
	int count2 = m.count(YANFA);

	int index2 = 0;
	for (; pos2 != m.end() && index2 < count2; pos2++, index2++)
	{
		cout << "姓名：" << pos2->second.m_name << " 薪水: " << pos2->second.m_salary << endl;
	}
}

void test01()
{
	srand((unsigned int)time(NULL));
	//1.创建员工
	vector<Worker>vWorker;
	createWorker(vWorker);

	//测试
	for (vector<Worker>::iterator it = vWorker.begin(); it != vWorker.end(); it++)
	{
		cout << "姓名：" << (*it).m_name << " 薪水: " << (*it).m_salary << endl;
	}
	cout << endl;

	//2.员工分组
	multimap<int, Worker>mWorker;
	setGroup(vWorker, mWorker);

	//3.分组显示员工
	showWorkerByGroup(mWorker);

}

int main()
{
	test01();
	system("pause");
	return 0;
}