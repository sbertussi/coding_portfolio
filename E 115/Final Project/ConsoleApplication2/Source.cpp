//Sarah Bertussi
//Lab Section LL
//I pledge my honor that I have abided by the Stevens Honor System. -Sarah Bertussi (signed)
#include<iostream>
#include<string>
#include<ctime>
using namespace std;
//rand() learned from http://www.cplusplus.com/forum/beginner/98214/

void Error()
{
	system("COLOR C");
	cout << "ERROR: System Did Not Recognize Input" << endl;
	cout << "Please Try Again" << endl;
	cout << "If you repeatedly receive this message," << endl;
	cout << "you inputted an incorrect value for the" << endl;
	cout << "menu type.  Please restart the system" << endl;
	cout << "and be careful." << endl;
	system("pause");
	system("COLOR 7");
	system("CLS");
}

int mainScreen()
{
	string answer;

	cout << "Would you like to play a game?" << endl;
	cin >> answer;
	cout << endl;

	if (answer == "yes" || answer == "Yes")
	{
		cout << "Wonderful! Let's begin..." << endl;
		system("pause");
		system("CLS");
		return 1;
	}

	else if (answer == "no" || answer == "No")
	{
		cout << "Too bad.  Come back again sometime." << endl;
		system("pause");
		system("CLS");
		return 0;
	}

	else
	{
		Error();
		return 0;
	}

}

int bell()
{
	string certain;
	int i = 0;

	while (i == 0)
	{
		cout << "Are you sure you would like to ring the bell?  If you do, you" << endl;
		cout << "cannot return." << endl;
		cin >> certain;
		cout << endl;

		if (certain == "No" || certain == "no")
		{
			cout << "Very well.  Good luck." << endl;
			i = 1;
			return 0;
		}

		else if (certain == "yes" || certain == "Yes")
		{
			cout << "You ring the bell.  The next thing you know, it's morning" << endl;
			cout << "and you're standing on the sidewalk in front of the mansion." << endl;
			cout << "You return to your normal life, another failure of the mansion." << endl;
			system("pause");
			cout << endl;
			cout << "Many failures eventually lead to success.  Please try again sometime!" << endl;
			cout << "The mansion is waiting..." << endl;
			system("pause");
			i = 1;
			return 1;
		}

		else
		{
			Error();
			i = 0;
		}
	}
}

int outline()
{
	int choice;
	int i = 0;

	system("pause");
	system("CLS");

	cout << "You pick up the envelope and open it.  You take out the letter inside, and hold" << endl;
	cout << "it up to the window to read it in the moonlight." << endl << endl;
	cout << "                 Greetings! And welcome to my mansion." << endl;
	cout << "      You have chosen to embark on the quest to gain ownership over" << endl;
	cout << "      my house and fortune.  I shall warn you, it will not be easy." << endl;
	cout << "        This is your last chance to exit before the true problems" << endl;
	cout << "        begin.  If you chose to continue, you will be faced by a" << endl;
	cout << "      a number of challenges, and if you succeed, you shall be the" << endl;
	cout << "            champion.  Choose carefully, and good luck!" << endl << endl;

	system("pause");
	cout << endl;

	while (i == 0)
	{
		cout << "What do you choose?" << endl;
		cout << "(1) Continue into the mansion" << endl;
		cout << "(2) Ring the bell" << endl;
		cin >> choice;
		cout << endl;

		switch (choice)
		{
		case 1: cout << "The room descends into darkness.  The challenge has begun." << endl;
			i = 1;
			return 1;
			break;

		case 2: if (bell() == 1)
		{
			i = 1;
			return 0;
		}
				
				else
				{
					system("pause");
					system("CLS");
				}
				break;

		default: Error();
			break;
		}
	}
}

