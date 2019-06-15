// Filename: \\SourceXI083\Unit4\U4Chap07\U4ch7_16.CPP
#include <iostream.h>
#include <string.h>
struct Swimmingclub
{
	int memnumber;
	char memname[20];
	char memtype[];
};
void main()
{
	Swimmingclub per1, per2;
	cout << "Member Number:";
	cin >> per1.memnumber;
	cout << "Member Name :";
	cin >> per1.memname;
	strcpy(per1.memtype, "HIG");
	per2 = per1;
	cout << "Member Number :" << per2.memnumber;
	cout << "Member Name :" << per2.memname;
	cout << "Member Number :" << per2.memtype;
}
