#include<iostream>
using namespace std;
#include<string>
//�����������������
//��ӡ�����
class MyPrint
{
public:
	//���غ������������
	void operator()(string test)
	{
		cout << test << endl;
	}
};
void MyPrint02(string test)
{
	cout << test << endl;
}
void test01()
{
	MyPrint myPrint;

	myPrint("Hello world");
	MyPrint02("Hello world");
}
//�º����ǳ���û�й̶���д��
//�ӷ���
class MyAdd
{
public:

	int operator()(int num1,int num2)
	{
		return num1 + num2;
	}
};
void test02()
{
	MyAdd myadd;
	int ret = myadd(100, 100);
	cout << "ret = " << ret << endl;


	//������������   MyAdd()��������
	cout << MyAdd()(100, 100) << endl;
}
int main()
{
	test02();
	return 0;
}