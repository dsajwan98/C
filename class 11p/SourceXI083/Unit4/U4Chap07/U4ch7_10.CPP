// Filename: \\SourceXI083\Unit4\U4Chap07\U4ch7_10.CPP
#include <iostream.h>
struct student
{
	char name[20];
	int age, roll;
};
void main()
{
	student stud = {"Robert", 17, 12 };
	student stud1;
	stud1 = stud;
	stud1.roll = 18;
	cout << "\n Name : " << stud1.name;
	cout << "\n Roll no : "  << stud1.roll;
	cout << "\n Age     :  " << stud1.age;
	cout << "\n Roll no : " << stud.roll;
}