// #include<iostream>
// using namespace std;
// //���캯���ĵ��ù���
// //1������һ���࣬c++��������Ϊÿ�����������3������
// //Ĭ�Ϲ��� ����ʵ�֣�
// //Ĭ����������ʵ�֣�
// //�������� ��ֵ������
//
//
// //2���������д���вι��캯�����������Ͳ����ṩĬ�Ϲ��죬��Ȼ�ṩ��������
// //�������д�˿������캯�����������Ͳ����ṩ������ͨ
//
// class Person
// {
// public:
// 	// Person()
// 	// {
// 	// 	cout << "Person��Ĭ�Ϲ��캯������" << endl;
// 	// }
// 	Person(int age)
// 	{
// 		cout << "Person���вι��캯������" << endl;
// 		m_Age = age;
// 	}
// 	// Person(const Person &p)
// 	// {
// 	// 	m_Age = p.m_Age;
// 	// 	cout << "Person�Ŀ������캯������" << endl;
// 	// }
// 	~Person()
// 	{
// 		cout << "Person��������������" << endl;
// 	}
// 	int m_Age;
// };
// // void test01()
// // {
// // 	Person p;
// // 	p.m_Age = 18;
// //
// // 	Person p2(p);
// // 	cout << "p2������Ϊ��" << p2.m_Age << endl;
// // }
// void test02()
// {
// 	Person p(18);
//
// 	Person p2 = p;
// }
// int main()
// {
// 	test02();
// 	return 0;
// }