#include<iostream>
using namespace std;

//������
//������

class Person
{
public:
	
	//this ָ��ı��� ��ָ�볣�� ָ���ָ���ǲ������޸ĵ�
	//const Person * const this
	//�ڳ�Ա���������const,���ε���thisָ����ָ��ָ���ֵҲ�������޸�
	void showPerson() const
	{
		this->m_B = 100;
		// this->m_A = 100;

		// this = NULL;
	}
	void func()
	{
		
	}
	int m_A;

	mutable int m_B;
};

void test01()
{
	Person p ;
	p.showPerson();

}

void test02()
{
	const Person p;  //�ڶ���ǰ��const����Ϊ������
	// p.m_A = 100;
	p.m_B = 100;  //m_B������ֵ���ڳ�������Ҳ�����޸�

	//������ֻ�ܵ��ó�����
	p.showPerson();
	// p.func();                 //������ �����Ե�����ͨ��Ա��������Ϊ��ͨ��Ա���������޸�����

}

int main()
{
	test02();
	return 0;
}