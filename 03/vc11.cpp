//#include<iostream>
//#include<string>
//using namespace std;
//
//// �ú���ʵ��һЩ��Լ򵥵ĺ���
///*
//���õ�ʱ��о� MAX_NUM ���������
//�������Ǹ��꣬��������������ǣ�
//�ڱ���׶ξͽ���Ĵ���չ��ֱ���滻���ú�ĵط���
//����ʡȥ�˺������õ�ѹջ����ջ�ȿ�����
//����ִ��Ч�ʷ���Ҫ�Ⱥ����ߡ�
//���Ǻ궨��д�����Ƚ��Ѷȵ��ǲ���
//�����鷳һЩ�����Ҵ���Ŀ��Ķ��Ի��
//����C++��������inline����������ô��������
//��inline�ؼ��������ĺ����������ڵ��õ�ʱ��
//�������Ĵ���ֱ��Ƕ�뵽���õĵط���
//���Դ��ļ����˺������õĿ����������Ч��
//*/
//
//#define MAX_NUM(x, y)(x > y ? x : y)
//
//class Person
//{
//public:
//	Person(string name, int age, int num) {
//		this->name = name;
//		this->num = num;
//		this->age = age;
//	}
//private:
//	char sex;
//	int max_num(int x, int y);
//public:
//	int get_max_num(int a, int b, int c);
//	void print_name();
//	string name;
//	int num;
//	int age;
//};
//
//int Person::max_num(int x, int y) {
//	return x > y ? x : y;
//}
//
//int Person::get_max_num(int a, int b, int c) {
//	int max_ab = max_num(a, b);
//	return max_ab > c ? max_ab : c;
//}
//
//void Person::print_name() {
//	cout << "name: " << this->name << endl;
//}
//
//int main()
//{
//	int ret = MAX_NUM(2, 3);
//	cout << "MAX_NUM: " << ret << endl;
//
//	Person p("Jiang", 20, 20);
//	int max_abc = p.get_max_num(2, 4, 1);
//	cout << "max_abc: " << max_abc << endl;
//	p.print_name();
//	system("pause");
//	return 0;
//}