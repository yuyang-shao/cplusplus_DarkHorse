// #include<iostream>
// using namespace std;
//
//
// //深拷贝与浅拷贝
// class Person
// {
// public:
// 	Person()
// 	{
// 		cout << "Person的默认构造函数" << endl;
// 	}
// 	Person(int age,int height)
// 	{
// 		m_Age = age;
// 		m_Height = new int(height);
// 		cout << "Person的有参构造函数" << endl;
// 		
// 	}
// 	Person(const Person &p)
// 	{
// 		m_Age = p.m_Age;
// 		// m_Height = p.m_Height;//系统默认实现
//
// 		//深拷贝操作
// 		m_Height = new int(*p.m_Height); 
// 		cout << "Person 的拷贝构造函数" << endl;
// 	}
// 	~Person()
// 	{
// 		//析构代码，将堆区开辟数据做释放操作
// 		if(m_Height!=NULL)
// 		{
// 			delete m_Height;
// 			m_Height = NULL; 
// 		}
// 		cout << "Person的默认析构函数" << endl;
// 	}
// 	int m_Age;
// 	int* m_Height;
// };
// void test01()
// {
// 	Person p1(18,160);
// 	cout << "p1的年龄为：" << p1.m_Age << endl;
// 	cout << "p1的身高为：" << *p1.m_Height << endl;
// 	Person p2(p1);
// 	cout << "p2的年龄为：" << p2.m_Age << endl;
// 	cout << "p2的身高为：" << *p2.m_Height << endl;
// }
// int main()
// {
// 	test01();
// 	return 0;
// }