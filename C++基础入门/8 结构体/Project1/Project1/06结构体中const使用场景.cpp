// #include<iostream>
// using namespace std;
// #include<string>
// struct student
// {
// 	string name;
// 	int age;
// 	int score;
// };
// //�������е��βθ�Ϊָ�룬���Լ����ڴ�ռ䣬���Ҳ��Ḵ���µĸ�������
// void printStudent(const struct student *s)
// {
// 	// s->age = 150;  //����const֮��һ�����޸Ĳ����򱨴�
// 	cout << "������" << s->name
// 			<< "���䣺" << s->age
// 			<< "������" << s->score << endl;
// }
// int main()
// {
// 	student s;
// 	s.name = "����";
// 	s.age = 20;
// 	s.score = 60;
// 	printStudent(&s);
// 	cout << "������" << s.name
// 		<< "���䣺" << s.age
// 		<< "������" << s.score << endl;
// 	return 0;
// }