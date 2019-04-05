
class EligibleStudent
{
  public:
    int rollNo;
    int AIR;
    char category[10];
    bool isAlloted;
    int AllotedCode;
    int AllotedPreference;
    vector<int> preference;

    EligibleStudent()
    {
        isAlloted = false;
    }

    EligibleStudent(int roll, int air, char* cat, vector<int> pref) : preference(pref)
    {
        rollNo = rollNo;
        AIR = air;
        strcpy(category, cat);
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

    AvailableProgram(int proID, int cap)
    {
        Totalcapacity = cap;
        programID = proID;
        GenCap = Totalcapacity / 2;
        ObcCap = Totalcapacity / 4;
        scCap = Totalcapacity / 4;
    }
};

map<int, EligibleStudent> EligibleStudents;
map<int, AvailableProgram> AvailablePrograms;


bool alphaString(char *str){
    int len = strlen(str);
    for(int i=0; i<len; i++) 
        if(!isalpha(str[i]))
            return false;
    return true;
}

bool numString(char *str){
    int len = strlen(str);
    for(int i=0; i<len; i++) 
        if(!isdigit(str[i]))
            return false;
    return true;
}