int Entrance()
{
	string answer;
	int repeat = 0;
	int choice;
	int i = 1;

	while (i == 1)
	{
		cout << "There is an old mansion in your town that used to belong to an eccentric millionaire. He died" << endl;
		cout << "many years ago without an heir to leave his fortune to. In his will he only wrote one thing:" << endl << endl;
		cout << "	'My house and fortune belong only the one who can survive a night in it.'" << endl << endl;
		cout << "Many have tried to pass this test, but have either left before spending an hour in the mansion," << endl;
		cout << "been found outside the mansion the next morning with no memory of what happened, or never heard" << endl;
		cout << "from again." << endl << endl;
		cout << "Do you dare to enter the mansion and claim the fortune?" << endl;
		cin >> answer;
		cout << endl;

		if (answer == "yes" || answer == "Yes")
		{
			system("CLS");
			cout << "It is evening, just before sunset.  You stand before the mansion with a small bag of overnight" << endl;
			cout << "things.  An old man with a gray cap and a weathered face, the mansion's caretaker, stands beside" << endl;
			cout << "you. The full moon is beginning to rise and a crisp breeze blows through the air." << endl;
			cout << "'It's been a while since the last person who tried to claim the house was standing where you are,'" << endl;
			cout << "the caretaker remarks, 'They are always the same, the people who try to claim the house.  They" << endl;
			cout << "never appreciate it for what it is.  It really is a puzzle that only the best minds can solve." << endl;
			cout << "Let's see if you are any different.'" << endl;
			system("pause");
			system("CLS");
			cout << "The old man starts walking up to the main porch without waiting for an answer. You follow him," << endl;
			cout << "almost running into him as he stops abruptly at the front door and turns to you, reaching into" << endl;
			cout << "his coat pocket." << endl;
			cout << "'This is the key to the room you will be staying in,' the caretaker says as he hands you a" << endl;
			cout << "weathered key engraved with the number 573." << endl;
			cout << "'Do not forget it,' the man says to you as you look at the key, 'it may be very important to you" << endl;
			cout << "tomorrow morning. Now, since no one lives here anymore, the electric and water companies have" << endl;
			cout << "stopped service to the house. Considering you'll only be here the night, I didn't bother to ask" << endl;
			cout << "them to turn in back on.  That means none of the lights will work and don't even think about" << endl;
			cout << "turning on a faucet, I don't want to deal with any gunk that might still be in there.'" << endl;
			cout << "He opens the front door, and steps back for you to enter." << endl;
			system("pause");
			system("CLS");
			cout << "'First door on the left at the top of the stairs. Good night,' the caretaker says before starting" << endl;
			cout << "back down the sidewalk, leaving you alone with the mansion.  Abruptly, he stops walking and turns" << endl;
			cout << "back to you, saying, 'I almost forgot one thing, if you decide to leave the mansion at any point," << endl;
			cout << "ring the bell that will be next to your bed.  I suggest you keep it close to you.'" << endl;
			cout << "He turns back around, and continues his way down the sidewalk and out to the street where he heads" << endl;
			cout << "home. You pick up your bag, closing the door behind you as you enter the mansion's foyer and make" << endl;
			cout << "your way up the stairs to your room.  You unlock the door with the key the caretaker gave you, and" << endl;
			cout << "settle in for the night." << endl;
			system("pause");
			system("CLS");

			cout << "You lie in bed, the light from the full moon filling your room and a light breeze from the open window." << endl;
			cout << "As you close your eyes, you suddenly hear a thump from downstairs.  You cautiously get up, and slowly" << endl;
			cout << "make your way to the bedroom door only to find it locked.  Behind you, the window slams shut." << endl;

			while (repeat == 0)
			{
				cout << "What do you do?" << endl;
				cout << "(1) Try to open the door" << endl;
				cout << "(2) Investigate the window" << endl;
				cout << "(3) Look at what you brought" << endl;
				cout << "(4) Ring the bell" << endl;
				cin >> choice;
				cout << endl;

				switch (choice)
				{
				case 1: cout << "How would you like to open the door?" << endl;
					cout << "(1) Force the knob" << endl;
					cout << "(2) Knock it down" << endl;
					cout << "(3) Use your key" << endl;
					cout << "(4) Pick the lock" << endl;
					cin >> choice;
					cout << endl;

					switch (choice)
					{
					case 1: cout << "You attempt to force the knob, but it won't budge.  It must be jammed." << endl;
						system("pause");
						system("CLS");
						break;

					case 2: cout << "You throw your whole body weight against the door, but all you succeed at" << endl;
						cout << "is making a loud thump." << endl;
						system("pause");
						system("CLS");
						break;

					case 3: cout << "You get your key from your nightstand and try to put it in the lock, but" << endl;
						cout << "discover that there is no keyhole on this side of the door." << endl;
						system("pause");
						system("CLS");
						break;

					case 4: cout << "You look around for something to pick the lock with, but nothing is available." << endl;
						system("pause");
						system("CLS");
						break;

					default: Error();
						break;
					}
					break;

				case 2: cout << "You walk up to the window.  Outside, the moon shines brightly." << endl;
					cout << "What do you do with the window?" << endl;
					cout << "(1) Continue observing the night" << endl;
					cout << "(2) Attempt to open the window" << endl;
					cout << "(3) Draw the curtains" << endl;
					cin >> choice;
					cout << endl;

					switch (choice)
					{
					case 1: cout << "You continue looking out the window but soon conclude this will not help you." << endl;
						system("pause");
						system("CLS");
						break;

					case 2: cout << "You try pushing up on the window pane, but it doesn't budge.  You look for a" << endl;
						cout << "window lock, but discover it locks from the outside." << endl;
						system("pause");
						system("CLS");
						break;

					case 3: cout << "You pull the heavy curtains so they cover the window.  The room becomes pitch" << endl;
						cout << "black, but you hear something fall to the floor.  Opening the blinds again," << endl;
						cout << "you see an envelope on the floor with your name written on it." << endl;
						if (outline() == 0)
						{
							return 1;
						}
						repeat = 1;
						system("pause");
						system("CLS");
						break;

					default: Error();
						break;
					}
					break;

				case 3: cout << "You move to the bed and take your bag out.  You shuffle through the contents," << endl;
					cout << "but all you have are some clothes for the next day and your toothbrush, nothing" << endl;
					cout << "that will help you now." << endl;
					system("pause");
					system("CLS");
					break;

				case 4: if (bell() == 1)
				{
					return 1;
					break;
				}
						system("pause");
						system("CLS");
						break;

				default: Error();
					repeat = 0;
					break;

				}

				cout << "You turn back to the room." << endl;
			}

			i = 0;
			return 0;
		}

		else if (answer == "no" || answer == "No")
		{
			cout << "Too bad.  Come back when you are braver." << endl;
			system("pause");
			system("CLS");
			i = 0;
			return 1;
		}

		else
		{
			Error();
			i = 1;
		}
	}
}

