#include <iostream>
using namespace std;

class heater
{
private:

	int tempt = 15;

public:

	int warmer()
	{
		tempt = tempt + 5;
		return tempt;
	}

	int cooler()
	{
		tempt = tempt - 5;
		return tempt;
	}

	void print()
	{
		cout << "The current temperature is: " << tempt << "°C" << endl << endl;
	}
};

int main()
{
	heater x;
	int y;

	do {
		cout << "Hello! What do you want to do?" << endl << endl;
		cout << "1. Know current temperature" << endl;
		cout << "2. Increase temperature" << endl;
		cout << "3. Decrease temperature" << endl;
		cout << "4. Exit menu" << endl;

		cin >> y;

		if (y == 1)
		{
			x.print();
		}

		else if (y == 2)
		{
			x.warmer();
			x.print();
		}

		else if (y == 3)
		{
			x.cooler();
			x.print();
		}

		else if (y == 4)
		{

			cout << "Bye bye have a great time" << endl;
		}

		else cout << "Enter a valid option" << endl << endl;
	} while (y != 4);
	return 0;
}


