// #include<iostream>
// using namespace std;
// void bubbleSort(int *arr)
// {
// 	for (int i = 0; i < 9; i++)
// 	{
// 		int flag = 1;
// 		for (int j = 0; j < 9 - i; j++)
// 		{
// 			if(*(arr+j)>*(arr+j+1))
// 			{
// 				int temp = *(arr + j);
// 				*(arr + j) = *(arr + j + 1);
// 				*(arr + j + 1) = temp;
// 				flag = 0;
// 			}
// 			
// 		}
// 		if (flag)
// 			break;
// 	}
// }
// int main()
// {
// 	int arr[10] = { 4,5,3,1,0,-1,7,6,8,9 };
// 	bubbleSort(arr);
// 	for (int i = 0; i < 10; i++)
// 	{
// 		cout << *(arr+i) << endl;
// 	}
// 	return 0;
// }