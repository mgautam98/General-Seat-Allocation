//Gale–Shapley algorithm

class EligibleStudent
{
  public:
    string rollNo;
    int AIR;
    string category;
    bool isAlloted;
    vector<int> preference;

    EligibleStudent()
    {
        isAlloted = false;
    }

    EligibleStudent(string roll, string air, string cat, vector<int> pref) : preference(pref)
    {
        rollNo = rollNo;
        AIR = stoi(air);
        category = cat;
        isAlloted = false;
    }
};

class AvailableProgram{
    public:
    int capacity;
    int programID;
    bool Engaged;
    EligibleStudent allotedStudent;

    AvailableProgram(){
        Engaged = false;
    }

    AvailableProgram(string proID, int cap){
        capacity = cap;
        programID = stoi(proID);
    }
};

vector<EligibleStudent> EligibleStudents;
vector<AvailableProgram> AvailablePrograms;

void ReadStudents()
{
    ifstream in;
    Student student;
    string StudentfileName = "Records/Student.dat";
    in.open(StudentfileName.c_str(), ios::binary);
    while (in.read((char *)&student, sizeof(student)))
    {
        EligibleStudent newStudent(student.roll, student.air, student.category, student.preference);
        EligibleStudents.push_back(newStudent);
    }
    in.close();
}

void ReadPrograms()
{
    ifstream in;
    Program program;
    string fileName = "Records/Program.dat";
    in.open(fileName.c_str(), ios::binary);
    while (in.read((char *)&program, sizeof(program)))
    {
        AvailableProgram newProgram(program.program_code, program.Capacity);
        AvailablePrograms.push_back(newProgram);
    }
    in.close();
}

void Allocate()
{
}