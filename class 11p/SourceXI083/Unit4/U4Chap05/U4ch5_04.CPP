// Filename: \\SourceXI083\Unit4\U4Chap05\U4ch5_04.CPP
// Program to find the hottest and coolest day in a month
#include <iostream.h>
main()
{
	int temp[31], days;
	int i, max, min, avg;
	cout << "How many days in the month? ";
	cin >> days;
	for (i = 0; i < days; i++)
	{
		cout << "Enter noon day temperature for day " << i+1 << " : ";
		cin >> temp[i];
	}
	// Find average temperature
	avg = 0;
	for (i = 0; i < days; i++)
		avg = avg + temp[i];
	cout << "Average temperature : " << avg/days << "\n";
	// Find the minimum and maximum temperature in the month
	min = 100;
	max = 0;
	for (i = 0; i < days; i++)
	{
		if (min > temp[i])
			min = temp[i];
		if (max < temp[i])
			max = temp[i];
	}
	cout << "Maximum temperature : " << max << endl;
	cout << "Minimum temperature : " << min << endl;
	return 0;
}
