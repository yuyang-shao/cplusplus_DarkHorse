// #include<iostream>
// using namespace std;
//
// //1��������Ƴ�ͻ
// //2�����ض�������*this
// //
//
// class Person
// {
// public:
// 	Person(int age)
// 	{
// 		//thisָ��ָ�� �����õĳ�Ա���� �����Ķ���
// 		this->age = age;
// 	}
// 	Person& PersonAddAge(Person &p)  //ע�ⷵ��������
// 	{
// 		this->age += p.age;
// 		//this ָ��p2��ָ�룬*this����p2���������
// 		return *this;
// 	}
// 	int age;
// };
//
// //1 ������Ƴ�ͻ
// void test01()
// {
// 	Person p(18);
// 	
// 	cout << "p1������ = " <<p.age << endl;
// }
//
// //2 ���ض�������*this
// //
// void test02()
// {
// 	Person p1(10);
// 	Person p2(10);
//
// 	//��ʽ���˼��
// 	p2.PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1);
//
// 	cout << "p2������Ϊ = " << p2.age << endl;
// }
// int main()
// {
// 	test02();
// 	return 0;
// }