void answerKey()
{
	cout << "THE MATH ROOM" << endl << endl;
	cout << "1 + 1 = arrow" << endl;
	cout << "2 + 2 = fish" << endl;
	cout << "3 + 3 = eight" << endl;
	cout << "7 + 7 = ???" << endl << endl;
	cout << "ANSWER: triangle" << endl << endl;
	cout << "EXPLINATION: The math is done by overlapping the two numbers." << endl;
	cout << "             For example: if you overlap a 3 and its mirror" << endl;
	cout << "             image, you get the number 8. Hence, 3 + 3 = 8." << endl << endl << endl;

	cout << "---------------------------------------------------------------------" << endl;
	cout << "THE LOOPING ROOM" << endl << endl;
	cout << "This room is a sequence of two rooms that repeat until you choose" << endl;
	cout << "the correct door." << endl << endl;
	cout << "In one room, the clue is: " << endl;
	cout << "Choose right here, and you will find your way" << endl << endl;
	cout << "ANSWER: The door on the right." << endl << endl;
	cout << "EXPLINATION: The clue means picking the right hand door will" << endl;
	cout << "             let you find your way out of the room." << endl << endl;
	cout << "In the other room the clue is:" << endl;
	cout << "Choose right and you will be wrong." << endl << endl;
	cout << "ANSWER: Choose the door on the left." << endl << endl;
	cout << "EXPLINATION: The clue means choosing the right hand door is" << endl;
	cout << "             wrong, making the left door the correct one to" << endl;
	cout << "             go through." << endl << endl << endl;

	cout << "---------------------------------------------------------------------" << endl;
	cout << "THE THREE CHILDREN ROOM" << endl << endl;
	cout << "John's mother has three children: April, May, and _______." << endl << endl;
	cout << "ANSWER: John" << endl << endl;
	cout << "EXPLINATION: The riddle asks you about John's mother.  Therefore, if" << endl;
	cout << "             two of the children are April and May, and there is only" << endl;
	cout << "             one more and its JOHN's mother, John is the third kid." << endl << endl << endl;

	cout << "---------------------------------------------------------------------" << endl;
	cout << "THE DOOR ROOMS" << endl << endl;
	cout << "These rooms are all of the ones where you are asked to pick" << endl;
	cout << "one of two colored doors." << endl << endl;
	cout << "ANSWER: Actually, there is no correct answer.  Which doors" << endl;
	cout << "        you pick make no difference on the end of the riddle." << endl << endl << endl;

	cout << "---------------------------------------------------------------------" << endl;
	cout << "THE DINING ROOM" << endl << endl;
	cout << "This is the room where the voice asks you what you want for your last" << endl;
	cout << "meal." << endl << endl;
	cout << "ANSWER: Actually, there is no correct answer.  This is just supposed" << endl;
	cout << "        to be fun and give you a chance to personalize the riddle." << endl << endl << endl;

	cout << "---------------------------------------------------------------------" << endl;
	cout << "THE FINAL RIDDLE" << endl << endl;
	cout << "This is the riddle at the very end, where the cloaked man asks" << endl;
	cout << "to pick how to die: sword, electric chair, or starvation." << endl;
	cout << "Your other option is to tell him his favorite number." << endl << endl;
	cout << "ANSWER: There are actually two correct answers.  The first is" << endl;
	cout << "        choose to die by the electric chair.  The other is to" << endl;
	cout << "        tell him the number 573." << endl << endl;
	cout << "EXPLINATION: The electric chair is correct because, as the" << endl;
	cout << "             caretaker says at the beginning of the riddle," << endl;
	cout << "             the mansion has no electricity.  This means the" << endl;
	cout << "             electric chair cannot kill you." << endl;
	cout << "             The number 573 is correct because when you first" << endl;
	cout << "             arrive at the mansion, the caretaker gives you a" << endl;
	cout << "             key with the number 573 on it and tells you to" << endl;
	cout << "             remember it because it might help you." << endl << endl;

	cout << "---------------------------------------------------------------------" << endl;
	cout << "Scroll up for all answers." << endl << endl;
	system("pause");
	system("CLS");
}

