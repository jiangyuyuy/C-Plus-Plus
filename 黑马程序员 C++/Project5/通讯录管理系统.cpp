#include <iostream>
#include <string>
#define MAX 1000
using namespace std;

//�����ϵ�˵Ľṹ��
struct Person
{
	string m_Name;
	//�Ա� 1�� 2Ů
	int m_Sex;
	int m_Age;
	string m_Phone;
	string m_Addr;
};

// ���ͨѶ¼�Ľṹ��
struct Addressbooks
{
	//ͨѶ¼�б������ϵ������
	struct Person personArray[MAX];

	//ͨѶ¼�е�ǰ��¼��ϵ�˸���
	int m_Size;
};

//1.�����ϵ��
void addPerson(Addressbooks * abs)
{
	//�ж�ͨѶ¼�Ƿ�����
	if (abs->m_Size == MAX)
	{
		cout << "ͨѶ¼�������޷���ӣ�" << endl;
		return;
	}
	else
	{
		//��Ӿ�����ϵ��
		// 
		//����
		string name;
		cout << "������������" << endl;
		cin >> name;
		abs->personArray[abs->m_Size].m_Name = name;

		//�Ա�
		cout << "�������Ա�" << endl;
		cout << "1 - ��" << endl;
		cout << "2 - Ů" << endl;
		int sex = 0;
		while (true)
		{
			cin >> sex;
			if (sex == 1 || sex == 2)  //��
			{
				abs->personArray[abs->m_Size].m_Sex = sex;
				break;
			}
			cout << "�Ա������������������룡" << endl;
		}

		//����
		cout << "���������䣺" << endl;
		int age = 0;
		while (true)
		{
			cin >> age;
			if (age > 0)
			{
				abs->personArray[abs->m_Size].m_Age = age;
				break;
			}
			cout << "���������������������룡" << endl;
		}

		//�绰
		cout << "������绰���룺" << endl;
		string phone;
		while (true)
		{
			cin >> phone;
			if (phone.length() == 11)
			{
				abs->personArray[abs->m_Size].m_Phone = phone;
				break;
			}
			cout << "�绰���������������������룡" << endl;
		}

		//סַ
		cout << "�������ͥסַ��" << endl;
		string address;
		cin >> address;
		abs->personArray[abs->m_Size].m_Addr = address;

		//����ͨѶ¼����
		abs->m_Size++;
		
		cout << "��ϲ������ϵ����ӳɹ���" << endl;
		system("pause");
		system("cls");
	}
}

//2.��ʾ������ϵ��
void showPerson(Addressbooks * abs)
{
	//�ж�ͨѶ¼�����Ƿ�Ϊ��
	if (abs->m_Size == 0)
	{
		cout << "��ǰ��¼Ϊ��" << endl;
	}
	else
	{
		for (int i = 0; i < abs->m_Size; i++)
		{
			cout << "������" << abs->personArray[i].m_Name << "\t";
			cout << "�Ա�" << (abs->personArray[i].m_Sex == 1 ? "��":"Ů") << "\t";
			cout << "���䣺" << abs->personArray[i].m_Age << "\t";
			cout << "�绰���룺" << abs->personArray[i].m_Phone << "\t";
			cout << "��ͥסַ��" << abs->personArray[i].m_Addr << endl;
		}
	}
	system("pause");
	system("cls");
}

//3.ɾ����ϵ��,��Ҫ�����ϵ���Ƿ���ڣ�������ڷ�����ϵ��������λ�ã������ڷ���-1
int isExist(Addressbooks* abs, string name)
{
	for (int i = 0; i < abs->m_Size; i++)
	{
		if (abs->personArray[i].m_Name == name)
		{
			return i;
		}
	}
	return -1;
}

void deletePerson(Addressbooks* abs)
{
	cout << "��������Ҫɾ������ϵ�ˣ�" << endl;
	string name;
	cin >> name;
	int ret = isExist(abs, name);
	if (ret != -1)
	{
		//�鵽���ˣ�Ҫ����ɾ������
		for (int i = ret; i < abs->m_Size; i++)
		{
			abs->personArray[i] = abs->personArray[i + 1];
		}
		abs->m_Size--;
		cout << "ɾ���ɹ���" << endl;
	}
	else
	{
		cout << "û�д���ϵ�ˣ�" << endl;
	}
	system("pause");
	system("cls");
}

