//Gale–Shapley algorithm
void ReadStudents()
{
    ifstream in;
    Student stu;
    string StudentfileName = "Records/Student.dat";
    in.open(StudentfileName.c_str());
    while (in.read((char *)&stu, sizeof(stu)))
    {
        EligibleStudent newStudent(stu.roll, stu.air, stu.category, stu.preference);
        EligibleStudents.insert({newStudent.AIR, newStudent});
    }
    in.close();
}

void ReadPrograms()
{
    ifstream in;
    Program program;
    string fileName = "Records/Program.dat";
    in.open(fileName.c_str());
    while (in.read((char *)&program, sizeof(program)))
    {
        AvailableProgram newProgram(program.program_code, program.Capacity);
        AvailablePrograms.insert({newProgram.programID, newProgram});
    }
    in.close();
    return;
}

//EligibleStudents is already sorted
//Gen+OBC+SC/ST
void FirstPass()
{
    for (auto i : EligibleStudents)
    {
        for (int j = 0; j < i.second.preference.size(); j++)
        {
            if (AvailablePrograms[i.second.preference[j]].GenCap > 0)
            {
                AvailablePrograms[i.second.preference[j]].GenCap--;
                i.second.isAlloted = true;
                i.second.AllotedCode = i.second.preference[j];
                i.second.AllotedPreference = j;
                break;
            }
        }
    }
}

void SecondPass()
{
    for (auto i : EligibleStudents)
    {
        if (strcmp(i.second.category, "OBC") == 0)
        {
            for (int j = 0; j < i.second.preference.size(); j++)
            {
                if (AvailablePrograms[i.second.preference[j]].ObcCap > 0 && i.second.AllotedPreference < j)
                {
                    AvailablePrograms[i.second.preference[j]].ObcCap--;

                    if (i.second.isAlloted)
                    {
                        AvailablePrograms[i.second.AllotedCode].GenCap++;
                    }

                    i.second.isAlloted = true;
                    i.second.AllotedCode = i.second.preference[j];
                    i.second.AllotedPreference = j;
                    break;
                }
            }
        }
        else if (strcmp(i.second.category, "SC/ST") == 0)
        {
            for (int j = 0; j < i.second.preference.size(); j++)
            {
                if (AvailablePrograms[i.second.preference[j]].scCap > 0 && i.second.AllotedPreference < j)
                {
                    AvailablePrograms[i.second.preference[j]].scCap--;

                    if (i.second.isAlloted)
                    {
                        AvailablePrograms[i.second.AllotedCode].GenCap++;
                    }

                    i.second.isAlloted = true;
                    i.second.AllotedCode = i.second.preference[j];
                    i.second.AllotedPreference = j;
                    break;
                }
            }
        }
    }
}

void ThirdPass()
{
    for (auto i : EligibleStudents)
    {
        for (int j = 0; j < i.second.preference.size(); j++)
        {
            if (AvailablePrograms[i.second.preference[j]].GenCap > 0 && i.second.AllotedPreference < j)
            {
                if (i.second.isAlloted)
                {
                    if (strcmp(i.second.category, "GEN") == 0)
                    {
                        AvailablePrograms[i.second.AllotedCode].GenCap++;
                    }
                    else if (strcmp(i.second.category, "OBC") == 0)
                    {
                        AvailablePrograms[i.second.AllotedCode].ObcCap++;
                    }
                    else
                    {
                        AvailablePrograms[i.second.AllotedCode].scCap++;
                    }
                }
                AvailablePrograms[i.second.preference[j]].GenCap--;
                i.second.isAlloted = true;
                i.second.AllotedCode = i.second.preference[j];
                i.second.AllotedPreference = j;
                break;
            }
        }
    }
}

void DisplayAllocation(){
    for(auto i:EligibleStudents){
        cout << "\t\t Student Roll No. : " << i.second.rollNo<< "   Alloted Program : "<<i.second.AllotedCode<<endl;
    }
}

//Eligible students will make proposals
void Allocate()
{
    ReadStudents();
    ReadPrograms();
    FirstPass();
    SecondPass();
    ThirdPass();
    DisplayAllocation();
}