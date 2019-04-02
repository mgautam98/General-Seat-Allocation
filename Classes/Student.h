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
  protected:
	Name name;
	Name fatherName;
	Name motherName;
	string gender;
	string email;
	DOB dob;
	string mobile;
	string state;
	string category;
	string air;
	string categoryrank;
	string roll;

  public:
	void Enter()
	{
		cout << "\n\t\t\t          CANDIDATE'S DETAILS" << endl;
		cout << "\t||---------------------------------------------------------||" << endl;
		cout << "\t\tEnter JEE Roll Number:";
		cin >> roll;

		cout << "\t\tCandidate Name:" << endl;
		name.getName();

		cout << "\t\tState of Eligibility:";
		cin >> state;

		cout << "\t\tCategory:";
		cin >> category;

		cout << "\t\tAIR:";
		cin >> air;

		cout << "\t\tCategory Rank:";
		cin >> categoryrank;

		cout << "\t\tEnter Gender:";
		cin >> gender;

		cout << "\t\tDOB:\n";
		dob.getuDate();

		cout << "\t\tEnter Email:";
		cin >> email;

		cout << "\t\tEnter Mobile:";
		cin >> mobile;

		cout << "\n\t\tFather Name:" << endl;
		fatherName.getName();

		cout << "\t\tMother Name:" << endl;
		motherName.getName();

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
		cout << "\t\t\t   Father's Name:\t";
		fatherName.showName();
		cout << endl;
		cout << "\t\t\t   Mother's Name:\t";
		motherName.showName();
		cout << endl;
		cout << "\t\t\t   Email:\t\t" << email << endl;
		cout << "\t\t\t   Mobile:\t\t" << mobile << endl;
		cout << "\t||-----------------------------------------------------------||" << endl;
	}
	long long int getEnrollment()
	{
		return stoi(roll);
	}
};
