// #include<iostream>
// using namespace std;
// //����Ĭ�ϲ���
// //����Լ����룬�����Լ������ݣ�û��Ĭ��
// //�﷨:����ֵ���� ���������β� = Ĭ��ֵ��{}
// int func(int a,int b = 20,int c = 30)
// {
// 	return a + b + c;
// }
// //ע������
// //1�����ĳ��λ���Ѿ�����Ĭ�ϲ�������ô�����λ�����󣬴����Ҷ�������Ĭ��ֵ
// // int func2(int a,int b,int c =10,int d)
// // {
// // 	return a + b + c;
// // }
// //2���������������Ĭ�ϲ���������ʵ�־Ͳ�����Ĭ�ϲ���
// //������ʵ��ֻ����һ��Ĭ�ϲ���
// int func2(int a, int b);
//
// int func2(int a = 10, int b = 10)
// {
// 	return a + b;
// }
// int main()
// {
// 	cout << func2(10,10) << endl;
// 	return 0;
// }