//PROGRAM FOR BASIC CALCULATOR.
#include<iostream>
using namespace std;
int i;
int main()
{
	char op;
	float n1, n2;
	cout << "Note: This calculator only deals with simple calculations involving two values." << endl;
	cout << "Press 'Ctrl + C' then 'ENTER' to STOP calculator." << endl;
	do
	{
		cout << "Enter your operator. Please choose from this list  + , - , * , / : " << endl;
		cin >> op;
		cout << endl << "Enter two integer values: " << endl;
		cin >> n1 >> n2;
		cout << endl;
		switch (op)
		{
		case '+':
			cout << "The operation is 'ADDITION': " << endl << endl;
			cout << n1 << " + " << n2 << " = " << n1 + n2 << "." << endl;
			break;
		case '-' :
			cout << "The operation is 'SUBTRACTION': " << endl << endl;
			cout << n1 << " - " << n2 << " = " << n1 - n2 << "." << endl;
			break;
		case '*' :
			cout << "The operation is 'MULTIPLICATION': " << endl << endl;
			cout << n1 << " * " << n2 << " = " << n1 * n2 << "." << endl;
			break;
		case '/' :
			cout << "The operation is 'DIVISION': " << endl << endl;
			cout << n1 << " / " << n2 << " = " << n1 / n2 << "." << endl;
			break;
		default:
			cout << "Error! The operator you entered is incorrect." << endl;
			break;
		}
		cout << endl;
	}
	while (i < 1000);
	return 0;
}

