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
 * 变量
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
 * 常量
 * define const
 */
// #include<iostream>
// using namespace std;
// #define Day 7 
// int main()
// {
// 	cout << "一周总共有：" << Day << "天" << endl;
//
// 	const  int month = 12;
// 	// month = 24;
// 	cout << "一年总共有：" << month << "月" << endl;
// 	return 0;
//
// }
/*
 * 标识符命名规则
 */
/*
 * 2 数据类型
 */
// #include<iostream>
// #include<string>
// using namespace std;
// int main()
// {
// 	/*
// 	 * 实型
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
// 	 * 字符
// 	 */
//
// 	char ch = 'a';
// 	
// 	cout << ch << endl;
// 	ch = 97;
// 	cout << ch << endl;
// 	cout << "char字符型：" << sizeof(char) << endl;
//
// 	// char ch2 = "b";   不能用双引号
// 	// char ch2 = 'asdasf';
// 	cout << (int)ch << endl;
//
// 	cout << "aaa\tb" << endl;   //制表符 8位
//
//
// 	
// 	/*字符串
// 	 *1、C风格 char 字符串名[]  用双引号
// 	 *2、C++风格
// 	 */
// 	char str[] = "hello world";
// 	cout << str << endl;
//
// 	string str2 = "hello world";
// 	cout << str2 << endl;
//
// 	/*
// 	 * 布尔类型bool
// 	 */
//
// 	bool flag = true;
// 	cout << flag << endl;
//
// 	flag = false;
// 	cout << flag << endl;
//
// 	cout << "bood类型所占空间" << sizeof(bool) << endl;
//
//
//
// 	/*
// 	* 2.8数据的输入
// 	* cin >> 变量
// 	*/
// 	//1.整型
// 	// int m = 0;
// 	// cout << "请输入a的值" << endl;
// 	// cin >> m;
// 	// cout << "a = " << m << endl;
// 	//2.浮点型
// 	// float f = 3.14f;
// 	// cout << "请输入f的值" << endl;
// 	// cin >> f;
// 	// cout << "浮点数f=" << f << endl;
// 	//3.字符型
// 	// char ch3 = 'a';
// 	// cout << "输入ch3" << endl;
// 	// cin >> ch3;
// 	// cout << "ch=" <<ch3<< endl;
//
// 	//4.字符串
// 	// string  str3 = "hello ";
// 	// cout << "请输入str" << endl;
// 	// cin >> str3;
// 	// cout << "str3=" << str3 << endl;
//
// 	//5.布尔类型
// 	// bool flag1 = false;
// 	// cout << "请给布尔类型flag赋值"  << endl;
// 	// cin >> flag1;  //非0 为1
// 	// cout << "布尔类型flag = " <<flag1<< endl;
//
//
//
//
//
// 	return 0;
// }
/*
 *3、 运算符
 */

// #include<iostream>
// using namespace std;
// int main()
// {
// 	/*
// 	 * 加减乘除
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
// 	//两个小数可以相除
// 	double d1 = 0.5;
// 	double d2 = 0.22;
// 	cout << d1 / d2 << endl;
//
//
//
// 	/*
// 	 *取模运算
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
// 	// cout << a7 % b7 << endl;//异常
//
// 	//两个小数不可以取模
//
//
//
// 	/*
// 	 * 递增递减
// 	 */
//
// 	//1.前置递增
// 	int a = 10;
// 	++a;
// 	cout << "a = " << a << endl;
// 	//2.后置递增
// 	int b = 10;
// 	b++;
// 	cout << "b = " << b << endl;
// 	//3.区别 ++a 先加加，b++ 后加加
//
//
//
// 	/*
// 	 * 赋值运算
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
// 	 * 比较运算符 == != > < >= <=
// 	 */
// 	/*
// 	 * 逻辑运算符
// 	 */
// 	return 0;
//
// }
/*
 * 4. 程序流程结构
 * switch
 */
//  #include<iostream>
//  using namespace std;
//  int main()
//  {
//      //三目运算符
//  	int a = 10;
//     int b = 20;
//     int c = 0;
//
//
//     c = (a > b ? a : b);
//     cout << "c=" << c << endl;
//
//
//     //在C++中三目运算符返回的是变量，可以继续赋值
//     (a > b ? a : b) = 100;
//     cout << "a=" << a << endl;
//     cout << "b=" << b << endl;
//
//
//
//     /*
//      * 4.1.3 switch语句
//      */
//
//     int score;
//     cout << "请输入评分：" << endl;
//     cin >> score;
//     switch(score){
// 	    case 10:
//             cout << "您认为是经典电影" << endl;
//             break;
//         case 9:
//             cout << "9分" << endl;
//             cout << "9分" << endl;
//             break;
//     }
//
//     /*
//      * goto语句
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
 * 5、数组
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
// 	//定义数组时必须有初始长度
// 	int arr3[] = { 90,80,60,40,50 };
// 	for (int i = 0; i < 5; i++)
// 	{
// 		cout << arr3[i] << endl;
// 	}
//
//
// 	/*
// 	 * 数组名用途
// 	 * 1、通过数组名统计整个数组占用内存大小
// 	 */
// 	int arr4[10] = { 1,2,3,4,5,6,7,8,9,10 };
// 	cout << "整个数组占用内存空间为:" << sizeof(arr4) << endl;
// 	cout << "每个元素占用内存空间为：" << sizeof(arr4[0]) << endl;
// 	cout << "数组中元素个数为：" << sizeof(arr4) / sizeof(arr4[0]) << endl;
// 	//2.通过数组名查看数组首地址
// 	cout << "数组首地址为：" << arr4 <<endl;
// 	cout << "数组中第一个元素地址为：" << &arr4[0] <<endl;
// 	cout << "数组中第二个元素地址为：" << &arr4[1] <<endl;
//
//
// 	//数组名时常量，不可以进行赋值操作
// 	//arr4 = 100;
// 	/*
// 	 * 五只小猪的=称体重
// 	 */
//
// 	/*
// 	 * 冒泡排序
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
// 	 * 5.3二维数组
// 	 * 4种初始化方式
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
// 	 * 二维数组名称用途
// 	 * 1、可以查看占用内存空间大小
// 	 */
// 	int arr111[2][3] =
// 	{
// 		{1,2,3},
// 		{4,5,6}
// 	};
// 	cout << "二维数组占用的内存空间为：" << sizeof(arr111) << endl;
// 	cout << "二维数组第一行占用的内存空间为：" << sizeof(arr111[0]) << endl;
// 	cout << "二维数组第一个元素占用的内存空间为：" << sizeof(arr111[0][0]) << endl;
//
//
// 	//2. 可以查看二维数组的首地址
// 	cout << "二维数组首地址为：" << (int)arr111 << endl;
// 	cout << "二维数组第一行首地址为：" << (int)arr111[0] << endl;
// 	cout << "二维数组第一个元素首地址为：" <<(int)&arr111[0][0] << endl;
//
// 	return 0;
//
// }

/*
 * 函数
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
// 	cout << "a和b的和为:" << c << endl;
// 	// swap(a, b);
// 	// cout << "a=" << a << endl;
// 	// cout << "b=" << b << endl;
//
// 	return 0;
// }

/*
 * 指针
 */
#include<iostream>
using namespace std;
int main()
{
	/*
	 * 指针定义与使用
	 */
	int a = 10;
	int* p;
	p = &a;
	cout << "a的地址为：" << &a << endl;
	cout << "指针p为：" << p << endl;


	//指针前*代表解引用
	*p = 100;
	cout << a << endl;
	return 0;
}