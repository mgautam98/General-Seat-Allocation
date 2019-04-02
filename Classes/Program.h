 class Program : public college 
{
  protected:
	string capacity;
	int Capacity

  public:
	void get_college_details()
	{
		cout << "\t\t\tEnter College Name:";
		cin >> college_name;
		cout << "\t\t\tEnter College Code:";
		cin >> college_code;
		cout << "\t\t\tEnter Branch:";
		cin >> branch;
		cout << "\t\t\tEnter Capacity:";
		cin >> capacity;
		cout << endl;
		Convert();
	}
	void Convert(){Capacity = stoi(capacity);}
	void show_details()
	{
		cout <<"\n\t\t\t          COLLEGE DETAILS" << endl;
		cout << "\t||---------------------------------------------------------||" << endl;
		cout << "\t College name:\t" << college_name;
		cout << "\t Branch:\t" << branch;
		cout << "\t General seats:\t" << Capacity/2;
		cout << "\t OBC seats:\t" << Capacity/4;
		cout << "\t SC/ST seats:\t" << Capacity/4;
	}
	int Total_seats(){return Capacity;}
	int General_seats(){return Capacity/2;}
	int OBC_seats(){return Capacity/4;}
	int SCST_seats(){return Capacity/4;}
};
