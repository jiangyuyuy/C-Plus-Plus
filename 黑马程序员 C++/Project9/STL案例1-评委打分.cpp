#include<iostream>
#include<string>
#include<deque>
#include<vector>
#include<algorithm>
using namespace std;

//有五名选手，选手ABCDE，10个评委分别对每一名选手打分，去除最高分，去除评委分最低分，取平均分

//选手类
class Person
{
public:
	Person(string name, int score)
	{
		this->m_name = name;
		this->m_score = score;
	}
	string m_name;
	int m_score;
};

void createPerson(vector<Person>& v)
{
	string nameSeed = "ABCDE";
	for (int i = 0; i < 5; i++)
	{
		string name = "选手";
		name += nameSeed[i];

		int score = 0;

		Person p(name, score);

		//将创建的person对象放入容器中
		v.push_back(p);
	}
}

void setScore(vector<Person>& v)
{
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		//将评委的分数放入到 deque 容器中
		cout << (*it).m_name << " 得分情况：" << endl;
		deque<int>d;
		for (int i = 0; i < 10; i++)
		{
			int score = rand() % 41 + 60; // 60 ~ 100
			cout <<  "  第 " << i << " 个评委打分为: " << score << " ";
			d.push_back(score);
		}
		cout << endl;

		//排序，去除最高分与最低分
		sort(d.begin(), d.end());
		d.pop_back();
		d.pop_front();

		//算平均分
		int sum = 0;
		for (deque<int>::iterator dit = d.begin(); dit != d.end(); dit++)
		{
			sum += *dit;  //累加每个评委的分数
		}
		cout << "去掉最高分与最低分，累计评委打分为：" << sum << endl;

		int avg = sum / d.size();
		cout << "去掉最高分与最低分，评委打分平均分为：" << avg << endl;
		cout << "\n" << endl;

		//将平均分放到选手身上
		//it->m_score = avg;
		(*it).m_score = avg;
	}
}

int main()
{
	//随机种子
	srand((unsigned int)time(NULL));

	//1.创建5名选手
	vector<Person>v;
	createPerson(v);

	//for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	//{
	//	cout << "姓名：" << (*it).m_name << " 分数：" << (*it).m_score << endl;
	//}

	//2.给五名选打分
	setScore(v);

	system("pause");
	system("cls");
	return 0;
}