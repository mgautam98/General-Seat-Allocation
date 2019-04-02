//Gale–Shapley algorithm

class EligibleStudent
{
  protected:
    string rollNo;
    int AIR;
    string category;
    vector<int> preference;

    EligibleStudent()
    {
    }

    EligibleStudent(string roll, string air, string cat, vector<int> pref) : preference(pref)
    {
        rollNo = rollNo;
        AIR = stoi(air);
        category = cat;
    }
};

vector<EligibleStudent> EligibleStudents;

void ReadStudents()
{
    ifstream in;
    Student student;
    string StudentfileName = "Records/Student.dat";
    in.open(StudentfileName.c_str(), ios::binary);
    while (in.read((char *)&student, sizeof(student)))
    {
    }
    in.close();
}

void Allocate()
{
}