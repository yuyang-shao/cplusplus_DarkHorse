// #include<iostream>
// using namespace std;
// #include<string>
// struct student
// {
// 	string name;
// 	int age;
// 	int score;
// };
// //值传递
// void printStudent(struct student s)
// {
// 	cout << "姓名：" << s.name
// 			<< "年龄：" << s.age
// 			<< "分数：" << s.score << endl;
// }
// //地址传递
// void printStudent2(struct student *s)
// {
// 	cout << "子函数2中 姓名：" << s->name
// 		<< "年龄：" << s->age
// 		<< "分数：" << s->score << endl;
// }
// int main()
// {
// 	student s;
// 	s.name = "张三";
// 	s.age = 20;
// 	s.score = 60;
// 	// printStudent(s);
// 	printStudent2(&s);
// 	return 0;
// }