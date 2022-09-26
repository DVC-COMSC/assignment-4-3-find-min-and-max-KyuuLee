// Make a program that finds the minimum and maximum values among three integer values.

// int num1, num2, num3;
// cin >> num1 >> num2 >> num3;
// Find the min and max among three values.
// Display the numbers with ascending order ( min, other, max).

#include <iostream>
using namespace std;

int main()
{
	int num1, num2, num3;

	cout << "Enter three numbers: ";
	cin >> num1 >> num2 >> num3;

	if (num1 < num2)
	{
		if (num2 < num3)
			cout << num1 << " " << num2 << " " << num3 << endl;
		else
		{
			if (num1 < num3)
				cout << num1 << " " << num3 << " " << num2 << endl;
			else
				cout << num3 << " " << num1 << " " << num2 << endl;
		}
	}
	else
	{
		if (num3 < num2)
			cout << num3 << " " << num2 << " " << num1 << endl;
		else
		{
			if (num1 < num3)
				cout << num2 << " " << num1 << " " << num3 << endl;
			else
				cout << num2 << " " << num3 << " " << num1 << endl;
		}
	}
}