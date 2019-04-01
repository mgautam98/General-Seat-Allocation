
class seatRecord{
    protected:
    ofstream out;
    ifstream in;
    fstream finout;
    Seat seat;
    string fileName = "Records/Seat.dat";

    public:

    void Display_Seat(){
        in.open(fileName.c_str(), ios::binary);
        while(in.read((char*)&seat), sizeof(seat))){
            seat.Display();
        }
        in.close();
    }

    void Enter_Seat(){
        out.open(fileName.c_str(),ios::binary | ios::app);
        seat.Enter();
        out.write((char*)&seat, sizeof(seat));
        out.close();
    }

};
