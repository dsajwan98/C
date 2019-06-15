// Filename: \\SourceXI083\Unit4\U4Chap07\U4ch7_08.CPP
// The example stores 100 items status in inventory structure
// The constant MAX is initialized by 100.
#include <iostream.h>
#include <conio.h>
const int MAX = 100;    // Declares a integer constant MAX
struct inventory	// Global structure definition
{
	int item_code;
	char item_name[20];
	long int in_stock, order_qty;
	float retail, wholesale;
}inv[MAX];
void main()
{
	int ctr = 0;	// Number of total items in the inventory
	char choice;
	do
	{
		clrscr();	// Clears the screen at every new entry.
		cout << "\Enter the Inventory data\n ";
		cout << "Enter item code ";
		cin >> inv[ctr].item_code;
		cout << "Enter item name ";
		cin >> inv[ctr].item_name;
		cout << "Enter item stock ";
		cin >> inv[ctr].in_stock;
		cout << "Enter quantity ordered ";
		cin >> inv[ctr].order_qty;
		cout << "Enter Retail price ";
		cin >> inv[ctr].retail;
		cout << "Enter Wholesale price ";
		cin >> inv[ctr].wholesale;
		cout << "\nDo You want to enter any item <y/Y>? ";
		cin >> choice;
		ctr++;	// Increment the counter for next inventory
	}
	while ((choice =='y') || (choice == 'Y'));
}