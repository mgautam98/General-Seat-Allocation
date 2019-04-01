
class seatRecord
{
  protected:
    ofstream out;
    ifstream in;
    fstream finout;
    Seat seat;
    string fileName = "Records/Seat.dat";

  public:
    void Display_Seat()
    {
        in.open(fileName.c_str(), ios::binary);
        while (in.read((char *)&seat), sizeof(seat)))
            {
                seat.Display();
            }
        in.close();
    }

    void Enter_Seat()
    {
        out.open(fileName.c_str(), ios::binary | ios::app);
        seat.Enter();
        out.write((char *)&seat, sizeof(seat));
        out.close();
    }

    Seat Find_Seat(long long int n)
    {
        in.open(fileName.c_str(), ios::binary);
        int found = 0;
        while (in.read((char *)&seat, sizeof(seat)))
        {
            if (seat.getSeatID() == n)
            {
                in.close();
                found = 1;
                return seat;
            }
        }
        in.close();
    }

    void Delete_Seat(long long int n)
    {
        in.open(fileName.c_str(), ios::binary);
        out.open("Records/Temp.dat", ios::out | ios::binary);
        while (in.read((char *)&seat, sizeof(seat)))
        {
            if (seat.getSeatID() != n)
            {
                out.write((char *)&seat, sizeof(seat));
            }
        }
        in.close();
        out.close();
        remove(fileName.c_str());
        rename("Records/Temp.dat", fileName.c_str());
    }

    void Update_Seat(long long int n)
    {
        finout.open(fileName.c_str(), ios::binary | ios::in | ios::out);
        int found = 0;
        while (finout.read((char *)&seat, sizeof(seat)))
        {
            if (seat.getSeatID() == n)
            {
                seat.Display();
                long long int pos = -1 * sizeof(seat);
                finout.seekp(pos, ios::cur);
                cout << "\n\n\n\n\n\n\n\n\n\n\n";
                cout << "\t\t||------------------------------------------------||\n";
                cout << "\t\t     Enter the new details of Seat\n";
                cout << "\t\t||------------------------------------------------||\n";
                cout << "\n\n";
                seat.Enter();
                finout.write((char *)&seat, sizeof(seat));
            }
        }
        finout.close();
    }
};
