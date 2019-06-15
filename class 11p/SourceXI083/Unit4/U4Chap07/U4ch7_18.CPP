// Filename: \\SourceXI083\Unit4\U4Chap07\U4ch7_18.CPP
#include <iostream.h>
struct Pixels
{ int Color, Style;};
void ShowPoint(Pixels P)
{
	cout << P.Color << P.Style << endl;
}
void main()
{
	Pixels Point1 = {5, 3};
	ShowPoint(Point1);
	Pixels Point2 = Point1;
	Point1.Color+=2;
	ShowPoint(Point2);
}
