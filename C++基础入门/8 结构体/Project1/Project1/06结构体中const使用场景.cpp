// #include<iostream>
// using namespace std;
// #include<string>
// struct student
// {
// 	string name;
// 	int age;
// 	int score;
// };
// //将函数中的形参改为指针，可以减少内存空间，而且不会复制新的副本出来
// void printStudent(const struct student *s)
// {
// 	// s->age = 150;  //加入const之后，一旦有修改操作则报错
// 	cout << "姓名：" << s->name
// 			<< "年龄：" << s->age
// 			<< "分数：" << s->score << endl;
// }
// int main()
// {
// 	student s;
// 	s.name = "张三";
// 	s.age = 20;
// 	s.score = 60;
// 	printStudent(&s);
// 	cout << "姓名：" << s.name
// 		<< "年龄：" << s.age
// 		<< "分数：" << s.score << endl;
// 	return 0;
// }