#include<iostream>
#include<string>
#include<deque>
#include<vector>
#include<algorithm>
using namespace std;

//������ѡ�֣�ѡ��ABCDE��10����ί�ֱ��ÿһ��ѡ�ִ�֣�ȥ����߷֣�ȥ����ί����ͷ֣�ȡƽ����

//ѡ����
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
		string name = "ѡ��";
		name += nameSeed[i];

		int score = 0;

		Person p(name, score);

		//��������person�������������
		v.push_back(p);
	}
}

void setScore(vector<Person>& v)
{
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		//����ί�ķ������뵽 deque ������
		cout << (*it).m_name << " �÷������" << endl;
		deque<int>d;
		for (int i = 0; i < 10; i++)
		{
			int score = rand() % 41 + 60; // 60 ~ 100
			cout <<  "  �� " << i << " ����ί���Ϊ: " << score << " ";
			d.push_back(score);
		}
		cout << endl;

		//����ȥ����߷�����ͷ�
		sort(d.begin(), d.end());
		d.pop_back();
		d.pop_front();

		//��ƽ����
		int sum = 0;
		for (deque<int>::iterator dit = d.begin(); dit != d.end(); dit++)
		{
			sum += *dit;  //�ۼ�ÿ����ί�ķ���
		}
		cout << "ȥ����߷�����ͷ֣��ۼ���ί���Ϊ��" << sum << endl;

		int avg = sum / d.size();
		cout << "ȥ����߷�����ͷ֣���ί���ƽ����Ϊ��" << avg << endl;
		cout << "\n" << endl;

		//��ƽ���ַŵ�ѡ������
		//it->m_score = avg;
		(*it).m_score = avg;
	}
}

int main()
{
	//�������
	srand((unsigned int)time(NULL));

	//1.����5��ѡ��
	vector<Person>v;
	createPerson(v);

	//for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	//{
	//	cout << "������" << (*it).m_name << " ������" << (*it).m_score << endl;
	//}

	//2.������ѡ���
	setScore(v);

	system("pause");
	system("cls");
	return 0;
}