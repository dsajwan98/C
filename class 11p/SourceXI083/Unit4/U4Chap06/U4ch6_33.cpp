// Filename: \\SourceXI083\Unit4\U4Chap06\U4ch6_33.CPP
		#include <iostream.h>
		#include <string.h>
		#include <stdio.h>
		#include <conio.h>
		void main()
		{
			char str1[30], str2[30], str3[80];
			int i = 0, j, k=0;
			cout << "Enter first string : ";
			gets(str1);
			cout << "Enter second string : ";
			gets(str2);
			while (str1[i] != '\0') {
				str3[i] = str1[i]; // Copying character by character
				i++;
			}
			j = i;
			str3[j]=' ';
			j++;
			while (str2[k] != '\0') 	{
				// Copying character by character
				str3[j] = str2[k]; 
				j++;
				k++;
			}
			str3[j] = '\0';
			cout << "Copied string is : " << str3;
		}