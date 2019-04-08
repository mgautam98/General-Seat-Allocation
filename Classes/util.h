
class EligibleStudent
{
  public:
    int rollNo;
    int AIR;
    int category;
    bool isAlloted;
    int AllotedCode;
    int AllotedPreference;
    vector<int> preference;

    EligibleStudent()
    {
        isAlloted = false;
    }

    EligibleStudent(int roll, int air, int cat, int pref[20])
    {
        rollNo = roll;
        AIR = air;
        category = cat;
        isAlloted = false;
        AllotedPreference = INT_MAX;
        for(int i=0; i<20; i++){
            if(pref[i]) preference.push_back(pref[i]);
        }
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

bool isValidCategory(int cat){
    if(cat==1 || cat==2 || cat==3) 
        return true;
    return false;
}

bool isValidGender(int gender){
    if(gender==1 || gender==2) 
        return true;
    return false;
}
