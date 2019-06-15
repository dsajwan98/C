// Filename: \\SourceXI083\Unit4\U4Chap07\U4ch7_09.CPP
// Program demonstrating #define preprocessor directive
#include <iostream.h>
#define PI 3.14159
#define CIRCLE_AREA(x) (PI * (x) * (x))
void main()
{
	float area;
	int r;
	cout << "Enter the radius : ";
	cin >> r;
	area = CIRCLE_AREA(r);
	cout << "Area is : " << area;
}
