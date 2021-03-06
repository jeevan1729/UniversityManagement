// UniversityManagement.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
using namespace std;

int main()
{
	char check;
	bool c = FALSE;
	Display d1("COLOR FC");
	SetConsoleTitle(TEXT("Student Record Manager"));
	d1.StartScreen(d1);
	d1.SetFontSize(35, "Arial");
	system("COLOR 4F");
	while (c == FALSE)
	{
		SetColor(236);
		cout << "Welcome to Student Record Manager...\n";
		SetColor(79);
		cout << "For new student registration press N\n";
		cout << "For new teacher registration press T\n";
		cout << "For student login press S\n";
		cout << "For parent login press P\n";
		cout << "For teacher login press L\n";
		cout << "To exit press E\n";
		check = _getch();
		system("CLS");
		if (check == 'N' || check == 'n' || check == 'T' || check == 't')
			NewEntry(check);
		else if (check == 'S' || check == 's' || check == 'P' || check == 'p' || check == 'L' || check == 'l')
			SearchEntry(check);
		else if (check == 'E' || check == 'e')
			break;
		else
			cout << "Enter a valid input\n";
		cout << "To go to home page press any character\n";
		cout << "To exit press E\n";
		check = ' ';
		check = _getch();
		if (check == 'e' || check == 'E')
			c = TRUE;
		else
			c = FALSE;
		system("CLS");
	}

	return 0;
}