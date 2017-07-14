//Sarah Bertussi
//LL
#include<iostream>
#include<string>
using namespace std;
//getline() and cin.ignore() learned from: http://www.cplusplus.com/forum/beginner/13866/ and http://stackoverflow.com/questions/12691316/getline-does-not-work-if-used-after-some-inputs
//changing variables in loops from: http://www.cplusplus.com/forum/general/22744

int main()
{

	//Variables
	string entrance;		//Use program - YN
	string course;			//Course name
	string weighted;		//Weighted or unweighted grades -YN
	int gradeTypesTotal;	//Total Number of Grade Types
	int total;				//Hold for Totals
	int gradeTypeNumber;	//Which grade type?
	string gradeType[100];	//All grade type names
	float weight[100];		//weight for each type
	int weightNumber;		//which weight
	float grade[100];		//Student's grade
	int gradeNumber;		//Which grade
	float hold;				//temporary grade hold
	float complete;			//final number grade
	float gradeWeight[100]; //Grade weight
	int gradeWeightNumber;	//which grade weight
	float adjustedGrade[100];	//holds weighted grades
	string letters;			//letters - YN
	int totalLetterTypes;	//How many letters are there
	string letter[100];			//A, B, etc.
	int letterNumber;		//which letter
	int numericalGrade[100];	//number for each letter
	int numericalGradeNumber;	//Which numerical grade
	string FinalLetter;		//final letter grade
	string special;			//are there conditions - YN
	int sGradeTypes;		//how many special grades
	int sNameNumber;		//which special name
	string sName[100];			//special grade name
	int sCondition[100];	//what is the min grade
	int sConditionNumber;	//which special condition
	string sMeet;		//one condition has been met

	//Variable Prep
	gradeTypeNumber = 1;
	weightNumber = 1;
	gradeNumber = 1;
	hold = 0;
	gradeWeightNumber = 1;
	numericalGradeNumber = 1;
	letterNumber = 1;
	sNameNumber = 1;
	sConditionNumber = 1;
	sMeet = "OK";
	FinalLetter = "NA";

	//Welcome Message
	cout << "Welcome to the Grade Calculator!" << endl;
	system("pause");

	cout << endl;
	cout << "Would you like to determine your course grade?" << endl;
	cin >> entrance;
	cout << endl;

	//End Proram
	if (entrance == "no" || entrance == "No")
	{
		cout << "Too bad.  See you later!" << endl;
		system("pause");
		return 1;
	}

	//Continue Program
	cout << "Great!  Let's begin." << endl;
	system("pause");
	cout << endl;

	//Class Name
	cout << "What course would you like to determine your grade for?" << endl;
	cin.ignore();
	getline(cin, course);
	cout << endl << "Ok.  Let's get your " << course << " grade!" << endl;
	system("pause");
	cout << endl;

	//Weights?
	cout << "Were your grades weighted?" << endl;
	cin >> weighted;
	cout << endl;

	//Grade Types
	cout << "OK" << endl;
	cout << "How many grades did you have?" << endl;
	cout << "i.e. homework1, homework2, midterm, etc." << endl;
	cin >> gradeTypesTotal;
	cout << endl;

	//Variable Prep
	total = gradeTypesTotal;

	//Grade Type Names
	cout << "Please list your grade types:" << endl;
	cout << "Note: Each name must only be one word." << endl;

	while (total > 0)
	{
		cout << "Type " << gradeTypeNumber << ": ";
		cin >> gradeType[gradeTypeNumber];
		cout << endl;

		gradeTypeNumber = gradeTypeNumber + 1;
		total = total - 1;
	}

	//Variable Prep
	total = gradeTypesTotal;
	gradeTypeNumber = 1;

	//Obtain Weights
	if (weighted == "yes" || weighted == "Yes")
	{
		cout << "What are the weights of each grade type?" << endl;

		while (total > 0)
		{
			cout << gradeType[gradeTypeNumber] << ": ";
			cin >> weight[weightNumber];
			cout << endl;

			total = total - 1;
			gradeTypeNumber = gradeTypeNumber + 1;
			weightNumber = gradeTypeNumber;
		}
	}

	//Variable Prep
	total = gradeTypesTotal;
	gradeTypeNumber = 1;

	//Obtain Grades
	cout << "Please list your grades for each type:" << endl;

	while (total > 0)
	{
		cout << gradeType[gradeTypeNumber] << ": ";
		cin >> grade[gradeNumber];
		cout << endl;

		total = total - 1;
		gradeTypeNumber = gradeTypeNumber + 1;
		gradeNumber = gradeTypeNumber;
	}

	//Variable Prep
	gradeTypeNumber = 1;
	gradeNumber = 1;
	total = gradeTypesTotal;
	
	//Non-Weighted Grade Calculation
	if (weighted == "no" || weighted == "No")
	{
		while (total > 0)
		{
			hold = hold + grade[gradeNumber];

			gradeNumber = gradeNumber + 1;
			total = total - 1;
		}

		complete = hold/gradeTypesTotal;
	}

	//Weighted Grade Calculation
	else
	{
		//Variable Prep
		weightNumber = 1;

		//Adjust Weights
		while (total > 0)
		{
			gradeWeight[gradeWeightNumber] = weight[weightNumber] / 100;

			weightNumber = weightNumber + 1;
			gradeWeightNumber = weightNumber;
			total = total - 1;
		}

		//Variable Prep
		total = gradeTypesTotal;
		gradeNumber = 1;
		gradeWeightNumber = 1;

		//Adjust Grades
		while (total > 0)
		{
			adjustedGrade[gradeNumber] = grade[gradeNumber] * gradeWeight[gradeWeightNumber];

			gradeNumber = gradeNumber + 1;
			gradeWeightNumber = gradeNumber;
			total = total - 1;
		}

		//Variable Prep
		gradeNumber = 1;
		total = gradeTypesTotal;

		//Add Parts
		while (total > 0)
		{
			hold = hold + adjustedGrade[gradeNumber];

			gradeNumber = gradeNumber + 1;
			total = total - 1;
		}
		
		complete = hold;

	}

	//Obtain Letters
	cout << "Does your class have a letter grading system?" << endl;
	cin >> letters;
	cout << endl;
	
	if (letters == "yes" || letters == "Yes")
	{
		cout << "How many letter grades are there?" << endl;
		cin >> totalLetterTypes;
		cout << endl;

		cout << "What are the letters and the lowest numerical grade for each?" << endl;
		cout << "Note: Please start with highest letter grade first." << endl;

		//Variable Prep
		total = totalLetterTypes;
		letterNumber = 1;
		numericalGradeNumber = 1;

		while (total > 0)
		{
			cout << "Letter " << letterNumber << " and minimum grade: ";
			cin >> letter[letterNumber];
			cin >> numericalGrade[numericalGradeNumber];

			letterNumber = letterNumber + 1;
			numericalGradeNumber = letterNumber;
			total = total - 1;
		}

		//Variable Prep
		numericalGradeNumber = 1;

		//Match Grade to Letter
		while (complete < numericalGrade[numericalGradeNumber])
		{
			numericalGradeNumber = numericalGradeNumber + 1;
		}

		letterNumber = numericalGradeNumber;
		FinalLetter = letter[letterNumber];
	}

	//Special Circumstances
	if (letters == "yes" || letters == "Yes")
	{
		cout << endl;
		cout << "Are there any 'special' circumstances where you would be able to attain the highest grade?" << endl;
		cout << "i.e. Getting a 100 on your final automatically gives you an A" << endl;
		cin >> special;
		cout << endl;

		if (special == "yes" || special == "Yes")
		{
			cout << "How many grade types are invovled in this condition?" << endl;
			cin >> sGradeTypes;
			cout << endl;

			cout << "What are the names of these types and the minimum grade requirement?" << endl;

			//Variable Prep
			total = sGradeTypes;

			//Define Circumstances
			while (total > 0)
			{
				cout << "Type " << sNameNumber << " and minimum grade: ";
				cin >> sName[sNameNumber] >> sCondition[sConditionNumber];

				total = total - 1;
				sNameNumber = sNameNumber + 1;
				sConditionNumber = sNameNumber;
			}

			//Variable Prep
			gradeTypeNumber = 1;
			sNameNumber = 1;
			sConditionNumber = 1;

			//ID Types
			while (gradeTypeNumber <= gradeTypesTotal && sMeet == "OK")
			{
				while (sNameNumber <= sGradeTypes)
				{
					if (gradeType[gradeTypeNumber] == sName[sNameNumber])
					{
						if (sCondition[sConditionNumber] <= grade[gradeTypeNumber])
						{
							sMeet = "OK";
						}

						else
						{
							sMeet = "No";
						}
					}

					sNameNumber = sNameNumber + 1;
				}

				sNameNumber = 1;
				gradeTypeNumber = gradeTypeNumber + 1;
			}

			if (sMeet == "OK")
			{
				FinalLetter = letter[1];
			}

		}

		else
		{
			sMeet = "No";
		}

		cout << endl;
	}

	
	//Conclusion
	cout << "Your final numerical score for " << course << " is: " << complete << endl;
	cout << "Your final letter score for " << course << " is: " << FinalLetter << endl;
	
	if (sMeet == "OK")
	{
		cout << "Note: Your final letter grade was influenced by special circumstances." << endl;
	}

	system("pause");
	return 1;
}