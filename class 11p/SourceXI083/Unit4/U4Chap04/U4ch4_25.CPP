// Filename: \\SourceXI083\Unit4\U4Chap04\U4ch4_25.CPP
		// Demonstration of extern storage class
		// A global variable is defined here.
		int commonVariable = 10; // Definition of global variable
		#include <iostream.h>
		#include <iomanip.h>
		#include "File2.cpp"
		void simple(); // Prototype function
		void main()
		{
			cout << endl << "Value of global variable in main() function = " 
				<< commonVariable << endl;
			simple();
		}

