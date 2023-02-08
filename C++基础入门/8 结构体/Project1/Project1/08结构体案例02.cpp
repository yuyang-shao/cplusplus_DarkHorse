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
		cout << "����:" << hArray[i].name
			<< "���䣺" << hArray[i].age
			<< "�Ա�" << hArray[i].sex
			<< endl;
	}
	
}

int main()
{
	//������ʦ
	hero hArray[5] = {
		{"����",23,"��"},
		{"����",22,"��"},
		{"�ŷ�",20,"��"},
		{"����",21,"��"},
		{"����",19,"Ů"},
	};
	bubbleSort(hArray);
	printHero(hArray, 5);

	return 0;
}