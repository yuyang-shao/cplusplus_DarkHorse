/*
 * Hello World
 */
// #include<iostream>
// using namespace std;
// int main()
// {
// 	cout << "Hello World" << endl;
//
// 	return 0;
// }


/*
 * ����
 */
// #include<iostream>
// using namespace std;
// int main()
// {
// 	int a = 10;
// 	cout << "a = " << a << endl;
// 	return 0;
// }

/*
 * ����
 * define const
 */
// #include<iostream>
// using namespace std;
// #define Day 7 
// int main()
// {
// 	cout << "һ���ܹ��У�" << Day << "��" << endl;
//
// 	const  int month = 12;
// 	// month = 24;
// 	cout << "һ���ܹ��У�" << month << "��" << endl;
// 	return 0;
//
// }
/*
 * ��ʶ����������
 */
/*
 * 2 ��������
 */
// #include<iostream>
// #include<string>
// using namespace std;
// int main()
// {
// 	/*
// 	 * ʵ��
// 	 */
// 	float a = 3.14f;
// 	float f2 = 3e2;
// 	float f3 = 3e-2;
//
// 	cout << a << endl;
// 	cout << f2 << endl;
// 	cout << f3 << endl;
//
//
// 	/*
// 	 * �ַ�
// 	 */
//
// 	char ch = 'a';
// 	
// 	cout << ch << endl;
// 	ch = 97;
// 	cout << ch << endl;
// 	cout << "char�ַ��ͣ�" << sizeof(char) << endl;
//
// 	// char ch2 = "b";   ������˫����
// 	// char ch2 = 'asdasf';
// 	cout << (int)ch << endl;
//
// 	cout << "aaa\tb" << endl;   //�Ʊ�� 8λ
//
//
// 	
// 	/*�ַ���
// 	 *1��C��� char �ַ�����[]  ��˫����
// 	 *2��C++���
// 	 */
// 	char str[] = "hello world";
// 	cout << str << endl;
//
// 	string str2 = "hello world";
// 	cout << str2 << endl;
//
// 	/*
// 	 * ��������bool
// 	 */
//
// 	bool flag = true;
// 	cout << flag << endl;
//
// 	flag = false;
// 	cout << flag << endl;
//
// 	cout << "bood������ռ�ռ�" << sizeof(bool) << endl;
//
//
//
// 	/*
// 	* 2.8���ݵ�����
// 	* cin >> ����
// 	*/
// 	//1.����
// 	// int m = 0;
// 	// cout << "������a��ֵ" << endl;
// 	// cin >> m;
// 	// cout << "a = " << m << endl;
// 	//2.������
// 	// float f = 3.14f;
// 	// cout << "������f��ֵ" << endl;
// 	// cin >> f;
// 	// cout << "������f=" << f << endl;
// 	//3.�ַ���
// 	// char ch3 = 'a';
// 	// cout << "����ch3" << endl;
// 	// cin >> ch3;
// 	// cout << "ch=" <<ch3<< endl;
//
// 	//4.�ַ���
// 	// string  str3 = "hello ";
// 	// cout << "������str" << endl;
// 	// cin >> str3;
// 	// cout << "str3=" << str3 << endl;
//
// 	//5.��������
// 	// bool flag1 = false;
// 	// cout << "�����������flag��ֵ"  << endl;
// 	// cin >> flag1;  //��0 Ϊ1
// 	// cout << "��������flag = " <<flag1<< endl;
//
//
//
//
//
// 	return 0;
// }
/*
 *3�� �����
 */

