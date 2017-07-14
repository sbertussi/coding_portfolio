//Sarah Bertussi
//LL
#include<iostream>
#include<string>
using namespace std;

int main()
{
	float number1;
	float number2;
	string operation;
	float answer;
	int hold;
	
	cout << "Welcome to the Amazing Calculator!" << endl;
	cout << "I am able to do the four basic functions and positive integer powers." << endl;
	cout << "Please type in two numbers and an operation, with spaces between, and I will do the math." << endl;
	cout << "Ex. 1 + 3 NOT 1+3" << endl;
	cout << "Note: To exit, close the window." << endl;
	cout << endl;

	while (1 == 1)
	{
		system("COLOR 7");
		hold = 1;

		cin >> number1;
		cin >> operation;
		cin >> number2;

		if (operation == "/")						//division
		{
			if (number2 == 0)
			{
				system("COLOR C");
				cout << "Error: Cannot Divide By Zero" << endl;
				system("pause");
				cout << endl;
			}

			else
			{
				answer = number1 / number2;

				cout << "= ";
				cout << answer << endl;
				cout << endl;
			}
		}
		else
		{
			if (operation == "+")					//addition
			{
				answer = number1 + number2;

				cout << "= ";
				cout << answer << endl;
				cout << endl;
			}

			else
			{
				if (operation == "-")				//subtraction
					{
						answer = number1 - number2;

						cout << "= ";
						cout << answer << endl;
						cout << endl;
					}

				else
				{
					if (operation == "*")           //multiplication
					{
						answer = number1 * number2;

						cout << "= ";
						cout << answer << endl;
						cout << endl;
					}

					else
					{
						if (operation == "^")   //power
						{
							while (number2 > 0)
							{
								hold = hold * number1;
								number2 = number2 - 1;
								answer = hold;
							}

							cout << "= ";
							cout << answer << endl;
							cout << endl;
						}
						else
						{
							system("COLOR C");
							cout << "Error: Improper Operation" << endl;
							system("pause");
							cout << endl;
						}
		
					}
				}
			}
		}
	}
}