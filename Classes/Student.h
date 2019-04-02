class Name
{
  protected:
	string fiNam;
	string lName;

  public:
	void getName()
	{
		cout << "\t\t\tEnter First Name:";
		cin >> fiNam;
		cout << "\t\t\tEnter Last Name:";
		cin >> lName;
		cout << endl;
	}
	void showName()
	{
		cout << fiNam << " " << lName;
	}
};

class DOB
{
  protected:
	string day;
	string month;
	string year;

  public:
	void getuDate()
	{
		cout << "\t\t\tEnter Day:";
		cin >> day;
		cout << "\t\t\tEnter Month:";
		cin >> month;
		cout << "\t\t\tEnter Year:";
		cin >> year;
	}
	void showuDateInt()
	{
		cout << day << "/" << month << "/" << year;
	}
};
class Student
{
  public:
	Name name;
	vector<int> preference;
	bool isAlloted;
	string AllotedProgram;
	string gender;
	string email;
	DOB dob;
	string state;
	string category;
	string air;
	string categoryrank;
	string roll;
	Student()
	{
		isAlloted = false;
	}
	void Enter()
	{
		cout << "\n\t\t\t          CANDIDATE'S DETAILS" << endl;
		cout << "\t||---------------------------------------------------------||" << endl;
		cout << "\t\tEnter JEE Roll Number:";
		cin >> roll;
		system("clear");
		cout << "\t\tCandidate Name:" << endl;
		name.getName();
		system("clear");
		cout << "\t\tState of Eligibility:";
		cin >> state;
		system("clear");
		cout << "\t\tCategory:";
		cin >> category;
		system("clear");
		cout << "\t\tAIR:";
		cin >> air;
		system("clear");
		cout << "\t\tCategory Rank:";
		cin >> categoryrank;
		system("clear");
		cout << "\t\tEnter Gender:";
		cin >> gender;
		system("clear");
		cout << "\t\tDOB:\n";
		dob.getuDate();
		system("clear");
		cout << "\t\tEnter Email:";
		cin >> email;
		system("clear");
		cout << "\t||---------------------------------------------------------||" << endl;
	}
	void Display()
	{
		cout << "\t\t\t     CANDIDATE'S DETAILS" << endl;
		cout << "\t||-----------------------------------------------------------||" << endl;
		cout << "\t\t   Candidate Name:\t";
		name.showName();
		cout << "\t\t" << endl
			 << endl;
		cout << "\t\t   JEE ROLL Number:\t" << roll << endl;
		cout << "\t\t   State of Eligibility:\t" << state << endl;
		cout << "\t\t   Category:\t" << category << endl;
		cout << "\t\t   AIR:\t" << air << "\t";
		cout << "  Category Rank:\t" << categoryrank << endl
			 << endl;
		cout << "\t\t   Other Details: " << endl;
		cout << "\t\t\t   Dob:\t\t\t";
		dob.showuDateInt();
		cout << endl;
		cout << "\t\t\t   Gender:\t\t" << gender << endl;
		cout << "\t\t\t   Email:\t\t" << email << endl;
		cout << "\t||-----------------------------------------------------------||" << endl;
	}
	long long int getEnrollment()
	{
		return stoi(roll);
	}
	
};