// #include<iostream>
// using namespace std;
// int main()
// {
// 	/*
// 	 * �Ӽ��˳�
// 	 */
// 	int a1 = 10;
// 	int b1 = 3;
//
// 	cout << a1 + b1 << endl;
// 	cout << a1 - b1 << endl;
// 	cout << a1 * b1 << endl;
// 	cout << a1 / b1 << endl;
//
// 	int a2 = 10;
// 	int b2 = 20;
// 	cout << a2 / b2 << endl;
//
//
//
// 	int a3 = 10;
// 	int b3 = 0;
// 	// cout << a3 / b3 << endl;
//
// 	//����С���������
// 	double d1 = 0.5;
// 	double d2 = 0.22;
// 	cout << d1 / d2 << endl;
//
//
//
// 	/*
// 	 *ȡģ����
// 	 */
//
//
// 	int a5 = 10;
// 	int b5 = 3;
// 	cout << a5 % b5 << endl;
//
// 	int a6 = 10;
// 	int b6 = 20;
// 	cout << a6 % b6 << endl;
//
//
// 	int a7 = 10;
// 	int b7 = 0;
// 	// cout << a7 % b7 << endl;//�쳣
//
// 	//����С��������ȡģ
//
//
//
// 	/*
// 	 * �����ݼ�
// 	 */
//
// 	//1.ǰ�õ���
// 	int a = 10;
// 	++a;
// 	cout << "a = " << a << endl;
// 	//2.���õ���
// 	int b = 10;
// 	b++;
// 	cout << "b = " << b << endl;
// 	//3.���� ++a �ȼӼӣ�b++ ��Ӽ�
//
//
//
// 	/*
// 	 * ��ֵ����
// 	 */
// 	int a10 = 10;
// 	a10 = 100;
// 	cout << "a10 = " << a10 << endl;
//
// 	a10 = 10;
//
// 	a10 *= 2;
// 	cout << "a10 = " << a10 << endl;
// 	a10 /= 2;
// 	cout << "a10 = " << a10 << endl;
// 	a10 %= 2;
// 	cout << "a10 = " << a10 << endl;
//
// 	a10 -= 2;
// 	cout << "a10 = " << a10 << endl;
//
//
// 	/*
// 	 * �Ƚ������ == != > < >= <=
// 	 */
// 	/*
// 	 * �߼������
// 	 */
// 	return 0;
//
// }
/*
 * 4. �������̽ṹ
 * switch
 */
//  #include<iostream>
//  using namespace std;
//  int main()
//  {
//      //��Ŀ�����
//  	int a = 10;
//     int b = 20;
//     int c = 0;
//
//
//     c = (a > b ? a : b);
//     cout << "c=" << c << endl;
//
//
//     //��C++����Ŀ��������ص��Ǳ��������Լ�����ֵ
//     (a > b ? a : b) = 100;
//     cout << "a=" << a << endl;
//     cout << "b=" << b << endl;
//
//
//
//     /*
//      * 4.1.3 switch���
//      */
//
//     int score;
//     cout << "���������֣�" << endl;
//     cin >> score;
//     switch(score){
// 	    case 10:
//             cout << "����Ϊ�Ǿ����Ӱ" << endl;
//             break;
//         case 9:
//             cout << "9��" << endl;
//             cout << "9��" << endl;
//             break;
//     }
//
//     /*
//      * goto���
//      */
//     cout << "1.xxx" << endl;
//     cout << "2.xxx" << endl;
//     goto Flag;
//     
//     cout << "3.xxxx" << endl;
// Flag:
//     cout << "4.xxx" << endl;
//
//  	return 0;
//  }
/*
 * 5������
 */
