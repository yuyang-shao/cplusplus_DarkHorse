#include<iostream>
using namespace std;
//1��new�Ļ����﷨
int* func()
{
	//�ڶ��������������� new���ص��Ǹ��������͵�ָ��
	int* p = new int(10);
	return p;
}
void test01()
{
	int* p = func();
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;
	//�����������ɳ���Ա�����٣�����Ա�����ͷ�
	//������ͷŶ��������ݣ����ùؼ��� delete
	delete p;
	cout << *p << endl;//�ڴ��Ѿ����ͷţ��ٴη��ʾ��ǷǷ�����
}
void test02()
{
	//����10�������ݵ����飬�ڶ���
	int *arr = new int[10];//10����������10��Ԫ��

	for (int i = 0; i < 10; i++)
	{
		arr[i] = i + 100;
	}
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << endl;
	}

	//�ͷŶ�������
	//�ͷ������ʱ��Ҫ��[]�ſ���
	delete[] arr;

}
int main()
{
	test01();
	return 0;
}