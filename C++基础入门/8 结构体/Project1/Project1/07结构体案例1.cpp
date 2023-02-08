// #include<iostream>
// using namespace std;
// #include<string>
// #include<ctime>
// struct student
// {
// 	string sname;
// 	int score;
// };
// struct Teacher
// {
// 	
// 	string tname;
// 	struct student sArray[5];  //辅导的学生
// };
// void allocateSpace(Teacher tArray[],int len)
// {
// 	string nameSeed = "ABCDE";
// 	for (int i = 0; i < len; i++)
// 	{
// 		tArray[i].tname = "Teacher_";
// 		tArray[i].tname += nameSeed[i];
// 		for(int j = 0;j<5;j++)
// 		{
// 			tArray[i].sArray[j].sname = "Student_";
// 			tArray[i].sArray[j].sname += nameSeed[j];
// 			int random = rand() % 60 + 40;
// 			tArray[i].sArray[j].score = random;
// 			
//
// 		}
// 	}
// }
// void printInfo(Teacher tArray[], int len)
// {
// 	for (int  i = 0; i < len; i++)
// 	{
// 		cout << "老师姓名：" << tArray[i].tname << endl;
// 		for (int j = 0; j < 5; j++)
// 		{
// 			cout << "学生姓名：" << tArray[i].sArray[j].sname
// 				<< "学生分数：" << tArray[i].sArray[j].score
// 			<<endl;
// 		}
// 	}
// }
// int main()
// {
//
// 	//随机数种子
// 	srand((unsigned int)time(NULL));
// 	//
// 	//创建老师
// 	Teacher tArray[3];
// 	int len = sizeof(tArray) / sizeof(tArray[0]);
// 	allocateSpace(tArray, len);
// 	printInfo(tArray, len);
// 	
// 	return 0;
// }