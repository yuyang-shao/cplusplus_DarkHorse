/*
 * const����ָ��
 *1��const����ָ��    -- ����ָ��  const int *p ָ���ָ������޸ģ�����ָ��ָ��ֵ�����޸�
 *2��const���γ���    -- ָ�볣��  int * const p ָ���ָ�򲻿��Ըģ���ָ��ָ���ֵ���Ը�
 *3��const������ָ�������γ���     const int * const p  ָ���ָ���ָ��ָ���ֵ�������Ը�
 */
// #include<iostream>
// using namespace std;
// int main()
// {
// 	//1��const����ָ��
// 	int a = 10;
// 	int b = 20;
//
// 	const int* p = &a;
// 	// *p = 20;       ����
// 	p = &b;           //��ȷ
//
// 	//2��const���γ���
// 	int* const p2 = &a;
// 	// p2 = &b;   false
// 	*p2 = 20;      
// 	//3��const������ָ�������γ���
// 	const int* const p3 = &a;
// 	// p3 = &b;  false
// 	// *p3 = 100;   false
//
// 	return 0;
// }