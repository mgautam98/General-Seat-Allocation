
class studentRecord
{
  protected:
	ofstream out;
	ifstream in;
	fstream finout;
	Student student;
	string fileName = "Records/Student.dat";

  public:
	void Display_Student()
	{
		in.open(fileName.c_str(), ios::binary);
		while (in.read((char *)&student, sizeof(student)))
		{
			student.Display();
		}
		in.close();
	}

	void Enter_Student()
	{
		out.open(fileName.c_str(), ios::binary | ios::app);
		student.Enter();
		out.write((char *)&student, sizeof(student));
		out.close();
	}

	void Find_Student(long long int n)
	{
		in.open(fileName.c_str(), ios::binary);
		int found = 0;
		while (in.read((char *)&student, sizeof(student)))
		{
			if (student.getEnrollment() == n)
			{
				student.Display();
				found = 1;
			}
		}

		if (found == 0)
		{
			cout << "\n\n\n\n\n\n\n\n\n\n\n";
			cout << "\t\t||------------------------------------------------||\n";
			cout << "\t\t\t     Student Not Found!\n";
			cout << "\t\t||------------------------------------------------||\n";
		}
		in.close();
	}

	void Delete_Student(long long int n)
	{
		in.open(fileName.c_str(), ios::binary);
		out.open("Records/Temp.dat", ios::out | ios::binary);
		while (in.read((char *)&student, sizeof(student)))
		{
			if (student.getEnrollment() != n)
			{
				out.write((char *)&student, sizeof(student));
			}
		}
		in.close();
		out.close();
		remove(fileName.c_str());
		rename("Records/Temp.dat", fileName.c_str());
	}

	void Update_Student(long long int n)
	{
		finout.open(fileName.c_str(), ios::binary | ios::in | ios::out);
		int found = 0;
		while (finout.read((char *)&student, sizeof(student)))
		{
			if (student.getEnrollment() == n)
			{
				student.Display();
				long long int pos = -1 * sizeof(student);
				finout.seekp(pos, ios::cur);
				cout << "\n\n\n\n\n\n\n\n\n\n\n";
				cout << "\t\t||------------------------------------------------||\n";
				cout << "\t\t     Enter the new details of Student\n";
				cout << "\t\t||------------------------------------------------||\n";
				cout << "\n\n";
				student.Enter();
				finout.write((char *)&student, sizeof(student));
			}
		}
		finout.close();
	}

	int checkroll(long long int n)
	{
		in.open(fileName.c_str(), ios::binary);
		int res = 0;
		while (in.read((char *)&student, sizeof(student)))
		{
			if (student.getEnrollment() == n)
			{
				res = 1;
				break;
			}
		}
		in.close();
		return res;
	}
};
