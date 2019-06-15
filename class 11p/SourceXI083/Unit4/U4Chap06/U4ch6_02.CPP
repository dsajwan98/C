// Filename: \\SourceXI083\Unit4\U4Chap06\U4ch6_02.CPP
// Demonstration of initialization of array
#include <iostream.h>
main()
{
	char s_name[] = "DAV Model School"; // String array

	float scores[6] = {45.6, 67.6, 87.5, 34.5, 73.5, 77.6};
	float average = 0.0;
	int ctr;
	// Calculate the total of scores
	for (ctr = 0; ctr < 6; ctr++)
	{
		average = average + scores[ctr];
	}
	// calculate the average
	average = average / (float)6;
	cout << "At " << s_name << ", your class average is " << average << "\n";
	return 0;
}
