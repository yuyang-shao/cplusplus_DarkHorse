// #include<iostream>
// using namespace std;
// //�̳еĺô��������ظ�����
// //�﷨��class ���� ���̳з�ʽ ����
// //���� Ҳ��Ϊ ������
// //���� Ҳ��Ϊ ����
//
// //��ͨʵ��ҳ��
//
// //Javaҳ��
// // class Java
// // {
// // public:
// // 	void header()
// // 	{
// // 		cout << "��ҳ�������Ρ���¼��ע��...������ͷ����" << endl;
// // 	}
// // 	void footer()
// // 	{
// // 		cout << "��ҳ�������Ρ���¼��ע��...�������ײ���" << endl;
// // 	}
// // 	void left()
// // 	{
// // 		cout << "��ҳ�������Ρ���¼��ע��...�����������б�" << endl;
// // 	}
// // 	void content()
// // 	{
// // 		cout << "Javaѧ����Ƶ" << endl;
// // 	}
// // };
// // //C++ ҳ��
// // class CPP
// // {
// // public:
// // 	void header()
// // 	{
// // 		cout << "��ҳ�������Ρ���¼��ע��...������ͷ����" << endl;
// // 	}
// // 	void footer()
// // 	{
// // 		cout << "��ҳ�������Ρ���¼��ע��...�������ײ���" << endl;
// // 	}
// // 	void left()
// // 	{
// // 		cout << "��ҳ�������Ρ���¼��ע��...�����������б�" << endl;
// // 	}
// // 	void content()
// // 	{
// // 		cout << "C++ѧ����Ƶ" << endl;
// // 	}
// // };
// //
// // //Python ҳ��
// // class Python
// // {
// // public:
// // 	void header()
// // 	{
// // 		cout << "��ҳ�������Ρ���¼��ע��...������ͷ����" << endl;
// // 	}
// // 	void footer()
// // 	{
// // 		cout << "��ҳ�������Ρ���¼��ע��...�������ײ���" << endl;
// // 	}
// // 	void left()
// // 	{
// // 		cout << "��ҳ�������Ρ���¼��ע��...�����������б�" << endl;
// // 	}
// // 	void content()
// // 	{
// // 		cout << "Pythonѧ����Ƶ" << endl;
// // 	}
// // };
//
//
//
//
// //�̳�
// class BasePage
// {
// public:
// 	void header()
// 	{
// 		cout << "��ҳ�������Ρ���¼��ע��...������ͷ����" << endl;
// 	}
// 	void footer()
// 	{
// 		cout << "��ҳ�������Ρ���¼��ע��...�������ײ���" << endl;
// 	}
// 	void left()
// 	{
// 		cout << "��ҳ�������Ρ���¼��ע��...�����������б�" << endl;
// 	}
// };
//
// //Javeҳ��
// class Java:public BasePage
// {
// public:
// 	void content()
// 	{
// 		cout << "Java ѧ����Ƶ" << endl;
// 	}
// };
//
// class Python :public BasePage
// {
// public:
// 	void content()
// 	{
// 		cout << "Python ѧ����Ƶ" << endl;
// 	}
// };
//
// class CPP :public BasePage
// {
// public:
// 	void content()
// 	{
// 		cout << "CPP ѧ����Ƶ" << endl;
// 	}
// };
//
//
// void test01()
// {
// 	cout << "Java������Ƶҳ�����£�" << endl;
// 	Java ja;
//
// 	ja.header();
// 	ja.footer();
// 	ja.left();
// 	ja.content();
// 	cout << "----------------------" << endl;
// 	Python py;
//
// 	py.header();
// 	py.footer();
// 	py.left();
// 	py.content();
// 	cout << "----------------------" << endl;
// 	CPP cpp;
//
// 	cpp.header();
// 	cpp.footer();
// 	cpp.left();
// 	cpp.content();
// }
// int main()
// {
// 	test01();
// 	return 0;
// }