//4.������ϵ��
void findPerson(Addressbooks* abs)
{
	cout << "��������Ҫ���ҵ���ϵ�ˣ�" << endl;
	string name;
	cin >> name;
	int ret = isExist(abs, name);
	if (ret != -1)
	{
		cout << "������" << abs->personArray[ret].m_Name << "\t";
		cout << "�Ա�" << (abs->personArray[ret].m_Age == 1 ? "��":"Ů") << "\t";
		cout << "���䣺" << abs->personArray[ret].m_Age << "\t";
		cout << "�绰���룺" << abs->personArray[ret].m_Phone << "\t";
		cout << "��ͥסַ��" << abs->personArray[ret].m_Addr << endl;
	}
	else
	{
		cout << "δ�ҵ�����ϵ�ˣ�" << endl;
	}
	system("pause");
	system("cls");
}

//5.�޸���ϵ��
void modifyPerson(Addressbooks* abs)
{
	cout << "��������Ҫ�޸ĵ���ϵ��������" << endl;
	string name;
	cin >> name;
	int ret = isExist(abs, name);
	if (ret != -1)
	{
		string name;
		cout << "�������µ�������" << endl;
		cin >> name;
		abs->personArray[ret].m_Name = name;

		cout << "������Ҫ���ĵ��Ա�" << endl;
		cout << "1--��" << endl;
		cout << "2--Ů" << endl;
		int sex = 0;
		while (true)
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->personArray[ret].m_Sex = sex;
				break;
			}
			cout << "�Ա�����������������롣" << endl;
		}

		int age = 0;
		cout << "�������µ����䣺" << endl;
		cin >> age;
		abs->personArray[ret].m_Age = age;

		string phone;
		cout << "�������µĵ绰���룺" << endl;
		cin >> phone;
		abs->personArray[ret].m_Phone = phone;

		string addr;
		cout << "�������µļ�ͥסַ��" << endl;
		cin >> addr;
		abs->personArray[ret].m_Addr = addr;
		cout << "��ϵ����Ϣ�޸ĳɹ���" << endl;
	}
	else
	{
		cout << "Ϊ���Ҵ���ϵ�ˣ�" << endl;
	}
	system("pause");
	system("cls");
}

//6.�����ϵ��
void cleanPerson(Addressbooks* abs)
{
	cout << "��ȷ��Ҫ���ͨѶ¼��(Y / N)" << endl;
	string iden;
	cin >> iden;
	if (iden == "Y")
	{
		abs->m_Size = 0;
		cout << "ͨѶ¼�Ѿ���գ�" << endl;
	}
	else if (iden == "N")
	{
		cout << "���ͨѶ¼������ȡ����" << endl;
	}
	else
	{
		cout << "��������������� Y ���� N " << endl;
	}
	system("pause");
	system("cls");

}

//�˵�����
void showMenu()
{
	cout << "************************" << endl;
	cout << "***** 1.�����ϵ�� *****" << endl;
	cout << "***** 2.��ʾ��ϵ�� *****" << endl;
	cout << "***** 3.ɾ����ϵ�� *****" << endl;
	cout << "***** 4.������ϵ�� *****" << endl;
	cout << "***** 5.�޸���ϵ�� *****" << endl;
	cout << "***** 6.�����ϵ�� *****" << endl;
	cout << "***** 0.�˳�ͨѶ¼ *****" << endl;
	cout << "************************" << endl;
}

int main()
{
	//����ͨѶ¼�ṹ�����
	Addressbooks abs;
	//��ʼ��ͨѶ¼�д�����������
	abs.m_Size = 0;

	//�����û�ѡ������ı���
	int select = 0;
	while (true)
	{
		showMenu();
		cin >> select;
		switch (select)
		{
		case 1: //�����ϵ��
			addPerson(&abs);
			break;
		case 2: //��ʾ��ϵ��
			showPerson(&abs);
			break;
		case 3: //ɾ����ϵ��
			deletePerson(&abs);
			break;
		case 4: //������ϵ��
			findPerson(&abs);
			break;
		case 5: //�޸���ϵ��
			modifyPerson(&abs);
			break;
		case 6: //�����ϵ��
			cleanPerson(&abs);
			break;
		case 0: //�˳�ͨѶ¼
			cout << "��ӭ�´�ʹ�ã�" << endl;
			system("pause");
			return 0;
			break;
		}
	}
	system("pause");
	return 0;
}