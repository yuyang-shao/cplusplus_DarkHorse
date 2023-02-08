#include<iostream>
using namespace std;
#include<string>
#include<ctime>
struct hero
{
	string name;
	int age;
	string sex;
};
void bubbleSort(hero *hArray)
{
	for(int i = 0;i<4;i++)
	{
		int flag = 1;
		for(int j = 0;j<4 - i;j++)
		{
			if( (hArray+j)->age > (hArray + j + 1)->age )
			{
				hero temp = *(hArray + j);
				*(hArray + j) = *(hArray + j + 1);
				*(hArray + j + 1) = temp;
				flag = 0;
			}
		}
		if (flag)
			break;
	}
}
void printHero(hero hArray[],int len )
{
	for (int i = 0; i < len; i++)
	{
		cout << "姓名:" << hArray[i].name
			<< "年龄：" << hArray[i].age
			<< "性别：" << hArray[i].sex
			<< endl;
	}
	
}

int main()
{
	//创建老师
	hero hArray[5] = {
		{"刘备",23,"男"},
		{"关羽",22,"男"},
		{"张飞",20,"男"},
		{"赵云",21,"男"},
		{"貂蝉",19,"女"},
	};
	bubbleSort(hArray);
	printHero(hArray, 5);

	return 0;
}