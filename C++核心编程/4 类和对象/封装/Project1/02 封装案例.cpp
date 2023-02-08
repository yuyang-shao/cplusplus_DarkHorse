// #include<iostream>
// using namespace std;
// #include<string>
//
// //设计一个学生类，属性有姓名和学号，
// // 可以给姓名和学号赋值，可以显示学生的姓名和学号
//
// class Student
// {
// public:  //公共权限
// 	//类中的属性和行为 我们统一称为成员
// 	//属性 成员属性 成员变量
// 	//行为 成员函数 成员方法
//
//
// 	//属性
// 	string m_Name;
// 	int m_Id;
// 	//行为
// 	//显示姓名和学号
// 	void showStudent()
// 	{
// 		cout << " 姓名：" << m_Name << " 学号：" << m_Id << endl;
// 	}
//
// 	//给姓名赋值
// 	void setName(string name)
// 	{
// 		m_Name = name;
// 	}
//
// 	void setId(int id)
// 	{
// 		m_Id = id;
// 	}
// };
//
//
//
// int main()
// {
// 	//实例化 (通过一个类 创建一个对象的进程）
// 	Student s1;
// 	//给s1对象 的属性进行赋值
// 	// s1.m_Name = "张三";
// 	// s1.m_Id = 1;
// 	s1.setName("张三");
// 	s1.setId(3);
// 	//显示学生信息
//
// 	s1.showStudent();
//
//
// 	Student s2;
// 	s2.m_Name = "李四";
// 	s2.m_Id = 2;
//
// 	s2.showStudent();
// 	return 0;
// }