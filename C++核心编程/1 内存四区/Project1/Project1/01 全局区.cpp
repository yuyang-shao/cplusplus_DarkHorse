// #include<iostream>
// using namespace std;
//
//
// //ȫ�ֱ���
// int g_a = 10;
// int g_b = 10;
//
//
//
// const int c_g_c = 10;
// const int c_g_d = 10;
//
// int main()
// {
//
// 	//ȫ����
//
//
// 	//ȫ�ֱ�������̬����������
//
// 	//������ͨ�ֲ�����
// 	int a = 10;
// 	int b = 10;
//
// 	cout << "�ֲ�����a�ĵ�ַΪ" << (int)&a << endl;
// 	cout << "�ֲ�����b�ĵ�ַΪ" << (int)&b << endl;
// 	cout << "ȫ�ֱ���a�ĵ�ַΪ" << (int)&g_a << endl;
// 	cout << "ȫ�ֱ���b�ĵ�ַΪ" << (int)&g_b << endl;
//
//
//
// 	//��̬���� ����ͨ����ǰ���static
// 	static int s_a = 10;
// 	static int s_b = 10;
//
// 	cout << "��̬����a�ĵ�ַΪ" << (int)&s_a << endl;
// 	cout << "��̬����b�ĵ�ַΪ" << (int)&s_b << endl;
//
// 	//����
// 	//�ַ�������
// 	cout << "�ַ��������ĵ�ַΪ:" << (int)&"hello world" << endl;
//
// 	//const ���εı���
// 	//const ���ε�ȫ�ֱ���,const ���ξֲ�����
// 	cout << "ȫ�ֳ����ĵ�ַΪ:" << (int)&c_g_c << endl;
// 	cout << "ȫ�ֳ����ĵ�ַΪ:" << (int)&c_g_d << endl;
//
//
// 	const int c_l_a = 10;
// 	const int c_l_b = 20;
// 	cout << "�ֲ������ĵ�ַΪ:" << (int)&c_l_a << endl;
// 	cout << "�ֲ������ĵ�ַΪ:" << (int)&c_l_b << endl;
//
// 	return 0;
// }