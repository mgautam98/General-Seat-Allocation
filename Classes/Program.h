class Program : public college
{
  public:
	int capacity;
	int Capacity;
	int GEN_seats;
	int OBC_seats;
	int SC_ST_seats;
	int program_code;

	void Enter()
	{
		cout << "\t\t\tEnter College Name:";
		cin >> college_name;
		system("clear");
		cout << "\t\t\tEnter College Code:";
		cin >> college_code;
		system("clear");
		cout << "\t\t\tEnter Branch:";
		cin >> branch;
		system("clear");
		cout << "\t\t\tEnter Branch code:";
		cin >> branch_code;
		system("clear");
		cout << "\t\t\tEnter Maximum No. of Seats:";
		cin >> capacity;
		system("clear");
		program_code = college_code*10 + branch_code;
		cout << endl;
		Capacity = capacity;
		GEN_seats = Capacity / 2;
		OBC_seats = Capacity / 4;
		SC_ST_seats = Capacity / 4;
	}
	void Display()
	{
		// cout << "\n\n\t\t System is fetching data.....wait a moment!\n\n";
		// system("sleep 2");
		// system("clear");
		cout << "\n\n\n\n\n\n\n\n\n\n\n";
		cout << "\n\t\t\t          PROGRAM DETAILS" << endl;
		cout << "\t||---------------------------------------------------------||" << endl;
		cout << "\t College name:\t" << college_name << endl;
		cout << "\t Branch:\t" << branch << endl;
		cout << "\t Seats:\t" << Capacity << endl;
		cout << "\t Program Code:\t" << program_code << endl;
		// cout << "\t OBC seats:\t" << OBC_seats << endl;
		// cout << "\t SC/ST seats:\t" << SC_ST_seats << endl;
	}
	int getProgramID() { return (program_code); }
	int Total_seats() { return Capacity; }
	int obc_seats() { return OBC_seats; }
	int SCST_seats() { return SC_ST_seats; }
};
