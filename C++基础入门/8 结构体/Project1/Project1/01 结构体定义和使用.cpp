// #include<iostream>
// #include<string>
// using namespace std;
// //自定义数据类型，一些类型集合组成的一个类型
// struct Student
// {
// 	//成员列表
// 	//姓名
// 	string name;
// 	int age;
// 	int score;
// }s3;
//
// int main()
// {
// 	//2、通过学生类型创建具体学生
// 	//2.1 struct Student s1
//
// 	//struct 关键字可以省略
// 	Student s1;
// 	s1.name = "张三";
// 	s1.age = 18;
// 	s1.score = 100;
//
// 	cout << "姓名：" << s1.name << "年龄：" << s1.age << "分数：" << s1.score << endl;
//
// 	//2.2 struct Student s2 ={...}
// 	struct Student s2 = { "李四",19,80 };
// 	cout << "姓名：" << s2.name << "年龄：" << s2.age << "分数：" << s2.score << endl;
// 	//2.3 在定义结构体时顺便创建结构体变量
//
// 	s3.name = "王五";
// 	s3.age = 20;
// 	s3.score = 60;
// 	cout << "姓名：" << s3.name << "年龄：" << s3.age << "分数：" << s3.score << endl;
//
// 	return 0;
// }