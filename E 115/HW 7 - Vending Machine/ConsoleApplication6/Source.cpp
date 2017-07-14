//Sarah Bertussi
//LL
#include<iostream>
#include<string>
using namespace std;
//I pledge my honor that I have abided by the Stevens Honor System. -Sarah Bertussi
//system("CLS") learned from: http://www.cplusplus.com/forum/beginner/3304/

/*
Vending Machine Capable of:
-tracking inventory
-restocking
-taking money, dispensing change, knowing if too little is given
-giving error messages
-using a manager code
-powering down
-state out of stock
-exit out of buying a drink
-going to manager menu until return code given
-track ammount earned
-change security code
-allow money to be removed
*/

void Error()
{
	cout << endl;
	cout << "ERROR: Please use valid input." << endl;
	cout << endl;
}

int Setup()
{
	int code;
	int good = 0;

	while (good == 0)
	{
		cout << "Input Desired Three Digit Security Code that does not begin with 0:" << endl;
		cin >> code;
		if (code < 99 || code > 999)
		{
			Error();
		}
		
		else
		{
			good = 1;
		}
	}
	system("CLS");
	return code;
}

int Manage(int coke, int sprite, int water, float totalEarnings, float periodEarnings, float inMachine)
{
	int pick;
	int selection;
	int stock;
	int code;
	int good = 0;

	cout << "What would you like to do?" << endl;
	cout << "(1) Check inventory" << endl;
	cout << "(2) Add inventory" << endl;
	cout << "(3) Check Profits" << endl;
	cout << "(4) Remove Money" << endl;
	cout << "(5) Change Security Code" << endl;
	cout << "(6) Exit Manager Menu" << endl;
	cout << "(7) Turn off the machine" << endl;
	cin >> pick;
	cout << endl;

	switch (pick)
	{
	case 1: cout << "Coke: " << coke << endl;
		cout << "Sprite: " << sprite << endl;
		cout << "Water: " << water << endl;
		return -1;
		break;

	case 2: cout << "Which inventory would you like to add to?" << endl;
		cout << "(1) Coke" << endl;
		cout << "(2) Sprite" << endl;
		cout << "(3) Water" << endl;
		cin >> selection;
		return selection;
		break;

	case 3: cout << "Total Lifetime Earnings: $" << totalEarnings << endl;
		cout << "Total Earnings Since Last Checked: $" << periodEarnings << endl;
		cout << "Total In Machine: $" << inMachine << endl;
		return 4;
		break;

	case 4: cout << "Current Ammount in Machine: $" << inMachine << endl;
		cout << "Current Ammount Available to Remove: $" << inMachine - 1.25 << endl;
		cout << "How much would you like to remove?" << endl;
		return 5;
		break;

	case 5: while (good == 0)
		{
			cout << "Input Desired Three Digit Security Code that does not begin with 0:" << endl;
			cin >> code;
			if (code < 99 || code > 999)
			{
				Error();
			}

			else
			{
				good = 1;
			}
		}
		return code;
		break;

	case 6: return 1000;
		break;

	case 7: cout << "Powering down." << endl;
		system("pause");
		exit(1);
		break;
	}
}

int Payment()
{
	float pay;
	float change;
	float less = 1;
	float more = 0;
	float total;

	cout << "Please input proper ammount or -1 to cancel." << endl;
	cin >> pay;
	cout << endl;

	if (pay >= 1.25)
	{
		change = pay - 1.25;
		cout << "Your change is: $" << change << endl;
		cout << "Enjoy your drink!" << endl << endl;
		system("pause");
		system("CLS");
	}

	else if (pay == -1)
	{
		system("CLS");
		return -1;
	}

	else
	{
		total = pay;

		while (more < less)
		{
			less = 1.25 - total;
			cout << "You are $" << less << " short." << endl;
			cout << "Please insert additional money." << endl;
			cin >> more;
			cout << endl;
			total = total + more;
		}

		if (more >= less)
		{
			change = total - 1.25;
			cout << "Your change is: $" << change << endl;
			cout << "Enjoy your drink!" << endl << endl;
			system("pause");
			system("CLS");
		}
	}
	return 0;
}

int Coke(int coke)
{
	int test;
	if (coke == 0)
	{
		cout << "Sorry.  We are out of Coke." << endl;
		system("pause");
		return coke;
	}

	else
	{
		cout << "A Coke costs $1.25." << endl;
		test = Payment();
		if (test = -1)
		{
			return coke;
		}

		else
		{
			coke = coke - 1;
			return coke;
		}
	}
}

