/*
 * const修饰指针
 *1、const修饰指针    -- 常量指针  const int *p 指针的指向可以修改，但是指针指的值不能修改
 *2、const修饰常量    -- 指针常量  int * const p 指针的指向不可以改，但指针指向的值可以改
 *3、const既修饰指针又修饰常量     const int * const p  指针的指向和指针指向的值都不可以改
 */
// #include<iostream>
// using namespace std;
// int main()
// {
// 	//1、const修饰指针
// 	int a = 10;
// 	int b = 20;
//
// 	const int* p = &a;
// 	// *p = 20;       错误
// 	p = &b;           //正确
//
// 	//2、const修饰常量
// 	int* const p2 = &a;
// 	// p2 = &b;   false
// 	*p2 = 20;      
// 	//3、const既修饰指针又修饰常量
// 	const int* const p3 = &a;
// 	// p3 = &b;  false
// 	// *p3 = 100;   false
//
// 	return 0;
// }