
class EligibleStudent
{
  public:
    string rollNo;
    int AIR;
    string category;
    bool isAlloted;
    int AllotedCode;
    int AllotedPreference;
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
        AllotedPreference = INT_MAX;
    }
};

class AvailableProgram
{
  public:
    int Totalcapacity;
    int GenCap;
    int ObcCap;
    int scCap;
    int programID;
    bool Engaged;
    EligibleStudent allotedStudent;

    AvailableProgram()
    {
        Engaged = false;
    }

    AvailableProgram(string proID, int cap)
    {
        Totalcapacity = cap;
        programID = stoi(proID);
        GenCap = Totalcapacity / 2;
        ObcCap = Totalcapacity / 4;
        scCap = Totalcapacity / 4;
    }
};

map<int, EligibleStudent> EligibleStudents;
map<int, AvailableProgram> AvailablePrograms;