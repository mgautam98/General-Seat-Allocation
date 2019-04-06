//menu
int c, c2, c3;
char anyKey;
long long int roll, code;
studentRecord student;
ProgramRecord program;
void login()
{
	cout << "\n\n\n\n\n\n\n\n\n\n\n";
	cout << "\t\t||------------------------------------------------||\n";
	cout << "\t\t\t\tEnter JEE ROLL Number \n";
	cout << "\t\t||------------------------------------------------||\n";
	cout << "\t\t\t\t     ";
	cin >> roll;
	if (student.checkroll(roll))
	{
		cout << "\n\n\n\n\n\n\n\n\n\n\n";
		cout << "\t\t\t         STUDENT'S DASHBOARD\n";
		cout << "\t\t||------------------------------------------------||\n";
		cout << "\t\t||\tSTUDENT:\t\t\t\t  ||\n";
		cout << "\t\t||\t\t 1.  Profile \t\t          ||  \n";
		cout << "\t\t||\t\t 2.  Update Profile\t\t  ||" << endl;
		cout << "\t\t||\t\t 3.  Delete Profile\t\t  ||" << endl;
		cout << "\t\t||\t\t 4.  Add Preferences\t\t  ||" << endl;
		cout << "\t\t||\t\t 5.  Display Preferences\t\t  ||" << endl;
		cout << "\t\t||\t\t 0.  Exit\t\t\t  ||" << endl;
		cout << "\t\t||------------------------------------------------||\n";
		cout << "\t\t\t\tEnter Your Choice:";
		cin >> c2;
		switch (c2)
		{
		case 1:
		{
			system("clear");
			student.Find_Student(roll);
			break;
		}
		case 2:
		{
			system("clear");
			student.Update_Student(roll);
			break;
		}
		case 3:
		{
			system("clear");
			student.Delete_Student(roll);
			break;
		}
		case 4:
		{
			student.AddPreferences(roll);
			break;
		}

		case 5:
		{
			student.Display_Preference(roll);
			break;
		}

		case 0:
		{
			break;
		}
		}
	}
	else
	{
		cout << "\n\n\n\n\n\n\n\n\n\n\n";
		cout << "\t\t||------------------------------------------------||\n";
		cout << "\t\t\t  You are not registered student!\n";
		cout << "\t\t||------------------------------------------------||\n";
	}
}
void checkProgram()
{
	cout << "\n\n\n\n\n\n\n\n\n\n\n";
	cout << "\t\t||------------------------------------------------||\n";
	cout << "\t\t\t\tEnter Program Code \n";
	cout << "\t\t||------------------------------------------------||\n";
	cout << "\t\t\t\t     ";
	cin >> code;
	if (program.checkprogramaval(code))
	{
		cout << "\n\n\n\n\n\n\n\n\n\n\n";
		cout << "\t\t\t         Program Details\n";
		cout << "\t\t||------------------------------------------------||\n";
		cout << "\t\t||\tProgram:\t\t\t\t  ||\n";
		cout << "\t\t||\t\t 1.  View Detail \t          ||  \n";
		cout << "\t\t||\t\t 2.  Update Program\t\t  ||" << endl;
		cout << "\t\t||\t\t 3.  Delete Program\t\t  ||" << endl;
		cout << "\t\t||\t\t 0.  Exit\t\t\t  ||" << endl;
		cout << "\t\t||------------------------------------------------||\n";
		cout << "\t\t\t\tEnter Your Choice:";
		cin >> c3;
		switch (c3)
		{
		case 1:
		{
			system("clear");
			Program pgm = program.Find_Program(code);
			pgm.Display();
			break;
		}
		case 2:
		{
			system("clear");
			program.Update_Program(code);
			break;
		}
		case 3:
		{
			system("clear");
			program.Delete_Program(code);
			break;
		}
		case 4:
		{
			break;
		}

		case 0:
		{
			break;
		}
		}
	}
	else
	{
		cout << "\n\n\n\n\n\n\n\n\n\n\n";
		cout << "\t\t||------------------------------------------------||\n";
		cout << "\t\t\t  This Programme is not Available\n";
		cout << "\t\t||------------------------------------------------||\n";
	}
}
void displayMain()
{
	do
	{
		cout << "\n\n\n\n\n\n\n\n\n\n\n";
		cout << "\t\t\t          Jee Seat Allocation" << endl;
		cout << "\t\t||------------------------------------------------||" << endl;
		cout << "\t\t||\tCandidate:\t\t\t\t  ||" << endl;
		cout << "\t\t||\t\t 1.  Register \t2. Login \t  ||" << endl;
		cout << "\t\t||\t\t 3.  Add Program \t          ||" << endl;
		cout << "\t\t||\t\t 4.  Show Program \t          ||" << endl;
		cout << "\t\t||\t\t 5.  Allocate Seats \t          ||" << endl;
		cout << "\t\t||\t\t 0.  Exit\t\t\t  ||" << endl;
		cout << "\t\t||------------------------------------------------||" << endl;
		cout << "\t\t\t\tEnter Your Choice:";
		cin >> c;
		switch (c)
		{
		case 1:
		{
			student.Enter_Student();
			system("clear");
			break;
		}
		case 2:
		{
			login();
			break;
		}
		case 3:
		{
			program.Enter_Program();
			break;
		}
		case 4:
		{
			checkProgram();
			break;
		}
		case 5:
		{
			Allocate();
			break;
		}
		case 0:
			system("clear");
			exit(0);
		default:
		{
			system("clear");
			cout << "\t\t||------------------------------------------------||" << endl;
			cout << "\t\t\tEnter Above Mentioned choice only!" << endl;
			cout << "\t\t||------------------------------------------------||" << endl;
			cout << "\t\t\t\t     ";
			break;
		}
		}
	} while (1);
}
