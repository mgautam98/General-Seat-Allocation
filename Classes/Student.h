class Name
{
  public:
	char fiNam[20];
	char lName[20];

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
  public:
	char day[20];
	char month[20];
	char year[20];

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
	char AllotedProgram[50];
	int gender;
	char email[50];
	DOB dob;
	char state[20];
	int category;
	int air;
	int roll;
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
		cout << "\t\tCategory - 1. GEN / 2. OBC / 3. SCST\t:";
		cin >> category;
		system("clear");
		cout << "\t\tAIR:";
		cin >> air;
		system("clear");
		cout << "\t\tEnter Gender - 1. MALE / 2. FEMALE\t:";
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
		cout << "\n\n\t\t System is fetching data.....wait a moment!\n\n";
		system("sleep 1");
		system("clear");
		cout << "\n\n\n\n\n\n\n\n\n\n\n";
		cout << "\t\t\t     CANDIDATE'S DETAILS" << endl;
		cout << "\t||-----------------------------------------------------------||" << endl;
		cout << "\t\t   Candidate Name:\t";
		name.showName();
		cout << "\t\t" << endl
			 << endl;
		cout << "\t\t   JEE ROLL Number:\t" << roll << endl;
		cout << "\t\t   State of Eligibility:\t" << state << endl;
		cout << "\t\t   Category:\t";
		if (category == 1)
			cout << "GEN" << endl;
		else if (category == 2)
			cout << "OBC" << endl;
		else
			cout << "SCST" << endl;
		cout << "\t\t   AIR:\t" << air << "\t";
		cout << "\t\t   Other Details: " << endl;
		cout << "\t\t\t   Dob:\t\t\t";
		dob.showuDateInt();
		cout << endl;
		cout << "\t\t\t   Gender:\t\t";
		if (gender == 1)
			cout << "MALE" << endl;
		else
			cout << "FEMALE" << endl;
		cout << "\t\t\t   Email:\t\t" << email << endl;
		cout << "\t||-----------------------------------------------------------||" << endl;
	}
	long long int getEnrollment()
	{
		return roll;
	}

	void Display_Preference(){
		for(int i=0; i<preference.size(); i++){
			cout<<"\t\t"<<i+1<<".\t"<<preference[i]<<endl;
		}
		cout<<endl;
	}
};
