// Filename: \\SourceXI083\Unit4\U4Chap07\U4ch7_19.CPP
#include<iostream.h>
struct MyBox
{
	int Length, Breadth, Height;
};
void Dimension(MyBox M)
{
	cout<<M.Length<<"x"<<M.Breadth<<"x";
	cout<<M.Height<<endl;
}
void main()
{
	MyBox B1={10, 15, 5}, B2, B3;
	++B1.Height;
	Dimension(B1);
	B3 = B1;
	++B3.Length;
	B3.Breadth++;
	Dimension(B3);
	B2 = B3;
	B2.Height+=5;
	B2.Length--;
	Dimension(B2);
}