int Sprite(int sprite)
{
	int test;
	if (sprite == 0)
	{
		cout << "Sorry.  We are out of Sprite." << endl;
		system("pause");
		return sprite;
	}

	else
	{
		cout << "A Sprite costs $1.25." << endl;
		test = Payment();
		if (test = -1)
		{
			return sprite;
		}

		else
		{
			sprite = sprite - 1;
			return sprite;
		}
	}
}

int Water(int water)
{
	int test;
	if (water == 0)
	{
		cout << "Sorry.  We are out of water." << endl;
		system("pause");
		return water;
	}

	else
	{
		cout << "A water costs $1.25." << endl;
		test = Payment();
		if (test == -1)
		{
			return water;
		}

		else
		{
			water = water - 1;
			return water;
		}
	}
}

int stockTest(int drink, int stock)
{
	int ammount = stock;
	if (drink + stock > 20)
	{
		ammount = stock;
		while (drink + ammount > 20)
		{
			Error();
			cout << "How much would you like to add?" << endl;
			cin >> ammount;
		}
		cout << "Restocked ";
	}

	else
	{
		cout << "Restocked ";
	}

	return ammount;
}

int main()
{
	int coke = 20;
	int sprite = 20;
	int water = 20;
	int code;
	int choice;
	int hold;
	int stock;
	float totalEarnings = 0;
	float periodEarnings = 0;
	int compare;
	float inMachine = 20;
	float remove;
	int test;

	code = Setup();

	while(1)
	{
		hold = -1;
		cout << "Welcome to the Vending Machine!" << endl;
		cout << "What would you like to drink?" << endl;
		cout << "(1) Coke" << endl;
		cout << "(2) Sprite" << endl;
		cout << "(3) Water" << endl;
		cin >> choice;
		cout << endl;

		if (choice == code)
		{
			while(hold != 1000)
			{
				system("CLS");
				hold = -1;
				hold = Manage(coke, sprite, water, totalEarnings, periodEarnings, inMachine);
				if (hold == 1 || hold == 2 || hold == 3)
				{
					cout << endl;

					switch (hold)
					{
					case 1: cout << "Current Supply: " << coke << endl;
						cout << "How much would you like to add?" << endl;
						cin >> stock;
						stock = stockTest(coke, stock);
						cout << "Coke" << endl;
						coke = coke + stock;
						break;

					case 2: cout << "Current Supply: " << sprite << endl;
						cout << "How much would you like to add?" << endl;
						cin >> stock;
						stock = stockTest(sprite, stock);
						cout << "Sprite" << endl;
						sprite = sprite + stock;
						break;
						
					case 3: cout << "Current Supply: " << coke << endl;
						cout << "How much would you like to add?" << endl;
						cin >> stock;
						stock = stockTest(water, stock);
						cout << "Water" << endl;
						water = water + stock;
						break;

					default: Error();
						break;
					}
				}

				else if (hold == 4)
				{
					periodEarnings = 0;
				}

				else if (hold >= 100 && hold <= 999)
				{
					code = hold;
					choice = hold;
					cout << "Code Changed" << endl;
				}

				else if (hold == 5)
				{
					cin >> remove;
					if (remove <= inMachine - 1.25)
					{
						inMachine = inMachine - remove;
						cout << endl;
					}

					else
					{
						while (remove > inMachine - 1.25)
						{
							Error();
							cout << "How much would you like to remove?" << endl;
							cin >> remove;
							cout << endl;
						}
						inMachine = inMachine - remove;
					}
					cout << "$" << remove << " withdrawn." << endl;
				}

				else
				{
					hold = hold;
				}

				system("pause");
			}
			system("CLS");
		}

		else
		{
			switch (choice)
			{
			case 1: compare = Coke(coke);
				if (coke - 1 == compare)
				{
					totalEarnings = totalEarnings + 1.25;
					periodEarnings = periodEarnings + 1.25;
					inMachine = inMachine + 1.25;
					coke = compare;
				}
				break;

			case 2: compare = Sprite(sprite);
				if (sprite - 1 == compare)
				{
					totalEarnings = totalEarnings + 1.25;
					periodEarnings = periodEarnings + 1.25;
					inMachine = inMachine + 1.25;
					sprite = compare;
				}
				break;

			case 3: compare = Water(water);
				if (water - 1 == compare)
				{
					totalEarnings = totalEarnings + 1.25;
					periodEarnings = periodEarnings + 1.25;
					inMachine = inMachine + 1.25;
					water = compare;
				}
				break;

			default: Error();
				break;

			}
		}
	}

}