// #include<iostream>
// using namespace std;
// int main()
// {
//
// 	int arr[5];
//
// 	arr[0] = 10;
// 	arr[1] = 20;
// 	arr[2] = 30;
// 	arr[3] = 40;
// 	arr[4] = 50;
//
// 	for (int i = 0; i < 5; i++)
// 	{
// 		cout << arr[i] << endl;
// 	}
//
// 	int arr2[5] = { 10,20,30,40 };
// 	for (int i = 0; i < 5; i++)
// 	{
// 		cout << arr2[i] << endl;
// 	}
// 	//��������ʱ�����г�ʼ����
// 	int arr3[] = { 90,80,60,40,50 };
// 	for (int i = 0; i < 5; i++)
// 	{
// 		cout << arr3[i] << endl;
// 	}
//
//
// 	/*
// 	 * ��������;
// 	 * 1��ͨ��������ͳ����������ռ���ڴ��С
// 	 */
// 	int arr4[10] = { 1,2,3,4,5,6,7,8,9,10 };
// 	cout << "��������ռ���ڴ�ռ�Ϊ:" << sizeof(arr4) << endl;
// 	cout << "ÿ��Ԫ��ռ���ڴ�ռ�Ϊ��" << sizeof(arr4[0]) << endl;
// 	cout << "������Ԫ�ظ���Ϊ��" << sizeof(arr4) / sizeof(arr4[0]) << endl;
// 	//2.ͨ���������鿴�����׵�ַ
// 	cout << "�����׵�ַΪ��" << arr4 <<endl;
// 	cout << "�����е�һ��Ԫ�ص�ַΪ��" << &arr4[0] <<endl;
// 	cout << "�����еڶ���Ԫ�ص�ַΪ��" << &arr4[1] <<endl;
//
//
// 	//������ʱ�����������Խ��и�ֵ����
// 	//arr4 = 100;
// 	/*
// 	 * ��ֻС���=������
// 	 */
//
// 	/*
// 	 * ð������
// 	 */
// 	int array[5] = { 10,5,70,80 };
// 	for (int i = 5; i > 1; i--)
// 	{
// 		int flag = 1;
// 		for (int j = 0; j < i - 1; j++)
// 		{
// 			if(array[j]>array[j+1])
// 			{
// 				int temp = array[j+1];
// 				array[j + 1] = array[j];
// 				array[j] = temp;
// 				flag = 0;
// 			}
// 		}
// 		if (flag)
// 			break;
// 	}
//
// 	for(int i = 0;i<5;i++)
// 	{
// 		cout << array[i] << endl;
// 	}
//
// 	/*
// 	 * 5.3��ά����
// 	 * 4�ֳ�ʼ����ʽ
// 	 */
// 	int arr11[2][3];
// 	int temp = 1;
//
// 	for (int i = 0; i < 2; i++)
// 	{
// 		for (int j = 0; j < 3; j++)
// 		{
// 			arr11[i][j] = temp++;
// 		}
// 	}
// 	for (int i = 0; i < 2; i++)
// 	{
// 		for (int j = 0; j < 3; j++)
// 		{
// 			cout<<arr11[i][j];
// 		}
// 	}
// 	cout << endl;
// 	int arr22[2][3] = 
// 	{
// 		{1,2,3},
// 		{4,5,6}
// 	};
// 	for (int i = 0; i < 2; i++)
// 	{
// 		for (int j = 0; j < 3; j++)
// 		{
// 			cout << arr22[i][j];
// 		}
// 	}
//
// 	int arr33[2][3] = { 1,2,3,4,5,6 };
//
//
//
// 	int arr44[][3] = { 1,2,3,4,5,6 };
//
// 	/*
// 	 * ��ά����������;
// 	 * 1�����Բ鿴ռ���ڴ�ռ��С
// 	 */
// 	int arr111[2][3] =
// 	{
// 		{1,2,3},
// 		{4,5,6}
// 	};
// 	cout << "��ά����ռ�õ��ڴ�ռ�Ϊ��" << sizeof(arr111) << endl;
// 	cout << "��ά�����һ��ռ�õ��ڴ�ռ�Ϊ��" << sizeof(arr111[0]) << endl;
// 	cout << "��ά�����һ��Ԫ��ռ�õ��ڴ�ռ�Ϊ��" << sizeof(arr111[0][0]) << endl;
//
//
// 	//2. ���Բ鿴��ά������׵�ַ
// 	cout << "��ά�����׵�ַΪ��" << (int)arr111 << endl;
// 	cout << "��ά�����һ���׵�ַΪ��" << (int)arr111[0] << endl;
// 	cout << "��ά�����һ��Ԫ���׵�ַΪ��" <<(int)&arr111[0][0] << endl;
//
// 	return 0;
//
// }

/*
 * ����
 */
// #include<iostream>
// #include"add.h"
// using namespace std;
//
//
//
// void swap(int a,int b)
// {
// 	int temp = a;
// 	b = a;
// 	a = temp;
// }
//
// int main()
// {
// 	int a = 10;
// 	int b = 20;
// 	int c = add(a, b);
// 	// printf("%d", c);
//
//
//
//
// 	cout << "a��b�ĺ�Ϊ:" << c << endl;
// 	// swap(a, b);
// 	// cout << "a=" << a << endl;
// 	// cout << "b=" << b << endl;
//
// 	return 0;
// }

/*
 * ָ��
 */
#include<iostream>
using namespace std;
int main()
{
	/*
	 * ָ�붨����ʹ��
	 */
	int a = 10;
	int* p;
	p = &a;
	cout << "a�ĵ�ַΪ��" << &a << endl;
	cout << "ָ��pΪ��" << p << endl;


	//ָ��ǰ*���������
	*p = 100;
	cout << a << endl;
	return 0;
}