void tryagain()
{
	cout << endl << "There is a way to make it out of the mansion alive." << endl;
	cout << "Play again and you may be able to find it." << endl;
	system("pause");
	system("CLS");
	return;
}

int ending()
{
	int i = 0;
	int choice;
	string answer;
	int selection;

	while (i == 0)
	{
		cout << "You proceed down a long spiral staircase that leads deep into the mansion's basement." << endl;
		cout << "At the bottom of the stairs, a man in a black, hooded cloak that completely obscures his" << endl;
		cout << "face waits for you.  You stand before him, and he says:" << endl;
		cout << "    Choose this first door, and you will be killed by a magical sword." << endl;
		cout << "    Choose this second door, and you will be killed by an electric chair." << endl;
		cout << "    If you choose neither option, you will remain here forever and die of" << endl;
		cout << "    starvation.  Make your decision, or tell me my favorite number." << endl << endl;
		cout << "How would you like to die?" << endl;
		cout << "(1) The Sword" << endl;
		cout << "(2) The Electric Chair" << endl;
		cout << "(3) Starvation" << endl;
		cout << "Or, Type in His Favorite Number" << endl;
		cin >> choice;
		cout << endl;

		switch (choice)
		{
		case 1: system("CLS");
			cout << "You walk into the room with the sword, and die." << endl;
			system("pause");
			tryagain();
			i = 1;
			break;

		case 2: cout << "You walk into the room with the electric chair, and take a seat." << endl;
			cout << "You wait, and nothing happens.  You wait some more and still nothing happens." << endl;
			cout << "Do you know why you have not died yet?" << endl;
			cin >> answer;
			cout << endl;

			if (answer == "Yes" || answer == "yes")
			{
				cout << "Great work!  If you have lied, shame on you.  Play again to find the" << endl;
				cout << "true answer to the riddle." << endl;
				system("pause");
			}

			else
			{
				cout << "Think back to the very beginning of this story.  What did the caretaker tell you?" << endl;
				system("pause");
				cout << endl;
				cout << "He told you there is no electricity or water because he had the utilities shut them" << endl;
				cout << "off and did not turn them back on." << endl;
				system("pause");
				cout << endl;
				cout << "Therefore, the electric chair does not have the power to operate!" << endl;
				system("pause");
				cout << endl;
			}

			system("CLS");
			cout << "After realizing the electric chair will do nothing, you stand up.  As you do, the" << endl;
			cout << "caretaker enters from a door hidden in the room's darkness." << endl;
			cout << "He comes up to you and says, 'You have won the mansion's challenge." << endl;
			cout << "You are the first person to have seen through the mansion's puzzles since the master" << endl;
			cout << "died, and you are rightfully heir to both his fortune and mansion.  Congratulations.'" << endl;
			cout << "The caretaker leads you back up to the front hall of the mansion, where you realize it" << endl;
			cout << "is now morning.  You gather your things from your room before leaving with the caretaker" << endl;
			cout << "to make you the official heir to the mansion and begin your new life." << endl;
			system("pause");
			system("CLS");
			cout << "  Congratulations!  You are the Master of the Mansion!" << endl;
			cout << "I now dare you to challenge your friends to this riddle." << endl << endl;
			system("pause");
			i = 1;
			cout << endl;
			system("CLS");
			break;

		case 3: system("CLS");
			cout << "You sit down before the doors.  When you look up, the man has vanished." << endl;
			cout << "You remain there, and after some time die of starvation." << endl;
			system("pause");
			tryagain();
			i = 1;
			break;

		case 573: system("CLS");
			cout << "The man in the cloak nods his head.  He removes the hood from his face" << endl;
			cout << "revealing the caretaker." << endl;
			cout << "He says to you, 'Congratulations.  You are indeed a master of detail" << endl;
			cout << "and puzzle.  You have remembered what many forget.  Therefore, the" << endl;
			cout << "mansion belongs to you.'" << endl;
			cout << "The caretaker leads you back up to the front hall of the mansion, where" << endl;
			cout << "you realize it is now morning.  You gather your things from your room" << endl;
			cout << "before leaving with the caretaker to make you the official heir to the" << endl;
			cout << "mansion and begin your new life." << endl;
			system("pause");
			system("CLS");
			cout << "  Congratulations!  You are the Master of the Mansion!" << endl;
			cout << "I now dare you to challenge your friends to this riddle." << endl << endl;
			system("pause");
			i = 1;
			cout << endl;
			system("CLS");
			break;

		default: cout << endl;
			Error();
			break;
		}

	}

	while (i == 1)
	{
		cout << "What would you like to do now?" << endl;
		cout << "(1) Play Again" << endl;
		cout << "(2) Challenge a Friend" << endl;
		cout << "(3) Learn More About this Game" << endl;
		cout << "(4) See the Answers to the Riddles" << endl;
		cout << "(5) Quit the Game" << endl;
		cin >> selection;

		switch (selection)
		{
		case 1: cout << endl << "Ready?  Here we go!" << endl;
			system("pause");
			i = 0;
			return 1;
			break;

		case 2: cout << endl << "Great!  Grab a friend and get ready!" << endl;
			system("pause");
			i = 0;
			return 1;
			break;

		case 3: system("CLS");
			cout << "This game was created by Sarah Bertussi as part of her E115: Intro to Programming" << endl;
			cout << "final project at Stevens Institute of Technology.  It was based her favorite" << endl;
			cout << "riddle that her cousin told her when she was young.  This version is an embellished" << endl;
			cout << "version that combines the unpredictability and variety that she enjoys when" << endl;
			cout << "telling the riddle.  She hopes you enjoyed the puzzle and, if you have yet to" << endl;
			cout << "succeed, that you will try again." << endl;
			system("pause");
			system("CLS");
			i = 1;
			break;

		case 4: system("CLS");
			answerKey();
			system("CLS");
			i = 1;
			break;

		case 5: return 0;
			break;

		default: Error();
			i = 1;
			break;
		}
	}
}

