// #include<iostream>
// using namespace std;
//
//
// //�����ǳ����
// class Person
// {
// public:
// 	Person()
// 	{
// 		cout << "Person��Ĭ�Ϲ��캯��" << endl;
// 	}
// 	Person(int age,int height)
// 	{
// 		m_Age = age;
// 		m_Height = new int(height);
// 		cout << "Person���вι��캯��" << endl;
// 		
// 	}
// 	Person(const Person &p)
// 	{
// 		m_Age = p.m_Age;
// 		// m_Height = p.m_Height;//ϵͳĬ��ʵ��
//
// 		//�������
// 		m_Height = new int(*p.m_Height); 
// 		cout << "Person �Ŀ������캯��" << endl;
// 	}
// 	~Person()
// 	{
// 		//�������룬�����������������ͷŲ���
// 		if(m_Height!=NULL)
// 		{
// 			delete m_Height;
// 			m_Height = NULL; 
// 		}
// 		cout << "Person��Ĭ����������" << endl;
// 	}
// 	int m_Age;
// 	int* m_Height;
// };
// void test01()
// {
// 	Person p1(18,160);
// 	cout << "p1������Ϊ��" << p1.m_Age << endl;
// 	cout << "p1�����Ϊ��" << *p1.m_Height << endl;
// 	Person p2(p1);
// 	cout << "p2������Ϊ��" << p2.m_Age << endl;
// 	cout << "p2�����Ϊ��" << *p2.m_Height << endl;
// }
// int main()
// {
// 	test01();
// 	return 0;
// }