// Filename: \\SourceXI083\Unit4\U4Chap07\U4ch7_15.CPP
#include <iostream.h>
struct Point
{
	int X,Y;
};
void Show(Point  P)
{
	cout << P.X << " : " << P.Y << endl;
}
void main( )
{
	Point  U = {20, 10}, V, W;
	V = U;
	V.X +=20;
	W = V;
	U.Y+=10;
	U.X+=5;
	W.X -= 5;
	Show(U);
	Show(V);
	Show(W);
}
