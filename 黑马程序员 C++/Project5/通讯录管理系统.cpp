#include <iostream>
#include <string>
#define MAX 1000
using namespace std;

//设计联系人的结构体
struct Person
{
	string m_Name;
	//性别 1男 2女
	int m_Sex;
	int m_Age;
	string m_Phone;
	string m_Addr;
};

// 设计通讯录的结构体
struct Addressbooks
{
	//通讯录中保存的联系人数组
	struct Person personArray[MAX];

	//通讯录中当前记录联系人个数
	int m_Size;
};

//1.添加联系人
void addPerson(Addressbooks * abs)
{
	//判断通讯录是否满了
	if (abs->m_Size == MAX)
	{
		cout << "通讯录已满，无法添加！" << endl;
		return;
	}
	else
	{
		//添加具体联系人
		// 
		//姓名
		string name;
		cout << "请输入姓名：" << endl;
		cin >> name;
		abs->personArray[abs->m_Size].m_Name = name;

		//性别
		cout << "请输入性别：" << endl;
		cout << "1 - 男" << endl;
		cout << "2 - 女" << endl;
		int sex = 0;
		while (true)
		{
			cin >> sex;
			if (sex == 1 || sex == 2)  //或
			{
				abs->personArray[abs->m_Size].m_Sex = sex;
				break;
			}
			cout << "性别输入有误，请重新输入！" << endl;
		}

		//年龄
		cout << "请输入年龄：" << endl;
		int age = 0;
		while (true)
		{
			cin >> age;
			if (age > 0)
			{
				abs->personArray[abs->m_Size].m_Age = age;
				break;
			}
			cout << "年龄输入有误，请重新输入！" << endl;
		}

		//电话
		cout << "请输入电话号码：" << endl;
		string phone;
		while (true)
		{
			cin >> phone;
			if (phone.length() == 11)
			{
				abs->personArray[abs->m_Size].m_Phone = phone;
				break;
			}
			cout << "电话号码输入有误，请重新输入！" << endl;
		}

		//住址
		cout << "请输入家庭住址：" << endl;
		string address;
		cin >> address;
		abs->personArray[abs->m_Size].m_Addr = address;

		//更新通讯录人数
		abs->m_Size++;
		
		cout << "恭喜您，联系人添加成功！" << endl;
		system("pause");
		system("cls");
	}
}

//2.显示所有联系人
void showPerson(Addressbooks * abs)
{
	//判断通讯录人数是否为零
	if (abs->m_Size == 0)
	{
		cout << "当前记录为空" << endl;
	}
	else
	{
		for (int i = 0; i < abs->m_Size; i++)
		{
			cout << "姓名：" << abs->personArray[i].m_Name << "\t";
			cout << "性别：" << (abs->personArray[i].m_Sex == 1 ? "男":"女") << "\t";
			cout << "年龄：" << abs->personArray[i].m_Age << "\t";
			cout << "电话号码：" << abs->personArray[i].m_Phone << "\t";
			cout << "家庭住址：" << abs->personArray[i].m_Addr << endl;
		}
	}
	system("pause");
	system("cls");
}

//3.删除联系人,先要检测联系人是否存在，如果存在返回联系人所处的位置，不存在返回-1
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
	cout << "请输入您要删除的联系人：" << endl;
	string name;
	cin >> name;
	int ret = isExist(abs, name);
	if (ret != -1)
	{
		//查到此人，要进行删除操作
		for (int i = ret; i < abs->m_Size; i++)
		{
			abs->personArray[i] = abs->personArray[i + 1];
		}
		abs->m_Size--;
		cout << "删除成功！" << endl;
	}
	else
	{
		cout << "没有此联系人！" << endl;
	}
	system("pause");
	system("cls");
}

