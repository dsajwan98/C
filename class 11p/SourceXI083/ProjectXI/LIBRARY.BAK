			//A Interactive menu driven program to use some standard library.
			#include <iostream.h>
			#include <stdio.h>
			#include <conio.h>
			#include <math.h>
			#include <ctype.h>
			#include <stdlib.h>
			#include <string.h>
			// Function using library  <math.h>
			void maths_func()
	  		{
	  			char choi = 'y';
	  			int n, ch;
	  			while ((choi == 'y') || (choi == 'Y'))
	    			{
	    				clrscr();
	    				cout << "\n\n\t\t-----Main Menu-----\n";
	    				cout << "\n\t\t\t1. Square Root Functions";
	    				cout << "\n\t\t\t2. Absolute Functions";
	    				cout << "\n\t\t\t3. Logarithmic Functions";
	    				cout << "\n\t\t\t4. Exponential Functions";
	    				cout << "\n\t\t\t5. Cosine Functions";
	    				cout << "\n\t\t\t6. Exit";
	    				cout << "\n\n\n\t\tEnter Your Choice ";
	    				cin >> ch;
	    				clrscr();
	    				if (ch != 6)
	       				{
						cout << "\n\n\n\n\t\tEnter the value to be operated : ";
	       					cin >> n;
	       				}
	    				cout<<"\n\n\n\t\tThe Required ";
	    				switch(ch)
	      				{

	       					case 1:
		      					cout << "Square Root is: "<<sqrt(n);
		      					break;
	       					case 2:
		      					cout << "Absolute Value is : "<<abs(n);
		      					break;
	       					case 3:
		      					cout << "Logarithmic Value is : " << log(n);
		      					break;
	       					case 4:
		      					cout << "Exponential Value Base e is: " << exp(n);
		      					break;
	       					case 5:
		      					cout << "Cosine Value is: "<<cos(n);
		      					break;
	       					case 6:
		      					exit(0);
	      				}
	    				cout << "\n\n\n\tPress Y to Continue ... ";
	    				choi = getch();
	    			}
	  		}
	  		// Function using library <string.h>
			void strin_func()
	  		{
	  			char a[30], b[30];
	  			char choi = 'y';
	  			int c, ch;
	  			while ((choi == 'y') || (choi == 'Y'))
	    			{
	    				clrscr();
	    				cout << "\n\n\t\t\t-----MENU-----\n";
	    				cout << "\n\t\t\t1. Reverse Functions";
	    				cout << "\n\t\t\t2. Concatenate Functions";
	    				cout << "\n\t\t\t3. String Functions";
	    				cout << "\n\t\t\t4. Copy Functions";
	    				cout << "\n\t\t\t5. Compare Functions";
	    				cout << "\n\t\t\t6. Exit";
	    				cout << "\n\n\n\t\tEnter your choice ";
	    				cin >> ch;
	    				clrscr();
	    				cout << "\n\n\n\t\t";
	    				switch (ch)
	      				{
	       					case 1:
		      					cout << "Enter the string: ";
		      					cin >> a;
							cout << "\n\n\n\t\tReserved string is : " << strrev(a);
		      					break;
	       					case 2:
		      					cout << "Enter the first string: ";
		      					cin >> a;
							cout << "\n\n\t\tEnter the second string : ";
							cin >> b;
							cout << "\n\n\n\t\tConcatenated String is  : ";
							cout << strcat(a, b);
		      					break;
	       					case 3:
		      					cout << "Enter the string: ";
		      					cin >> a;
							cout << "\n\n\n\t\tThe string length is : ";
							cout << strlen(a);
		      					break;
	       					case 4:
		      					cout << "Enter the first string: ";
		      					cin >> a;
							cout << "\n\n\t\tEnter the second string: ";
		      					cin >> b;
							cout << "\n\n\n\t\t\tCopied string is " << strcpy(a,b);
			      				break;
	       					case 5:
		      					cout << "Enter the first string: ";
		      					cin >> a;
							cout << "\n\n\t\tEnter the second string : ";
		      					cin >> b;
		      					c = strcmp(a, b);
		      					cout << "\n\n\n\t\t";
		      					if (c == 0)
			   					cout << "Strings are equal";
		      					else
			   					cout << "Strings are not equal ";
	      						break;
	       					case 6:
		      					exit(0);
	      				}
	    				cout<<"\n\n\n\tPress Y to continue.... ";
	    				choi = getch();
	    			}
	  		}
	  		// Function using library <ctype.h>
			void chara_func()
	  		{
	  			char n;
	  			int ch;
	  			char choi = 'y';
	  			while ((choi  == 'y') || (choi == 'Y'))
	    			{
	    				clrscr();
	    				cout << "\n\n\t\t\t-----MENU-----\n";
	    				cout << "\n\t\t\t1. To test alphabet or not";
	    				cout << "\n\t\t\t2. To test digit or not ";
	    				cout << "\n\t\t\t3. To test upper case or lower case ";
	    				cout << "\n\t\t\t4. To convert upper case to lower case ";
	    				cout << "\n\t\t\t5. To convert lower case to upper case ";
	    				cout << "\n\t\t\t6. Exit";
	    				cout << "\n\n\n\t\tEnter your choice ";
	    				cin >> ch;
	    				clrscr();
	    				cout << "\n\n\n\n\t\tEnter the character to be operated ";
	    				cin >> n;
	    				cout<<"\n\n\n\t\t";
	    				switch(ch)
	      				{
	       				case 1:
			      			if (isalpha(n))
				  			cout << "The character is an alphabet ";	
			      			else
				  			cout<<"The character is not an alphabet ";
		      				break;
	       				case 2:
		      				if (isdigit(n))
			  				cout << "The character is a digit ";
		      				else
			  				cout<<"The character is not a digit ";
		      				break;
	       				case 3:
		      				if (isalpha(n))
			  			{
			  				if (isupper(n))
			      				    cout << "The character is upper case letter ";
			  				else
			      				    cout << "The character is lower case letter ";
			  			}
		      				else
			  				cout << "The character is not an alphabet ";
					      	break;
	       				case 4:
		      				if (isalpha(n))

			  				cout << "The lower case is : " << char(tolower(n));
		      				else
			  				cout << "The character is not an alphabet ";
							break;
	       				case 5:
		      				if (isalpha(n))
			  				cout << "The upper case is : " << char(toupper(n));
		      				else
			  				cout << "The character is not an alphabet ";
		      					break;
	       				case 6:
		      				exit(0);
	      			}
	    			cout << "\n\n\n\tPress Y to Continue... ";
	    			choi = getch();
	    		}
	  	}
	  	// M A I N 	P R O G R A M
		void main()
	  	{
	   		int ch;
	   		char choi = 'y';
	   		void maths_func();
	   		void strin_func();
	   		void chara_func();
	   		cout << "\n\t\tProgram to use any three library files and use any ";
	   		cout << " five pre-defined functions in them";
	   		while ((choi == 'y') || (choi == 'Y'))
	     		{
	     			clrscr();
	     			cout << "\n\n\t\t\t-----MENU-----\n";
	     			cout << "\n\t\t\t1. Mathematical Functions ";
	     			cout << "\n\t\t\t2. String Functions ";
	     			cout << "\n\t\t\t3. Character Functions ";
	     			cout << "\n\t\t\t4. Exit ";
	     			cout << "\n\n\n\t\tEnter your choice: ";
	     			cin >> ch;
	     			clrscr();
	     			switch (ch)
				{
					case 1:
						maths_func();
						break;
			 		case 2:
						strin_func();
						break;
			 		case 3:
						chara_func();
						break;
			 		case 4:
						exit(0);
						break;
			 		default :
				  		cout<<"\n\n\tINVALID CHOICE ";
				}
	     			clrscr();
	     			cout << "\n\n\n\n\n\t\t\tPress Y to go back to main Menu.... ";
	     			choi = getch();
	     		}
	   		cout << "\n\n\nBYE!";
	  	} // E N D    O F      M A I N

