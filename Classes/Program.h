class Program : public college 
{
  protected:
	string capacity;
	int Capacity;
	int obc_seats;
	int scst_seats;
	string program_code;
  public:
	void get_college_details()
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
		obc_seats = Capacity/4;
		scst_seats = Capacity/4;
		
	}
	void show_details()
	{
		cout <<"\n\t\t\t          COLLEGE DETAILS" << endl;
		cout << "\t||---------------------------------------------------------||" << endl;
		cout << "\t College name:\t" << college_name<< endl;
		cout << "\t Branch:\t" << branch<< endl;
		cout << "\t General seats:\t" << Capacity/2<< endl;
		cout << "\t OBC seats:\t" << obc_seats<< endl;
		cout << "\t SC/ST seats:\t" << scst_seats<< endl;
	}
	int Program_code(){
	    return stoi(program_code);
	}
	int Total_seats(){return Capacity;}
	int OBC_seats(){return obc_seats;}
	int SCST_seats(){return scst_seats;}
};
