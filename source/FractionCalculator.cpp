#include "FractionCalculator.h"

void FractionCalculator::start()
{
	cout << "Welcome to Fraction Calculator!, please enter the first fraction.\n";
	cin >> fr1;
	while (true)
	{
		cout << "The current value of first fraction is " << fr1 << endl;
		cout << "Here is a list of operations you can do:\n"
			<< "1- Addition (+)\n"
			<< "2- Subtraction (-)\n"
			<< "3- Multiplication (*)\n"
			<< "4- Division (/)\n"
			<< "5- is equal to (=)\n"
			<< "6- Greater than (>)\n"
			<< "7- Greater than or equal (>=)\n"
			<< "8- Less than (<)\n"
			<< "9- Less than or equal (<=)\n"
			<< "10- Quit\n\n"
			<< "Please choose the (number or sign) of the operation\n";
		string operation = "";
		cin >> operation;
		if (operation == "10")
		{
			cout << "Thank you for using Fraction Calculator\n";
			return;
		}
		cout << "Please enter the second fraction of the operation\n";
		Fraction fr2;
		cin >> fr2;
		if (operation == "1" || operation == "+")
			fr1 = fr1 + fr2;
		else if (operation == "2" || operation == "-")
			fr1 = fr1 - fr2;
		else if (operation == "3" || operation == "*")
			fr1 = fr1 * fr2;
		else if (operation == "4" || operation == "/")
			fr1 = fr1 / fr2;
		else if (operation == "5" || operation == "=")
		{
			if (fr1 == fr2)
				cout << "True\n\n";
			else
				cout << "False\n\n";
			continue;
		}
		else if (operation == "6" || operation == ">")
		{
			if (fr1 > fr2)
				cout << "True\n\n";
			else
				cout << "False\n\n";
			continue;
		}
		else if (operation == "7" || operation == ">=")
		{
			if (fr1 >= fr2)
				cout << "True\n\n";
			else
				cout << "False\n\n";
			continue;
		}
		else if (operation == "8" || operation == "<")
		{
			if (fr1 < fr2)
				cout << "True\n\n";
			else
				cout << "False\n\n";
			continue;
		}
		else if (operation == "9" || operation == "<=")
		{
			if (fr1 <= fr2)
				cout << "True\n\n";
			else
				cout << "False\n\n";
			continue;
		}
		else
		{
			cout << "Invalid operation was entered!\n";
			continue;
		}
		cout << "result = " << fr1 << endl << endl;
	}
}
