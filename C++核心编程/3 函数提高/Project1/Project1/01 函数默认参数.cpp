// #include<iostream>
// using namespace std;
// //函数默认参数
// //如果自己传入，就用自己的数据，没有默认
// //语法:返回值类型 函数名（形参 = 默认值）{}
// int func(int a,int b = 20,int c = 30)
// {
// 	return a + b + c;
// }
// //注意事项
// //1、如果某个位置已经有了默认参数，那么从这个位置往后，从左到右都必须有默认值
// // int func2(int a,int b,int c =10,int d)
// // {
// // 	return a + b + c;
// // }
// //2、如果函数声明有默认参数，函数实现就不能有默认参数
// //声明和实现只能有一个默认参数
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