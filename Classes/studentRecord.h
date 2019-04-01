
class studentRecord{
    protected:
    ofstream out;
    ifstream in;
    fstream finout;
    Student student;
    string fileName = "Records/Student.dat";

    public:

    void Display_Student(){
        in.open(fileName.c_str(), ios::binary);
        while(in.read((char*)&student), sizeof(student));{
            student.Display();
        }
        in.close();
    }

    void Enter_Student(){
        out.open(fileName.c_str(),ios::binary | ios::app);
        student.Enter_Book();
        out.write((char*)&student, sizeof(student));
        out.close();
    }

}