class Room
{
public:

	//variables
	string doorColor;
	int used[21];
	int count;
	string decision = "bye";
	int ID;

	//actions
	string color()
	{
		int go = 1;
		int i = 1;
		int b = 1;

		while (go == 1)
		{
			b = 1;
			i = 1;
			ID = rand() % 20 + 1;
			for (i; i <= count; i++)
			{
				if (ID == used[i])
				{
					b = 0;
				}
			}

			if (b == 1)
			{
				go = 0;
			}
		}
		
		used[count] = ID;
		count++;

		switch (ID)
			{
			case 1: return "red";
				break;

			case 2: return "orange";
				break;

			case 3: return "yellow";
				break;

			case 4: return "green";
				break;

			case 5: return "blue";
				break;

			case 6: return "purple";
				break;

			case 7: return "white";
				break;

			case 8: return "black";
				break;

			case 9: return "silver";
				break;

			case 10: return "gold";
				break;

			case 11: return "pink";
				break;

			case 12: return "teal";
				break;

			case 13: return "gray";
				break;

			case 14: return "maroon";
				break;
				
			case 15: return "cream";
				break;

			case 16: return "brown";
				break;

			case 17: return "indigo";
				break;

			case 18: return "lime";
				break;

			case 19: return "magenta";
				break;

			case 20: return "bronze";
				break;

			default: cout << "no" << endl;
				break;
			}

	}

