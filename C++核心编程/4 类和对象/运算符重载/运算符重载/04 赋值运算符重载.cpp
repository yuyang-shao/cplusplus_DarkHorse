#include<iostream>
using namespace std;

//���ظ�ֵ�����
//�Զ�������
class MyInteger
{
	friend ostream& operator<<(ostream& cout, MyInteger myint);
public:
	MyInteger()
	{
		m_Num = 0;
	}
	//����ǰ��++����� ��������Ϊ��һֱ��һ������
	MyInteger& operator++()
	{
		//�Ƚ���++�����
		m_Num++;
		return *this;
	}
	//���غ���++�����
	//void operator++(int) int ����ռλ������������������ǰ�úͺ��õ���
	MyInteger operator++(int)
	{
		//�� ��¼��ʱ���
		MyInteger temp = *this;
		//�� ����
		m_Num++;
		//��󽫼�¼�������
		return temp;

	}

private:
	int m_Num;
};
//����<<�����
ostream& operator<<(ostream & cout,MyInteger myint)
{
	cout << myint.m_Num;
	return cout;
}
void test01()
{
	MyInteger myint;
	cout << ++(++myint) << endl;
	cout << myint << endl;
}
void test02()
{
	MyInteger myint;
	cout << myint++ << endl;
	cout << myint << endl;
}
int main()
{
	test02();
	// int a = 0;
	// cout << ++(++a) << endl;
	// cout << a << endl;
	return 0;
}