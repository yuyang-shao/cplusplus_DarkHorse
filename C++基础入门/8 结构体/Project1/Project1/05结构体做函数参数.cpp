// #include<iostream>
// using namespace std;
// #include<string>
// struct student
// {
// 	string name;
// 	int age;
// 	int score;
// };
// //ֵ����
// void printStudent(struct student s)
// {
// 	cout << "������" << s.name
// 			<< "���䣺" << s.age
// 			<< "������" << s.score << endl;
// }
// //��ַ����
// void printStudent2(struct student *s)
// {
// 	cout << "�Ӻ���2�� ������" << s->name
// 		<< "���䣺" << s->age
// 		<< "������" << s->score << endl;
// }
// int main()
// {
// 	student s;
// 	s.name = "����";
// 	s.age = 20;
// 	s.score = 60;
// 	// printStudent(s);
// 	printStudent2(&s);
// 	return 0;
// }