	void question()
	{
		int a = 0;
		string Door1 = color();
		string Door2 = color();

		while (a == 0)
		{
			cout << "You come to two doors.  One is " << Door1 << " and the other is " << Door2 << "." << endl;
			cout << "Which do you choose?" << endl;
			cin >> decision;
			cout << endl;
			cout << "You go through the ";
			if (decision == Door1)
			{
				cout << Door1 << " door and continue walking." << endl;
				a = 1;
				system("pause");
				system("CLS");
			}

			else if (decision == Door2)
			{
				cout << Door2 << " door and continue walking." << endl;
				a = 1;
				system("pause");
				system("CLS");
			}

			else
			{
				cout << endl << endl;
				Error();
			}
		}
	}

	//default
	Room()
	{
		doorColor = "pink";
		used[1] = 0;
		used[2] = 0;
		used[3] = 0;
		used[4] = 0;
		used[5] = 0; 
		used[6] = 0; 
		used[7] = 0; 
		used[8] = 0; 
		used[9] = 0;
		used[10] = 0;
		used[11] = 0;
		used[12] = 0;
		used[13] = 0;
		used[14] = 0;
		used[15] = 0;
		used[16] = 0;
		used[17] = 0;
		used[18] = 0;
		used[19] = 0;
		used[20] = 0;
		used[21] = 0;
		count = 1;
		ID = 0;
	}

};

void looper()
{
	int loop = rand() % 2 + 1;
	int choice;

	while (1)
	{
		cout << "You come before two more doors with a plaque between them." << endl;
		cout << "The door on the left is labeled 1, the right is labeled 2." << endl;
		cout << "You walk up to the plaque, which reads:" << endl;

		if (loop == 1)
		{
			cout << "     Choose right here, and you will find your way." << endl;
			cout << "Do you choose door 1 or 2?" << endl;
			cin >> choice;
			cout << endl;

			switch (choice)
			{
			case 1: loop = 2;
				cout << "You walk through door 1 and proceed down another hallway." << endl;
				system("pause");
				system("CLS");
				break;

			case 2: cout << "You go through door 2 and continue walking." << endl;
				system("pause");
				system("CLS");
				return;
				break;

			default: Error();
				break;
			}

		}

		else if (loop == 2)
		{
			cout << "     In choosing right, you will be wrong." << endl;
			cout << "Do you choose door 1 or 2?" << endl;
			cin >> choice;
			cout << endl;

			switch (choice)
			{
			case 1: cout << "You travel through door 1 and proceed down the hallway." << endl;
				system("pause");
				system("CLS");
				return;
				break;

			case 2: cout << "You go through door 2 and travel down the next hallway." << endl;
				system("pause");
				system("CLS");
				loop = 1;
				break;

			default: Error();
				break;
			}
		}

	}
}

