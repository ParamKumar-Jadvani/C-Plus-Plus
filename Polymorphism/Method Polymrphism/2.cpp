#include "../../Functions.cpp"

class Cricket
{
public:
    void getTotalOvers()
    {
        C << "Cricket Has 3 Formate That have also 3 types of total overs according to their formats" << endl;
    }
};

class T20Match : public Cricket
{
public:
    void getTotalOvers()
    {
        C << endl
          << "T20 Match is one type of format of Cricket " << endl
          << "They have 20 overs match" << endl;
    }
};

class TestMatch : public Cricket
{
public:
    void getTotalOvers()
    {
        C << endl
          << "Test Match is one type of format of Cricket " << endl
          << "They have 90 overs match per day" << endl;
    }
};

int main()
{
    user();
    return 0;
}

void user()
{
    T20Match a;
    TestMatch b;

    a.getTotalOvers();
    b.getTotalOvers();
}