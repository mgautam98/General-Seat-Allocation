 class Program : public college 
{
  protected:
	string capacity;
	int Capacity;
	int OBC_seats;
	int SC_ST_seats;
	string program_code;
  public:
	void Enter()
	{
		cout << "\t\t\tEnter College Name:";
		cin >> college_name;
		cout << "\t\t\tEnter College Code:";
		cin >> college_code;
		cout << "\t\t\tEnter Branch:";
		cin >> branch;
		cout << "\t\t\tEnter Branch code:";
		cin >> branch_code;
		cout << "\t\t\tEnter Maximum No. of Seats:";
		cin >> capacity;
		program_code = college_code + branch_code;
		cout << endl;
		Capacity = stoi(capacity);
		OBC_seats = Capacity/4;
		SC_ST_seats = Capacity/4;
		
	}
	void Display()
	{
		cout <<"\n\t\t\t          COLLEGE DETAILS" << endl;
		cout << "\t||---------------------------------------------------------||" << endl;
		cout << "\t College name:\t" << college_name<< endl;
		cout << "\t Branch:\t" << branch<< endl;
		cout << "\t General seats:\t" << Capacity/2<< endl;
		cout << "\t OBC seats:\t" << OBC_seats<< endl;
		cout << "\t SC/ST seats:\t" << SC_ST_seats<< endl;
	}
	int getProgramID(){return stoi(program_code);}
	int Total_seats(){return Capacity;}
	int obc_seats(){return OBC_seats;}
	int SCST_seats(){return SC_ST_seats;}
};