void fish()
{
	string answer;
	string selection;
	int i = 0;

	cout << "You walk some more and come to two locked doors with a laptop between them." << endl;
	cout << "On the screen the following message is printed:" << endl << endl;
	cout << "     Answer the riddle correctly, and the choice of doors is yours." << endl;
	cout << "     Answer it incorrectly, and the choice of doors will be mine." << endl << endl;
	cout << "                        1 + 1 = arrow" << endl;
	cout << "                        2 + 2 = fish" << endl;
	cout << "                        3 + 3 = eight" << endl;
	cout << "                        7 + 7 = ????" << endl << endl;
	cout << "What do you type into the laptop?" << endl;
	cin >> answer;
	system("CLS");

	if (answer == "triangle" || answer == "Triangle")
	{
		cout << "You press enter on the computer, and a new message appears:" << endl << endl;
		cout << "    Correct!  Choose your door wisely, and good luck." << endl << endl;
		cout << "You hear both locks click open." << endl;
		cout << "Do you choose the left or right?" << endl;
		cin >> selection;
		cout << endl;

		while (i == 0)
		{
			if (selection == "left" || selection == "Left")
			{
				cout << "You go through the left door and walk down the next hall." << endl;
				system("pause");
				system("CLS");
				i = 1;
			}

			else if (selection == "right" || selection == "Right")
			{
				cout << "You go through the right door and proceed down the hall." << endl;
				system("pause");
				system("CLS");
				i = 1;
			}

			else
			{
				Error();
				i = 0;
			}
		}
	}

	else
	{
		cout << "You press enter on the computer and receive the following message:" << endl << endl;
		cout << "    I am sorry, but that is incorrect.  Please proceed through" << endl;
		cout << "    the door to the left." << endl << endl;
		cout << "The lock on the door to the left clicks open and you go through" << endl;
		cout << "the door and walk down the hallway on the other side." << endl;
		system("pause");
		system("CLS");
	}
}

void June()
{
	string answer;
	string door;
	int i = 0;

	cout << "You arrive at two more locked doors with a laptop between them.  On the laptop's" << endl;
	cout << "screen is printed the message:" << endl << endl;
	cout << "            Answer correctly, and your destiny is yours." << endl;
	cout << "                Answer wrong, and I decide for you." << endl << endl;
	cout << "     John's mother has three kids.  Their names are April, May, and ______." << endl;
	cout << "                  What is the name of the third kid?" << endl << endl;
	cin >> answer;
	system("CLS");

	if (answer == "John")
	{
		cout << "After typing in your answer, the screen changes to say:" << endl << endl;
		cout << "  That is correct!  Choose your door, and good luck." << endl << endl;
		cout << "You hear the lock on both doors click open." << endl;

		while (i == 0)
		{
			cout << "Do you choose the left one or the right one?" << endl;
			cin >> door;
			cout << endl;

			if (door == "left" || door == "Left")
			{
				cout << "You walk through the door on the left and go down the next hall." << endl;
				system("pause");
				system("CLS");
				i = 1;
			}

			else if (door == "right" || door == "Right")
			{
				cout << "You go through the right door and proceed down the hall." << endl;
				system("pause");
				system("CLS");
				i = 1;
			}

			else
			{
				Error();
				i = 0;
			}
		}
	}

	else
	{
		cout << "After typing in your answer, the screen changes to say:" << endl << endl;
		cout << "         I am sorry, but that is incorrect." << endl;
		cout << "    Please proceed through the door to the right." << endl << endl;
		cout << "You hear the lock on the right hand door click open." << endl;
		cout << "You go through, and walk down the next hallway." << endl;
		system("pause");
		system("CLS");
	}

}

