// #include<iostream>
// using namespace std;
//
// //�������캯������ʱ��
// //1��ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���¶���
// //2��ֵ���ݵķ�ʽ������������ֵ
// //3��ֵ��ʽ���ؾֲ�����
// //
// //
//
// class Person
// {
// public:
// 	//���캯��
// 	Person()
// 	{
// 		cout << "Person��Ĭ�Ϲ��캯������" << endl;
// 	}
//
// 	Person(int a)
// 	{
// 		m_Age = a;
// 		cout << "Person���вι��캯������" << endl;
// 	}
// 	~Person()
// 	{
// 		cout << "Person�����������ĵ���" << endl;
// 	}
//
// 	Person(const Person& p)
// 	{
// 		//������������ϵ��������ԣ�������������
// 		m_Age = p.m_Age;
// 		cout << "Person�Ŀ������캯���ĵ���" << endl;
// 	}
// 	int m_Age;
// };
// //����
// //1��ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���¶���
//
// void test01()
// {
// 	Person p1(20);
// 	Person p2(p1);
// 	cout << "P2������Ϊ��" << p2.m_Age << endl;
// }
// //2��ֵ���ݵķ�ʽ������������ֵ
// void doWork(Person p)
// {
// 	
// }
// void test02()
// {
// 	Person p;
// 	doWork(p);
// }
// //3��ֵ��ʽ���ؾֲ�����
// Person doWork2()
// {
// 	Person p1;
// 	cout << (int*)&p1 << endl;
// 	return p1;
// }
// void test03()
// {
// 	Person p = doWork2();
// 	cout << (int*)&p << endl;
// }
//
// int main()
// {
// 	test03();
// 	return 0;
// }