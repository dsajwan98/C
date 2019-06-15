// Filename: \\SourceXI083\Unit4\U4Chap07\U4ch7_17.CPP
#include <iostream.h>
struct PLAY
{ int Score, Bonus;};
void Calculate(PLAY &P, int N = 10)
{
	P.Score++; P.Bonus+=N;
}
void main()
{
	PLAY PL={10,15};
	Calculate(PL, 5);
	cout << PL.Score << ":" << PL.Bonus << endl;
	Calculate(PL);
	cout << PL.Score << ":" << PL.Bonus << endl;
	Calculate(PL, 15);
	cout << PL.Score << ":" << PL.Bonus << endl;
}
