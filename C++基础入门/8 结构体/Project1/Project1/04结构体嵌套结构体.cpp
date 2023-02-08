// #include<iostream>
// using namespace std;
// #include<string>
// struct student
// {
// 	string name;
// 	int age;
// 	int score;
// };
// struct teacher
// {
// 	int id;
// 	string name;
// 	int age;
// 	struct student stu;  //辅导的学生
// };
// int main()
// {
// 	//创建老师
// 	teacher t;
// 	t.id = 10000;
// 	t.name = "老忘";
// 	t.age = 50;
// 	t.stu.age = 20;
// 	t.stu.name = "小王";
// 	t.stu.score = 60;
// 	cout << "姓名：" << t.name
// 		<< "年龄：" << t.age
// 		<< "id：" << t.id << endl;
// 	return 0;
// }