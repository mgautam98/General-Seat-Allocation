
class ProgramRecord
{
  protected:
    ofstream out;
    ifstream in;
    fstream finout;
    Program program;
    string fileName = "Records/Program.dat";

  public:
    void Display_Program()
    {
        in.open(fileName.c_str());
        while (in.read((char *)&program, sizeof(program)))
            {
                program.Display();
            }
        in.close();
    }

    void Enter_Program()
    {
        out.open(fileName.c_str(), ios::app);
        program.Enter();
        out.write((char *)&program, sizeof(program));
        out.close();
    }

    Program Find_Program(long long int n)
    {
        in.open(fileName.c_str());
        int found = 0;
        while (in.read((char *)&program, sizeof(program)))
        {
            if (program.getProgramID() == n)
            {
                in.close();
                found = 1;
                return program;
            }
        }
        in.close();
    }

    void Delete_Program(long long int n)
    {
        in.open(fileName.c_str());
        out.open("Records/Temp.dat", ios::out);
        while (in.read((char *)&program, sizeof(program)))
        {
            if (program.getProgramID() != n)
            {
                out.write((char *)&program, sizeof(program));
            }
        }
        in.close();
        out.close();
        remove(fileName.c_str());
        rename("Records/Temp.dat", fileName.c_str());
    }

    void Update_Program(long long int n)
    {
        finout.open(fileName.c_str(), ios::in | ios::out);
        int found = 0;
        while (finout.read((char *)&program, sizeof(program)))
        {
            if (program.getProgramID() == n)
            {
                program.Display();
                long long int pos = -1 * sizeof(program);
                finout.seekp(pos, ios::cur);
                cout << "\n\n\n\n\n\n\n\n\n\n\n";
                cout << "\t\t||------------------------------------------------||\n";
                cout << "\t\t     Enter the new details of Program\n";
                cout << "\t\t||------------------------------------------------||\n";
                cout << "\n\n";
                program.Enter();
                finout.write((char *)&program, sizeof(program));
            }
        }
        finout.close();
    }
    int checkprogramaval(long long int n)
	{
		in.open(fileName.c_str());
		int res = 0;
		while (in.read((char *)&program, sizeof(program)))
		{
			if (program.getProgramID() == n)
			{
				res = 1;
			}
		}
		in.close();
		return res;
	}

    void ListAllPrograms()
    {
        in.open(fileName.c_str());
        while (in.read((char *)&program, sizeof(program)))
        {
            program.Display();
        }
        in.close();
    }
};