//4.查找联系人
void findPerson(Addressbooks* abs)
{
	cout << "请输入您要查找的联系人：" << endl;
	string name;
	cin >> name;
	int ret = isExist(abs, name);
	if (ret != -1)
	{
		cout << "姓名：" << abs->personArray[ret].m_Name << "\t";
		cout << "性别：" << (abs->personArray[ret].m_Age == 1 ? "男":"女") << "\t";
		cout << "年龄：" << abs->personArray[ret].m_Age << "\t";
		cout << "电话号码：" << abs->personArray[ret].m_Phone << "\t";
		cout << "家庭住址：" << abs->personArray[ret].m_Addr << endl;
	}
	else
	{
		cout << "未找到此联系人！" << endl;
	}
	system("pause");
	system("cls");
}

//5.修改联系人
void modifyPerson(Addressbooks* abs)
{
	cout << "请输入您要修改的联系人姓名：" << endl;
	string name;
	cin >> name;
	int ret = isExist(abs, name);
	if (ret != -1)
	{
		string name;
		cout << "请输入新的姓名：" << endl;
		cin >> name;
		abs->personArray[ret].m_Name = name;

		cout << "请输入要更改的性别：" << endl;
		cout << "1--男" << endl;
		cout << "2--女" << endl;
		int sex = 0;
		while (true)
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->personArray[ret].m_Sex = sex;
				break;
			}
			cout << "性别输入错误！请重新输入。" << endl;
		}

		int age = 0;
		cout << "请输入新的年龄：" << endl;
		cin >> age;
		abs->personArray[ret].m_Age = age;

		string phone;
		cout << "请输入新的电话号码：" << endl;
		cin >> phone;
		abs->personArray[ret].m_Phone = phone;

		string addr;
		cout << "请输入新的家庭住址：" << endl;
		cin >> addr;
		abs->personArray[ret].m_Addr = addr;
		cout << "联系人信息修改成功！" << endl;
	}
	else
	{
		cout << "为查找此联系人！" << endl;
	}
	system("pause");
	system("cls");
}

//6.清空联系人
void cleanPerson(Addressbooks* abs)
{
	cout << "您确定要清空通讯录吗？(Y / N)" << endl;
	string iden;
	cin >> iden;
	if (iden == "Y")
	{
		abs->m_Size = 0;
		cout << "通讯录已经清空！" << endl;
	}
	else if (iden == "N")
	{
		cout << "清空通讯录操作已取消！" << endl;
	}
	else
	{
		cout << "您输入错误！请输入 Y 或者 N " << endl;
	}
	system("pause");
	system("cls");

}

//菜单界面
void showMenu()
{
	cout << "************************" << endl;
	cout << "***** 1.添加联系人 *****" << endl;
	cout << "***** 2.显示联系人 *****" << endl;
	cout << "***** 3.删除联系人 *****" << endl;
	cout << "***** 4.查找联系人 *****" << endl;
	cout << "***** 5.修改联系人 *****" << endl;
	cout << "***** 6.清空联系人 *****" << endl;
	cout << "***** 0.退出通讯录 *****" << endl;
	cout << "************************" << endl;
}

int main()
{
	//创建通讯录结构体变量
	Addressbooks abs;
	//初始化通讯录中存在人数个数
	abs.m_Size = 0;

	//创建用户选择输入的变量
	int select = 0;
	while (true)
	{
		showMenu();
		cin >> select;
		switch (select)
		{
		case 1: //添加联系人
			addPerson(&abs);
			break;
		case 2: //显示联系人
			showPerson(&abs);
			break;
		case 3: //删除联系人
			deletePerson(&abs);
			break;
		case 4: //查找联系人
			findPerson(&abs);
			break;
		case 5: //修改联系人
			modifyPerson(&abs);
			break;
		case 6: //清空联系人
			cleanPerson(&abs);
			break;
		case 0: //退出通讯录
			cout << "欢迎下次使用！" << endl;
			system("pause");
			return 0;
			break;
		}
	}
	system("pause");
	return 0;
}