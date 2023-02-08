// #include<iostream>
// using namespace std;
//
// //函数重载
// //可以让函数名相同，提高复用性
// //函数重载的条件
// //1、同一个作用域下
// //2、函数名称相同
// //3、函数参数类型不同，或者个数不同，或者顺序不同
//
// void func()
// {
// 	cout << "func 的调用" << endl;
// }
// void func(int a)
// {
// 	cout << "func(int a) 的调用" << endl;
// }
// void func(double d)
// {
// 	cout << "func(double d) 的调用" << endl;
// }
// void func(int a,double d)
// {
// 	cout << "func(int a,double d) 的调用" << endl;
// }
// void func(double d,int a)
// {
// 	cout << "func(double d,int a) 的调用" << endl;
// }
//
// //注意事项
// //函数的返回值不可以作为函数重载的条件
// // int func(double d, int a)
// // {
// // 	cout << "func(double d,int a) 的调用" << endl;
// // }
// int main()
// {
// 	func(1,3.14);
// 	return 0;
// }