int lastChance()
{
	int choice;
	int i = 0;

	while (i == 0)
	{
		cout << "You come to a large, oak door with a plaque and a shelf beside it." << endl;
		cout << "You go up to the plaque, which reads:" << endl << endl;
		cout << "             To ring or not, it is your choice," << endl;
		cout << "             but to proceed you must give away" << endl;
		cout << "              your hope of returning the same." << endl << endl;
		cout << "What do you do?" << endl;
		cout << "(1) Leave the bell on the shelf" << endl;
		cout << "(2) Ring the bell" << endl;
		cin >> choice;

		switch (choice)
		{
		case 1: cout << endl << "You leave the bell on the shelf and the oak door" << endl;
			cout << "swings open and you go through it." << endl;
			i = 1;
			system("pause");
			system("CLS");
			return 1;
			break;

		case 2: system("CLS");
			if (bell() == 1)
			{
				return 0;
				i = 1;
			}

			else
			{
				i = 0;
			}

			system("CLS");
			break;

		default: cout << endl;
			Error();
			break;
		}
	}
}

void dining()
{
	string choice;

	cout << "You walk down a hallway and come to a large dining room with a long table." << endl;
	cout << "A voice asks you, 'What would you like for your last meal?'" << endl;
	cout << "You reply:" << endl;
	cin.ignore();
	getline(cin, choice);
	cout << endl;

	system("CLS");
	cout << "You walk to the end of the table and find " << choice << " laid out" << endl;
	cout << "by the head seat.  You take a seat, and eat your " << choice << "." << endl;
	cout << "When you finish eating, a door opens behind your seat." << endl;
	cout << "You go through it and continue walking." << endl;
	system("pause");
	system("CLS");
}

int main()
{
	int totalDoorRooms;
	Room doorRoom[100];
	srand(time(NULL));
	int run = 1;
	int roomNumber;
	int totalRooms;
	int i = 1;

	while (i == 1)
	{
		while (i == 1)
		{
			system("CLS");

			int start = 0;
			int choice;
			int completed = 0;
			int looped = 0;
			int fished = 0;
			int Juned = 0;
			int dined = 0;

			if (run == 100)
			{
				while (100)
				{
					cout << "Wow! I can't believe you've played the game so many times" << endl;
					cout << "in a row!  You have actually used up all of the storage in" << endl;
					cout << "this program, so another run will not work.  Please restart" << endl;
					cout << "the program so you can play again." << endl;
					system("pause");
					system("CLS");
				}
			}

			while (start == 0)
			{
				start = mainScreen();
			}

			if (Entrance() == 1)
			{
				break;
			}

			system("CLS");
			cout << "Slowly, torches begin to light a long hallway, which you begin walking down." << endl;

			totalDoorRooms = rand() % 8 + 3;

			doorRoom[run].question();
			totalDoorRooms--;
			totalRooms = totalDoorRooms + 4;

			while (completed < totalRooms)
			{
				roomNumber = rand() % 5 + 1;

				switch (roomNumber)
				{
				case 1: if (totalDoorRooms >= 1)
				{
					doorRoom[run].question();
					totalDoorRooms--;
					completed++;
				}
						break;

				case 2: if (looped == 0)
				{
					looper();
					looped = 1;
					completed++;
				}
					break;

				case 3: if (fished == 0)
				{
					fish();
					fished = 1;
					completed++;
				}
						break;

				case 4: if (Juned == 0)
				{
					June();
					Juned = 1;
					completed++;
				}
						break;

				case 5: if (dined == 0)
				{
					dining();
					dined = 1;
					completed++;
				}
						break;

				default: cout << "Boo";
					break;
				}
			}

			if (lastChance() == 1)
			{
				 i = ending();
			}

			start = 0;
			run++;

		}
	}
}