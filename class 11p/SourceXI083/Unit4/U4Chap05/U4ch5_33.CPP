// Filename: \\SourceXI083\Unit4\U4Chap05\U4ch5_33.CPP
// Program to check the quality of two matrices.
#include <iostream.h>
void main()
{
	int mata[100][100], matb[100][100], rowa, rowb, cola, colb, flag = 1;
	cout << "Enter number of rows for first matrix ";
	cin >> rowa;
	cout << "Enter number of columns for first matrix ";
	cin >> cola;
	cout << "Enter number of rows for scond matrix ";
	cin >> rowb;
	cout << "Enter number of columns for second matrix ";
	cin >> colb;
	if ((rowa == rowb) && (cola == colb))
		flag = 0;
	if (flag == 1) {
		cout << "Matrices are not equal";
		return;
	}
	cout << "Enter for first matrix";
	for (int i = 0; i<rowa; i++)
		for (int j = 0; j<cola; j++)
			cin >> mata[i][j];
	cout << "Enter for second matrix";
		for (i = 0; i<rowb; i++)
			for (j = 0; j<colb; j++)
				cin >> matb[i][j];
	for (i = 0; i<rowa; i++)
		for (j = 0; j<cola; j++) {
			if (mata[i][j] == matb[i][j]) flag = 0;
		}
	if (flag == 1)
		cout << "Matrices are not equal";
	else
		cout << "Matrices are equal";
		return;

}