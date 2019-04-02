//menu
int c,c2;
long long int roll;
studentRecord student;
ProgramRecord program;
void login()
{
	cout<<"\n\n\n\n\n\n\n\n\n\n\n";
	cout<<"\t\t||------------------------------------------------||\n";
	cout<<"\t\t\t\tEnter JEE ROLL Number \n";
	cout<<"\t\t||------------------------------------------------||\n";
	cout<<"\t\t\t\t     ";
	cin>>roll;
	if(student.checkroll(roll))
	{
		cout<<"\n\n\n\n\n\n\n\n\n\n\n";
		cout<<"\t\t\t         STUDENT'S DASHBOARD\n";
		cout<<"\t\t||------------------------------------------------||\n";
		cout<<"\t\t||\tSTUDENT:\t\t\t\t  ||\n";
		cout << "\t\t||\t\t 1.  Profile \t\t          ||  \n";
		cout << "\t\t||\t\t 2.  Update Profile\t\t  ||" << endl;
		cout << "\t\t||\t\t 3.  Delete Profile\t\t  ||" << endl;
		cout << "\t\t||\t\t 0.  Exit\t\t\t  ||" << endl;
		cout<<"\t\t||------------------------------------------------||\n";
		cout<<"\t\t\t\tEnter Your Choice:";
		cin>>c2;
		switch(c2)
		{
			case 1:
			{	
				// studentRecord s;
				student.Find_Student(roll);	
				break;
			}
			case 2:
			{
				student.Update_Student(roll);
				break;
			} 
			case 3:
			{
				student.Delete_Student(roll);
				break;
			}
			case 0:{
				break;
			}		
		}
	}
	else
	{
		cout<<"\n\n\n\n\n\n\n\n\n\n\n";
		cout<<"\t\t||------------------------------------------------||\n";
		cout<<"\t\t\t  You are not registered student!\n";
		cout<<"\t\t||------------------------------------------------||\n";
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
			case 0:
				exit(0);
			default:
			{
				cout << "\t\t||------------------------------------------------||" << endl;
				cout << "\t\t\tEnter Above Mentioned choice only!" << endl;
				cout << "\t\t||------------------------------------------------||" << endl;
				cout << "\t\t\t\t     ";
				break;
			}
		}
	} while (1);
}
