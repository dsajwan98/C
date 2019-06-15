// Filename: \\SourceXI083\Unit4\U4Chap07\U4ch7_07.CPP
// Program for testing enum for game_result
#include <iostream.h>
enum game_result {WIN, LOSE, TIE, CANCEL, FORFEIT};
void main() 
{ 
	game_result result; 
	enum game_result omit = CANCEL; 
	int index;
	for (index = WIN ; index <= FORFEIT ; index++) 
	{ 
		result = (game_result)index; 
		if (result == omit) 
			cout << "The game was cancelled.\n";
		else
		{
			cout << "The game was played.";
		if (result == WIN)
			cout << "and we won!";
		if (result == LOSE)
			cout << "and we lost.";
		if (result == FORFEIT)
			cout << "and we won by forfeit.";
		cout << "\n";
		}
	}
}
